#include <iostream>
using namespace std;
int main()
{

    int a, b;
    char ch;
    while (ch != 0)
    {
        cout << "\n--------Calculator--------\n\n";
        cout << "\nEnter first number : ";
        cin >> a;
        cout << "Enter Secont number : ";
        cin >> b;
        cout << endl;
        cout << "Choose the Operator\n\n";
        cout << "1 for Addition\n2 for subtraction\n3 for Multiplication\n4 for division\n0 for Exit\n";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            if (ch == 1)
            {
                cout << "Addition is :" << a + b;
            }
            break;
        }
        case 2:
        {
            if (ch == 2)
            {
                cout << "Substraction is :" << a - b;
            }
            break;
        }
        case 3:
        {
            if (ch == 3)
            {
                cout << "Multiplaction is :" << a * b;
            }
            break;
        }
        case 4:
        {
            if (ch == 4)
            {
                cout << "Division is :" << a / b;
            }
        }

        default:
            cout << "Invalid Choice";
            break;
        }
    }
    return 0;
}
