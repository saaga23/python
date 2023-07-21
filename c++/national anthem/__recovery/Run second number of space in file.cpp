 #include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
	// Create and open a text file
	ofstream heat("anthem.txt");
	
	//cWrite to the file
	heat << "Nigeria Arise, O Compatriots,Nigeria's call obey To serve our Fatherland With love and strength and faith.The labour of our heroes past Shall never be in vain,To serve with heart and might One nation bound in freedom, peace and unity.";
	
	// Close the file
	heat.close();
	
	// code for number of space in anthem
   char filename[30], ch, str[1000];
   int tot=0, i=0, tot_blanks=0;
   ifstream fp;
   cout<<"Enter the Name of File: ";
   cin>>filename;
   fp.open(filename, ifstream::in);
   if(!fp)
   {
      cout<<endl<<"File doesn't exist or Access denied!";
      return 0;
   }
   while(fp>>noskipws>>ch)
   {
      str[tot] = ch;
      tot++;
   }
   fp.close();
   str[tot]='\0';
   while(str[i]!='\0')
   {
      if(str[i]==' ')
         tot_blanks++;
      i++;
   }
   cout<<endl<<"Total Number of Blank Spaces = "<<tot_blanks;
   cout<<endl;
   while(fp>>noskipws>>ch)
    {
	    tot++;
	}
   fp.close();
   cout<<endl<<"Total Characters = "<<tot;
   cout<<endl;
   //  appending pledge
   heat.open(filename, fstream::app);
   return 0;
}
