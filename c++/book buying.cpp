//a book program
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class book  {
	private:
		char *author,*title,*publisher;
		float *price;
		int * stock;
		
	public:
		book() {
			author= new char[20];
			
			title= new char[20];
			publisher = new char[20];
			price = new float;
			stock=new int;
		}
		void feeddata();
		void editdata();
		void showdata();
		int search(char[],char[]);
		void buybook();
};

void book::feeddata()  {
	cin.ignore();
	cout<<"\nEnter Author Name: "; cin.getline(author,20);
	cout<<"Enter Title Name: ";  cin.getline(title,20);
	cout<<"Enter Publisher Name: "; cin.getline(publisher,20);
	cout<<"Enter Price: ";   cin>>*price;
	cout<<"Enter Stock Position: ";  cin>>*stock;
	
}

int book::search(char tbuy[20],char abuy[20]) {
	if(strcmp(tbuy,title)==0 && strcmp(abuy,author)==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
void  book::buybook()  {
	int count;
	cout<<"\nEnter Number of Books to buy: ";
	cin >> count;
	if(count<=*stock)  
	{
		*stock=*stock=count;
		cout<<'\nBooks Bought Successfully';
		cout<<"\nAmount: Rs. "<<(*price)*count;
	}
	else
	{
		cout<<"\nRequired Copies not in Stock";
	}
}
}

int main()
{
	book *B[20];
	int i=0,r,t,choice;
	char titlebuy[20],authorbuy[20];
	while(1)
		{
			cout <<"\n\n\t\tMENU"
			<<"\n1. Entry of New Book"
			<<"\n2. Buy Book"
			<<"\n3. Search For Book"
			<<"\n4. Edit Details of Book"
			<<"\n5. Exit"
			
			<<"\n\Enter your choice: ";
			cin>>choice;
			
			switch(choice) {
				case 1: B[i] = new nook;
						B[i]->feeddata();
						i++; break;
						
				case 3: cin.ignore();
						cout <<"\nEnter Title of Book: "; cin.getline(titlebuy,20);
						cout <<"Enter Autor Of Book: "; cin.getline(authorbuy,20);
						
						for(t=0;t<1;t++)
						{
							if(B[t]->search(titlebuy,authorbuy))  {
								cout <<"\nBook Found Successfully";
								break;
							}
							if(t==i)
							cout<<"\nThis Book is Not in Stock";
							break;
					}
							
				case 4: cin.ignore();
						cout<<"\nEnter Title of Book: "; cin.getline(titlebuy,20);
						cout <<"Enter Author of Book: "; cin.getline(authorbuy,20);
						
						for(t=0;t<1;t++)
						{
							if(B[t]->search((titlebuy,authorbuy)))
							{
								cout << "\nBook Found Successfully";
								B[t]->editdata();
								break;
							}
						}
						if(t==i)
						{
							cout<<"\nThis Book is Not in Stock";
							
						}
						break;
						
					case 5: exit(0);
					default: cout<<"\nInvalid Choice Entered";
						
			}
		}
		
	return o;
}
