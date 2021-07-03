#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        system("cls");
        char op;
        float a, b;
        cout << "   |-----Calculator v1.2------|" << endl;
        cout << "   |--------------------------|" << endl;
        cout << "   |Enter + for Addition      |" << endl;
        cout << "   |Enter - for Subtraction   |" << endl;
        cout << "   |Enter / for Division      |" << endl;
        cout << "   |Enter x for Multiplication|" << endl;
        cout << "   |Enter ! for Exit          |" << endl;
        cout << "   |--------------------------|" << endl
             << endl;
        cout << "    Enter your choice >";
        cin >> op;
        cout << endl;
        switch (op)
        {
        case '+':
            cout << "   First Number  :";
            cin >> a;
            cout << "   Second Number :";
            cin >> b;
            cout << "          __________" << endl;
            cout << "          Total ::" << a + b << endl
                 << endl;
            system("Pause");
            break;

        case '-':
            cout << "   First Number  :";
            cin >> a;
            cout << "   Second Number :";
            cin >> b;
            cout << "          __________" << endl;
            cout << "          Total ::" << a - b << endl
                 << endl;
            system("Pause");
            break;

        case '/':
            cout << "   First Number  :";
            cin >> a;
            cout << "   Second Number :";
            cin >> b;
            cout << "          __________" << endl;
            cout << "          Total ::" << a / b << endl
                 << endl;
            system("Pause");
            break;

        case 'x':
            cout << "   First Number  :";
            cin >> a;
            cout << "   Second Number :";
            cin >> b;
            cout << "          __________" << endl;
            cout << "          Total ::" << a * b << endl
                 << endl;
            system("Pause");
            break;

        case '!':
            exit(0);

        default:
            cout << "Invalid input";
            main();
            break;
        }
    }
    return 0;
}