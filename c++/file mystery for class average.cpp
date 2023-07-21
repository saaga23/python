//file mystery + string
#include<iostream>
#include<fstream>
#include<string>
#include<string>
using namespace std;

struct student{
	string matric_no;
	string names;
	int score_CIT310;
	int score_CIT312;
}student_data[100];

int main(){
	char choice;
	int count;
	ofstream new_file ("new_file.txt");
	for (int i=0; choice!='n';i++)
		{
			if ((choice == 'y') || (choice == 'Y'))
				{
					cout << "enter student matric number\n";
					cin >> student_data[i].matric_no;
					cout << "enter student matric number\n";
					cin >> student_data[i].names;
					cout << "enter student Cit310score\n";
					cin >> student_data[i].score_CIT310;
					cout << "enter student Cit 312 score\n";
					cin >> student_data[i].score_CIT312;
					
					new_file << student_data[i].matric_no << endl
					   << student_data[i].names << endl
					   << student_data[i].score_CIT310 << endl
					   << student_data[i].score_CIT312 << endl;
					  count = count + 1; 
				}
		new_file.close();
		}
	ifstream new_file("new_file.txt");
	string number;
	float sum;
	float average;				
	cout << "enter student matric number";
	cin >> number;
	for( int j= 0;(j<count) || (!new_file.eof()); j++)
	{
	
		getline(new_file,student_data[j].matric_no);
		if (student_data[j].matric_no == number)
			{
			cout << "student average is ";
			sum = (getline(new_file,student_data[j].score_CIT310)) + (getline(new_file,student_data[j].score_CIT312));
			average = sum/2;
			cout << average;
			}
	}
	new_file.close();
	
		
					
	return 0;
}