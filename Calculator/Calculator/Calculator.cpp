#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b);
int subtraction(int a, int b);
int multiple(int a, int b);
int divide(int a, int b);
int mod(int a, int b);

int main()
{
    int choice = -1;
    int number1,number2;

    while (choice != 0)
    {
        cout << "0 - Exit" << "\n";
        cout << "1 - Sum" << "\n";
        cout << "2 - Subtraction" << "\n";
        cout << "3 - Multiple" << "\n";
        cout << "4 - Divide" << "\n";
        cout << "5 - Mod" << "\n";
        cout << "Your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 0:
                cout << "Exiting...";
                break;
            

            case 1:
                cout << "First number : ";
                cin >> number1;

                cout << "Second number : ";
                cin >> number2;

                cout << "Sum : " << sum(number1, number2) << "\n\n";
                break;


            case 2:
                cout << "First number : ";
                cin >> number1;

                cout << "Second number : ";
                cin >> number2;

                cout << "Subtraction : " << subtraction(number1, number2) << "\n\n";
                break;


            case 3:
                cout << "First number : ";
                cin >> number1;

                cout << "Second number : ";
                cin >> number2;

                cout << "Multiple : " << multiple(number1, number2) << "\n\n";
                break;


            case 4:
                cout << "First number : ";
                cin >> number1;

                cout << "Second number : ";
                cin >> number2;

                cout << "Divide : " << divide(number1, number2) << "\n\n";
                break;


            case 5:
                cout << "First number : ";
                cin >> number1;

                cout << "Second number : ";
                cin >> number2;

                cout << "Mod : " << mod(number1, number2) << "\n\n";
                break;

            default:
                cout << "Wrong choice.Please try again." << endl;
        }
    }
}



int sum(int a,int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}


int multiple(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    
    else 
    {
        cout << "The second number can't be zero. \n";
        return 0;
    }
}

int mod(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }

    else
    {
        cout << "The second number can't be zero. \n";
        return 0;
    }
    
}