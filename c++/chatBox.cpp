#include<windows.h>
#include<iostream>
#include<string>

using namespace std;

int guess;
int total;

class question
{
	Private:
		string question_text;
		string answer_1;
		string answer_2;
		string answer_3;
		string answer_4;
		
		int correct_answer;
		int question_score;
		
	public:
		void setValues (string, string, string, string, string, int, int);
		void askquestion ();
};

int main()
{
	cout << "* * * * * * * * * * * * * * * * * * *  * * * * * * *" << endl;
	cout << "*                                                   " << endl;
	cout << "*           * WELCOME TO THE COURSE QUIZ"
}