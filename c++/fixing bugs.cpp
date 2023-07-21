#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;


struct student
{
 string fname;
 string lname;
 string Registration;
 string classes;
}studentData[100];


struct teacher
{
 string fst_name;
 string lst_name;
 string qualification;
 string exp;
 string pay;
 string subj;
 string lec;
 string addrs;
 string cel_no;
 string blod_grp;
 string serves;

}tech[100];


int main()
{
	int login();
	login();

int i=0,j;
char choice;
string find;
string srch;

while(1)
{
 system("cls");


 cout<<"\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t  COLLEGE MANAGEMENT SYSTEM\n\n";
 cout<<"\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t:MAIN SCREEN:\n\n";
 cout<<"\t\t\t1. Student Section"<<endl;
 cout<<"\t\t\t2. Teacher Section"<<endl;
 cout<<"\t\t\t3. Exit Program"<<endl;
  cout<<"\n\n\t\tEnter your choice: ";
 cin>>choice;

system("cls");

switch(choice)
{

case '1':
 {
while(1)
{
system("cls");

cout<<"\t\tSTUDENT INFORMATION DATA SECTION\n\n\n";
cout<<"\t\t\t1. Register new student\n";
cout<<"\t\t\t2. Search and display student\n";
cout<<"\t\t\t3. Back to main menu\n";
cout<<"\n\n\t\tEnter your choice: ";
cin>>choice;

switch (choice)
{
case '1':
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n'&& choice!='N';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
	system("CLS");
 cout<<"\t\t\tNEW ENTRY\n\n";
 cout<<"\t\t\tEnter First name: ";
 cin>>studentData[i].fname;
 cout<<"\n\t\t\tEnter Last name: ";
 cin>>studentData[i].lname;
 cout<<"\n\t\t\tEnter Registration number: ";
 cin>>studentData[i].Registration;
 cout<<"\n\t\t\tEnter class: ";
 cin>>studentData[i].classes;

 f1<<studentData[i].fname<<endl
   <<studentData[i].lname<<endl
   <<studentData[i].Registration<<endl
   <<studentData[i].classes<<endl;
 cout<<"\n\n\t\t\tDo you want to enter data: ";
 cout<<"\n\t\t\tPress Y for Continue and N to Finish:  ";
 cin>>choice;
}
}
f1.close();
}
continue;

case '2':
{  ifstream f2("student.txt");
system("CLS");
cout<<"\n\t\tDISPLAY STUDENT'S DATA\n";
cout<<"\n\t\t\tEnter First name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{

getline(f2,studentData[j].fname);

if(studentData[j].fname==find)
{
 notFound = 1;
 cout<<"\n\t\t\tFirst Name: "<<studentData[j].fname<<endl;
 getline(f2,studentData[j].lname);
 cout<<"\n\t\t\tLast Name: "<<studentData[j].lname<<endl;
 getline(f2,studentData[j].Registration);
 cout<<"\n\t\t\tRegistration Number: "<<studentData[j].Registration<<endl;
 getline(f2,studentData[j].classes);
 cout<<"\n\t\t\tClass: "<<studentData[j].classes<<endl<<endl;
 
}

}


if(notFound == 0){

cout<<"\n\t\tNo Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
getch();
getch();

}
continue;

case '3':
{
break;
}
}

break;
}
continue;
}

case '2':
{
while(1)
{
system("cls");

cout<<"\t\tTEACHER INFORMATION DATA SECTION\n\n\n";
cout<<"\t\t\t1. Register new teacher\n";
cout<<"\t\t\t2. Search and display teacher\n";
cout<<"\t\t\t3. Back to main menu\n";
cout<<"\n\n\t\tEnter your choice: ";
cin>>choice;

switch (choice)
{
case '1':
{
ofstream t1("teacher.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{

 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
 	system("CLS");
  cout<<"\t\t\tEnter First name: ";
  cin>>tech[i].fst_name;
  cout<<"\n\t\t\tEnter Last name: ";
  cin>>tech[i].lst_name;
  cout<<"\n\t\t\tEnter Qualification: ";
  cin>>tech[i].qualification;
  cout<<"\n\t\t\tEnter Experiance(year): ";
  cin>>tech[i].exp;
  cout<<"\n\t\t\tEnter Year in this college: ";
  cin>>tech[i].serves;
  cout<<"\n\t\t\tEnter Subject: ";
  cin>>tech[i].subj;
  cout<<"\n\t\t\tEnter Lecture(per Week): ";
  cin>>tech[i].lec;
  cout<<"\n\t\t\tEnter Pay: ";
  cin>>tech[i].pay;
  cout<<"\n\t\t\tAddress: ";
  cin>>tech[i].addrs;
  cout<<"\n\t\t\tEnter Phone Number: ";
  cin>>tech[i].cel_no;
  cout<<"\n\t\t\tEnter Blood Group: ";
  cin>>tech[i].blod_grp;

  t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl
   <<tech[i].qualification<<endl<<tech[i].exp<<endl
   <<tech[i].serves<<endl<<tech[i].subj<<endl<<tech[i].lec
   <<endl<<tech[i].pay<<endl<<tech[i].addrs<<endl<<tech[i].cel_no<<endl<<tech[i].blod_grp<<endl;
  cout<<"\n\n\t\t\tDo you want to enter data: ";
  cin>>choice;
 }
}

system("cls");

t1.close();
}

continue;

case '2':
{
ifstream t2("teacher.txt");
system("CLS");
cout<<"\n\t\tDISPLAY TEACHER'S DATA\n";
cout<<"\n\t\t\tEnter name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{

 getline(t2,tech[j].fst_name);

 if(tech[j].fst_name==find)
 {
  notFound = 1;
  cout<<"\n\t\t\tFirst name: "<<tech[j].fst_name<<endl;
  getline(t2,tech[j].lst_name);
  cout<<"\n\t\t\tLast name: "<<tech[j].lst_name<<endl;
  getline(t2,tech[j].qualification);
  cout<<"\n\t\t\tQualification: "<<tech[j].qualification<<endl;
  getline(t2,tech[j].exp);
  cout<<"\n\t\t\tExperience: "<<tech[j].exp<<endl;

  getline(t2,tech[j].serves);
  cout<<"\n\t\t\tYear in this School: "<<tech[j].serves<<endl;

  getline(t2,tech[j].subj);
  cout<<"\n\t\t\tSubject: "<<tech[j].subj<<endl;

  getline(t2,tech[j].lec);
  cout<<"\n\t\t\tLecture (per Week): "<<tech[j].lec<<endl;
  getline(t2,tech[j].pay);
  cout<<"\n\t\t\tPay: "<<tech[j].pay<<endl;

  getline(t2,tech[j].addrs);
  cout<<"\n\t\t\tAddress: "<<tech[j].addrs<<endl;

  getline(t2,tech[j].cel_no);
  cout<<"\n\t\t\tPhone Number: "<<tech[j].cel_no<<endl;

  getline(t2,tech[j].blod_grp);
  cout<<"\n\t\t\tBlood Group: "<<tech[j].blod_grp<<endl;
 }//if

}
t2.close();
if(notFound == 0){

 cout<<"\n\t\tNo Record Found"<<endl;
}
cout<<"Press any key two times to proceed";
getch();
getch();
}

continue;

case '3':
{
break;
}

}

break;
}

continue;
}

case '3':
{
	cout<<"\n Thank you for using the system!";
break;
}
}
break;
}
}


int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t   COLLEGE MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t------------------------------";
   cout<<"\n\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t------------------------------\n\n";
   cout << "\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "admin"){
      cout << "\n\n\n\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\tAccess Aborted...\n\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
   return 0;
}
