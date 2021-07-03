#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;

int random()
{
    int random_number;

    // Initialize random seed.
    srand(time(NULL));

    // Generate random number between 1 and 100
    random_number = rand() % 100 + 1;
    return (random_number);
}

int menu()
{
    system("cls");
    int op;
    cout << "|--Guess the Number!---|" << endl;
    cout << "1. Easy  (15 Chances)" << endl;
    cout << "2. Medium(10 Chances)" << endl;
    cout << "3. Hard  (5 Chances)" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your Choice >";
    cin >> op;
    return (op);
}

void easy()
{
    system("cls");
    cout << "     Easy Mode" << endl;
    int no, guess;
    no = random();
    for (int i = 1; i <= 15; i++)
    {
        system("cls");
        cout << "Chance : " << 16 - i << endl
             << endl;
        cout << "Guess :";
        cin >> guess;
        if (guess == no)
        {
            cout << "Your Win!!  :)" << endl
                 << endl;
            cout << "Score :" << (16 - i) * 5 << endl
                 << endl;
            system("pause");
            exit(0);
        }
        else if (guess < no)
        {
            cout << "Guess is Small!" << endl;
            sleep(1);
        }
        else if (guess > no)
        {
            cout << "Guess is Big!" << endl;
            sleep(1);
        }
    }
    cout << endl
         << "You Lose!!  :(" << endl
         << endl;
    return;
}

void medium()
{
    system("cls");
    cout << "    Medum Mode" << endl;
    int no, guess;
    no = random();
    for (int i = 1; i <= 10; i++)
    {
        system("cls");
        cout << "Chance : " << 11 - i << endl
             << endl;
        cout << "Guess :";
        cin >> guess;
        if (guess == no)
        {
            cout << "You Win!!  :)" << endl
                 << endl;
            cout << "Score :" << (16 - i) * 8 << endl
                 << endl;
            system("pause");
            exit(0);
        }
        else if (guess < no)
        {
            cout << "Guess is Small!" << endl;
            sleep(1);
        }
        else if (guess > no)
        {
            cout << "Guess is Big!" << endl;
            sleep(1);
        }
    }
    cout << endl
         << "You Lose!!  :(" << endl
         << endl;
    return;
}

void hard()
{
    system("cls");
    cout << "     Hard Mode" << endl;
    int no, guess;
    no = random();
    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        cout << "Chance : " << 6 - i << endl
             << endl;
        cout << "Guess :";
        cin >> guess;
        if (guess == no)
        {
            cout << "You Win!!  :)" << endl
                 << endl;

            cout << "Score :" << (16 - i) * 10 << endl
                 << endl;
            system("pause");
            exit(0);
        }
        else if (guess < no)
        {
            cout << "Guess is Small!" << endl;
            sleep(1);
        }
        else if (guess > no)
        {
            cout << "Guess is Big!" << endl;
            sleep(1);
        }
    }
    cout << endl
         << "You Lose!!  :(" << endl
         << endl;
    return;
}

int main()
{
    switch (menu())
    {
    case 1:
        easy();
        break;
    case 2:
        medium();
        break;
    case 3:
        hard();
        break;
    case 4:
        exit(1);
        break;
    default:
        main();
    }
}