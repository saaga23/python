#include&lt;iostream&gt;
#include&lt;vector&gt;
#include&lt;stdio.h&gt;
#include&lt;cstring&gt;
#include&lt;fstream&gt;
#include&lt;algorithm&gt;
using namespace std;
class student
{
public:
long int reg;
char name&#91;80],branch&#91;50];
void input()
{
cout&lt;&lt;"\n Enter name: ";
gets(name);
cout&lt;&lt;"\n Enter roll no: ";
cin&gt;&gt;reg;
fflush(stdin);
cout&lt;&lt;"\n Enter Branch: ";
gets(branch);
}
void display()
{
system("CLS");
cout&lt;&lt;"\t\tDisplay Records";
cout&lt;&lt;"\n";
cout&lt;&lt;"\n Name - "&lt;&lt;name;
cout&lt;&lt;"\n Reg no. - "&lt;&lt;reg;
cout&lt;&lt;"\n Branch - "&lt;&lt;branch;
cout&lt;&lt;"\n";
system("PAUSE");
system("CLS");
}
bool operator == (student a)
{
if(reg==a.reg)
return true;
else
return false;
}
};
vector &lt;student&gt;v;
int search_reg(long int reg,int &amp;i);
void get_file()
{
student x;
int i=0;
fstream f;
f.open("College.txt",ios::in);
if(f)
{
f.read((char *) &amp;x,sizeof(class student));
while(!f.eof())
{
v.push_back(x);
f.read((char *) &amp;x,sizeof(class student));
}
}
else
;
f.close();
}
void bubblesort()
{
int i,j;
student x;
for(i=0;i&lt;v.size();i++)
for(j=0;j&lt;v.size()-i-1;j++)
if(v&#91;j].reg&gt;v&#91;j+1].reg)
{
x=v&#91;j];
v&#91;j]=v&#91;j+1];
v&#91;j+1]=x;
}
}
void insert_new()
{
char ch='y';
int ta;
while(ch=='y')
{
fflush(stdin);
student x;
x.input();
if(search_reg(x.reg,ta)==0)
v.push_back(x);
else
cout&lt;&lt;"\nTHE REGISTRATION NO. ALREADY EXIST!!!\nCANNOT ADD";
cout&lt;&lt;"\n Press &#91;Y] to enter more: ";
cin&gt;&gt;ch;
fflush(stdin);
}
}
void write_file()
{
bubblesort();
fstream f;
f.open("College.txt",ios::out);
for(int i=0;i&lt;v.size();i++)
{
student x=v&#91;i];
f.write((char *) &amp;x,sizeof(class student));
}
f.close();
}
int search_reg(long int reg,int &amp;i)
{
int ta=0;
for(i=0;i&lt;v.size();i++)
if(v&#91;i].reg==reg)
{
ta=1;
break;
}
return ta;
}
int search_name(char name&#91;],vector&lt;int&gt; &amp;vi)
{
int i,ta=0;
for(i=0;i&lt;v.size();i++)
if(strcmp(v&#91;i].name,name)==0)
{
ta=1;
vi.push_back(i);
}
return ta;
}
int search_branch(char branch&#91;],vector&lt;int&gt; &amp;vj)
{
int i,ta=0;
for(i=0;i&lt;v.size();i++)
if(strcmp(v&#91;i].branch,branch)==0)
{
ta=1;
vj.push_back(i);
}
return ta;
}
void search_and_show()
{
int ch,i,ta=0;
char name&#91;80],branch&#91;50];
vector &lt;int&gt;vi;
vector &lt;int&gt;vj;
long int reg;
poi:
cout&lt;&lt;"\n1.Press to search reg no."
&lt;&lt;"\n2.Press to search name"
&lt;&lt;"\n3.Press to search branch";
cin&gt;&gt;ch;
switch(ch)
{
case 1:
cout&lt;&lt;"\nEnter reg no.: ";
cin&gt;&gt;reg;
if(search_reg(reg,i)==1)
v&#91;i].display();
else
cout&lt;&lt;"\nRecord NOT FOUND!!!";
break;
case 2:
cout&lt;&lt;"\nEnter name: ";
fflush(stdin);
gets(name);
if(search_name(name,vi)==1)
{
for(int j=0;j&lt;vi.size();j++)
v&#91;vi&#91;j]].display();
}
else
cout&lt;&lt;"\nRecord NOT FOUND!!!";
break;
case 3:
cout&lt;&lt;"\nEnter branch: ";
fflush(stdin);
gets(branch);
if(search_branch(branch,vj)==1)
{
for(int j=0;j&lt;vj.size();j++)
v&#91;vj&#91;j]].display();
}
else
cout&lt;&lt;"\nRecord NOT FOUND!!!";
break;
default:
cout&lt;&lt;"\nWrong CHOICE!!!";
goto poi;
}
}
void show()
{
int i;
for(i=0;i&lt;v.size();i++)
v&#91;i].display();
}
void delete_data()
{
int i,j;
long int reg;
vector &lt;student&gt;::iterator p=v.begin();
cout&lt;&lt;"\nEnter Reg. no.: ";
cin&gt;&gt;reg;
if(search_reg(reg,i)==1)
{
student x=v&#91;i];
cout&lt;&lt;"\nThe following data is being deleted";
x.display();
p+=i;
v.erase(p,p+1);
}
}
void edit_data()
{
int i,j;
long int reg;
vector &lt;student&gt;vi;
cout&lt;&lt;"\nEnter Reg. no.: ";
cin&gt;&gt;reg;
if(search_reg(reg,i)==1)
{
cout&lt;&lt;"\nEnter new data:";
fflush(stdin);
v&#91;i].input();
}
}
int main()
{
int i=1;
get_file();
while(i)
{
system("CLS");
cout&lt;&lt;"\t\t\t-----------------------------------------\n";
cout&lt;&lt;"\t\t\t     Simple College Management System\n";
cout&lt;&lt;"\t\t\t-----------------------------------------\n";
cout&lt;&lt;"\n\t\t\tEnter &lt;1&gt; to Add new student"
&lt;&lt;"\n\t\t\tEnter &lt;2&gt; to Display all student"
&lt;&lt;"\n\t\t\tEnter &lt;3&gt; to Remove student"
&lt;&lt;"\n\t\t\tEnter &lt;4&gt; to Edit student"
&lt;&lt;"\n\t\t\tEnter &lt;5&gt; to Search student"
&lt;&lt;"\n\t\t\tEnter &lt;0&gt; to Exit\n";
cout&lt;&lt;"\n\n\t\t\tEnter Your Choice:";
cin&gt;&gt;i;
switch(i)
{
case 1 :
insert_new();
break;
case 2 :
show();
break;
case 3 :
delete_data();
break;
case 4 :
edit_data();
break;
case 5 :
search_and_show();
break;
case 0 :
write_file();
break;
default :
cout&lt;&lt;"\nWRONG CHOICE!!!\nTRY AGAIN";
}
}
return 0;
}

