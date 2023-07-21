#include<windows.h>
#include<iostream>
#include<string>

using namespace std;

int guess;
int total;

class question
{
	private:
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
	cout << "*           * WELCOME TO THE COURSE QUIZ!*         *" << endl;
	cout << "*  --------------------------------------------    *" << endl;
	cout << "*                      BY                          *" << endl;
	cout << "*                                                  *" << endl;
	cout << "*                 Sunday aspita                    *" << endl;  
	cout << "* * * * * * * * * * * * * * * * * * *  * * * * * * *" << endl;
	cout <<  endl;
	
	cout << "Press Enter to start the quiz ....."<< endl;
	cin.get();
	
	string Name;
	int Age;
	cout << "What's your name? " << endl;
	cin >> Name;
	cout << endl;
	cout << "How old are you? " << endl;
	cin >> Age;
	cout << endl;
	string Respond;
	cout << "Are you ready to take the quiz " << Name  << " ? Yes/No." << endl;
	cin >> Respond;
	if (Respond == "yes")
	{
		cout << endl;
		cout << "Ok, Good Luck! " << endl;
		cout << endl;
			
	}
	else{
		cout << "Ol, Goodbye!" <<endl;
		return 0;
	}
	
	question q1;
	question q2;
	question q3;
	question q4;
	question q5;
	question q6;
	question q7;
	question q8;
	question q9;
	question q10;
	
	q1.setValues("What is the only function all c++ programs must contain?","start()","system ()", "main ()","program ()",3,10);
	q2.setValues("What is the only function all c++ programs must contain?","start()","system ()", "main ()","program ()",3,10);
	q3.setValues("What is the only function all c++ programs must contain?","start()","system ()", "main ()","program ()",3,10);	   
	q4.setValues("What is the only function all c++ programs must contain?","start()","system ()", "main ()","program ()",3,10);	   
	q5.setValues("What is the only function all c++ programs must contain?","start()","system ()", "main ()","program ()",3,10);	   
	q6.setValues("What is the only function all c++ programs must contain?","start()","system ()", "main ()","program ()",3,10);	   
	q7.setValues("What is the only function all c++ programs must contain?","start()","system ()", "main ()","program ()",3,10);
	q8.setValues("What is the only function all c++ programs must contain?","start()","system ()", "main ()","program ()",3,10);
	q9.setValues("What is the only function all c++ programs must contain?","start()","system ()", "main ()","program ()",3,10);
	q10.setValues("What is the only function all c++ programs must contain?","start()","system ()", "main ()","program ()",3,10);
	q1. askquestion();
	q2. askquestion();	 
	q3. askquestion();	 
	q4. askquestion(); 
	q5. askquestion();	 
	q6. askquestion(); 
	q7. askquestion();	 
	q8. askquestion(); 
	q9. askquestion();	 
	q10. askquestion();
	
	cout << "Your Total score is " << total << " out of 100 " << endl;
	cout << endl;
	if (total >= 70)
	{
		cout << "Great you passed the quiz" << endl;
		cout << endl;
		cout << "$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ " << endl;
		cout << "$                                   $ " << endl;
		cout << "$       ** CONGRATULATIONS **       $ " << endl;
		cout << "$                                   $ " << endl;
		cout << "$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ " << endl;
				   } 
	else
	{
		cout << "Sorry you failed the quiz. " << endl;
		cout << endl;
		cout << "Better luck next time!" << endl;
	}
	return 0;
}
void question::setValues(string q, string a1, string a2, string a3, string a4, int ca , int pa)
{
	question_text = q;
	answer_1 = a1;
	answer_2 = a2;
	answer_3 = a3;
	answer_4 = a4;
	correct_answer = ca;
	question_score = pa;
}

void question::askquestion()
{
	cout << endl;
	cout << question_text << endl;
	cout << "1. " << answer_1 << endl;
	cout << "2. " << answer_2 << endl;
	cout << "3. " << answer_3 << endl;
	cout << "4. " << answer_4 << endl;
	cout << endl;
	
	cout << "what is your answer?" << endl;
	cin >> guess;
	if (guess == correct_answer)
	{
	
		cout << endl;
		cout << "Great! you are correct." << endl;
		total = total + question_score;
		cout << "Score: " << question_score << " Out of " << question_score << "!" << endl;
		cout << endl;
		
}
}