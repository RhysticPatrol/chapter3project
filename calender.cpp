#include <iostream>

using namespace std;

int main()
{
    int month;
    int year;
    cout << "Hello, please enter month it is (please use numerals 1-12)";
    cin >> month;
    cout << "\nNow please enter the year.";
    cin >> year;

    switch (month) 
    {
        case 1: 
        {
        cout << "31 days";
        break;
        }
        case 2: 
        if(year % 100 == 0 && year % 400 == 0) // math for the leap year
        {
            cout << "29 days. It's a leap year!";
            break;
        }

        else 

        {
            cout << "28 days"; // if it's not a leap year
            break;
        }
        //continue down list of months
        case 3:
        {
            cout << "31 days";
        break;
        }

        case 4:
        {
            cout << "30 days";
        break;
        }
        case 5:
        {
            cout << "31 days";
        break;
        }

        case 6:
        {
            cout << "30 days";
        break;
        }


        case 7:
        {
            cout << "31 days";
        break;
        }

        case 8:
        {
            cout << "31 days";
        break;
        }

        case 9:
        {
            cout << "31 days";
        break;
        }

        case 10:
        {
            cout << "31 days";
        break;
        }

        case 11:
        {
            cout << "30 days";
        break;
        }

        case 12:
        {
            cout << "31 days";
        break;
        }

        default: //error msg
        cout << "please enter a valid input";
    }
return 0;
    
}