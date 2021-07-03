#include <iostream>

using namespace std;

char player = 'X';

void change()
{
    if (player == 'X')
    {
        player = 'O';
        return;
    }
    player = 'X';
}
char box[] = {'1', '2', '3', // *Box to represent Table
              '4', '5', '6',
              '7', '8', '9'};

char col() // *Function to check Colums
{
    if (box[0] == box[3] && box[3] == box[6])
    {
        return (true);
    }
    else if (box[1] == box[4] && box[4] == box[7])
    {
        return (true);
    }
    else if (box[2] == box[5] && box[5] == box[8])
    {
        return (true);
    }

    return (false);
}

char row() // *Function to check Rows
{
    if (box[0] == box[1] && box[1] == box[2])
    {
        return (true);
    }
    else if (box[3] == box[4] && box[4] == box[5])
    {
        return (true);
    }
    else if (box[6] == box[7] && box[7] == box[8])
    {
        return (true);
    }

    return (false);
}

char diagonal() // *Function to check digonals
{
    if (box[0] == box[4] && box[4] == box[8])
    {
        return (true);
    }
    else if (box[2] == box[4] && box[4] == box[6])
    {
        return (true);
    }

    return (false);
}

char checkwin() // *Function to check Winner
{
    if (col())
    {
        return (true);
    }
    else if (row())
    {
        return (true);
    }
    else if (diagonal())
    {
        return (true);
    }
    return (false);
}

void table()  // *Show the table
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";
    cout << "Player 1 (X)  -  Player 2 (O)" << endl
         << endl
         << endl;
    cout << "\t \t \t" << box[0] << " | " << box[1] << " | " << box[2] << endl;
    cout << "\t \t \t"
         << "--|---|--" << endl;
    cout << "\t \t \t" << box[3] << " | " << box[4] << " | " << box[5] << endl;
    cout << "\t \t \t"
         << "--|---|--" << endl;
    cout << "\t \t \t" << box[6] << " | " << box[7] << " | " << box[8] << endl
         << endl;
    // cout<<"\t"<<"--|---|--"<<endl;
}

int draw()  
{
    int ch = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (box[i] != (char)49 + i) //*Checking everyblock with its number character
        {
            ch++;
        }
    }
    if (ch == 10)
    {
        return (true);
    }
    return (false);
}

void play()
{
    int pos;
    table();
    cout << "Current Player :" << player << endl;
    cout << "Enter your Position :";
    cin >> pos;
    pos--;
    if (box[pos] == 'X')
    {
        cout << "Already marked!!" << endl;
        system("pause");
        change();
    }
    else if (box[pos] == 'O')
    {
        cout << "Already marked!!" << endl;
        system("pause");
        change();
    }
    box[pos] = player;
    if (draw())
    {
        table();
        cout << "Game Draw!!!" << endl;
        exit(0);
    }
    else if (checkwin())
    {
        table();
        cout << player << " Wins!!" << endl;
        exit(0);
    }
    change();
}
int main()
{
    while (true)
    {
        play();
    }
}
