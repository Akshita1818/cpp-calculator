#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
     
    int choice;
    cout << "\n1. Add";
    cout << "\n2. Subtract";
    cout << "\n3. Divide";
    cout << "\n4. Modulo";
    cout << "\n5. Start Over";
    
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;

        case 3:
            if(num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Cannot divide by zero!" << endl;
            break;

        case 4:
            cout << "Result: " << num1 % num2 << endl;
            break;

        case 5:
            cout << "Restarting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}