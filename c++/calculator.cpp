#include<iostream>//input and output stream
#include<conio.h>//(console input and output)make use of inbuilt functions like getch() and clrscr()  takes input from keyboard display it on the screen
#include <windows.h>//contains declaration for all of the functions in the windows API and all data types used by various functions and subsystems.
using namespace std;

class getdata
{
    public:
    int num1, num2, choice;
    void get()
    {
        cout << "Enter 2 numbers: ";
        cin >> num1 >> num2;
        cout << "1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Remainder \nEnter choice: ";
        cin >> choice;
    }
};

class add_sub : public getdata
{
    public:
    int add(int n1, int n2)
    {
        return n1 + n2;
    }
    int subtract(int n1, int n2)
    {
        return n1 - n2;
    }
};

class mult_div : public add_sub
{
    public:
    int product(int n1, int n2)
    {
        return n1 * n2;
    }
    float quotient(int n1, int n2)
    {
        if (n2 == 0)
        {
            cout << "Division by 0 NOT possible!";
        }
        else
        {
            return (float)n1 / n2;
        }
    }
    int remainder(int n1, int n2)
    {
        return n1 % n2;
    }
};

class display : public mult_div//inherits properties from mult_div
{
    public:
    void print()
    {
        switch (choice)
        {
        case 1:
            cout << "Sum = " << add(num1, num2);
            break;
        case 2:
            cout << "Difference = " << subtract(num1, num2);
            break;
        case 3:
            cout << "Product = " << product(num1, num2);
            break;
        case 4:
            cout << "Quotient = " << quotient(num1, num2);
            break;
        case 5:
            cout << "Remainder = " << remainder(num1, num2);
            break;
        default:
            cout << "Enter valid choice!";
        }
    }
};

int main()
{
    system("cls");
    char ch = 'Y';

    do
    {
        display obj1;//object using construtor and class
        obj1.get();// explains inheritance perfectly
        obj1.print();
        cout << "\nDo you want to continue? [Y/N]: ";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y'); // if ch is "y" or "Y".
	{
		system("cls");
    	getch();//tells the compiler to wait until the user enters a character.
}
    return 0;
}


