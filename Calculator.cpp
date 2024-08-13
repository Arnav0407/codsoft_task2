#include <iostream>
using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int sub(int a, int b)
{
    int diff = a - b;
    return diff;
}

int mult(int a, int b)
{
    int multi = a * b;
    return multi;
}

int diff(int a, int b)
{
    float diff = (float)a / b;
    return diff;
}

int main()
{
    int choice = -1, num1, num2;

    while (choice != 0)
    {
        cout << endl
             << "-----------------Menu-----------------" << endl;
        cout << "0. Exit" << endl;
        cout << "1. Addition" << endl;
        cout << "2. subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl
             << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        cout << endl;

        if (choice == 0)
        {
            cout << "Exiting...";
            break;
        }

        cout << "Enter first number : ";
        cin >> num1;
        cout << "Enter second number : ";
        cin >> num2;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << num1 << " + " << num2 << " = " << add(num1, num2);
            break;

        case 2:
            cout << num1 << " - " << num2 << " = " << sub(num1, num2);
            break;

        case 3:
            cout << num1 << " x " << num2 << " = " << mult(num1, num2);
            break;

        case 4:
            cout << num1 << " ÷ " << num2 << " = " << diff(num1, num2);
            break;

        default:
            cout << "Invalid input, try again!" << endl;
            break;
        }
    }

    cout << "Thanks a lot !!!" << endl
         << endl;

    return 0;
}
