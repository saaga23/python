#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
int main()
{
   char filename[20], str[500];
   fstream fp;
   cout<<"Enter File's Name: ";
   gets(filename);
   fp.open(filename, fstream::app);
   if(!fp)
   {
      cout<<"\nFile doesn't exist or Access denied!";
      return 0;
   }
   cout<<"Enter the Data: ";
   gets(str);
   while(strlen(str)>0)
   {
      fp<<"\n";
      fp<<str;
      gets(str);
   }
   fp.close();
   cout<<endl;
   return 0;
}
/* I pledge to Nigeria my Country
	To be faithful, loyal and honest
	To serve Nigeria with all my strength
	To defend her unity
	And uphold her honour and glory
	So help me God.
	*/