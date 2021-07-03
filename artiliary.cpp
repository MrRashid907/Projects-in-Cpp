#include <iostream>
#include <math.h>
#include <unistd.h>
#include <time.h>
using namespace std;

const int kMinDist = 30;  // *min distance for a target
const int kMaxDist = 365; // *max distance for a target
const double g = 9.8;
const double kPi = 3.1415;
const double velocity = 60;

int Initialize()
{
    int enemy_position;

    // Initialize random seed.
    srand(time(NULL));

    // Generate random number between kMinDist and kMaxDist
    enemy_position = rand() % kMaxDist + kMinDist;
    // cout << "The enemy is " << enemy_position << " feet away!!!" << endl;
    return enemy_position;
}

int shoot()
{
    double angle;

    cout << "Angle for Fire :";
    cin >> angle;
    angle = (angle * kPi) / 180.0;

    double shot = ((2 * velocity) * sin(angle) / g);

    return ((int)round((velocity * cos(angle)) * shot));
}

int play()
{
    int distance, shot, x = 1;
    distance = Initialize();

    for (int i = 1; i <= 10; i++)
    {
        system("cls");
        cout << "Missile :" << abs(i - 11) << "\n-----------------\nEnemy : " << distance << " Km Away!" << endl
             << endl;
        shot = shoot();
        x++;
        if (shot == distance)
        {
            cout << "\t  You hit Him! " << endl
                 << endl;
            cout << " Missile Used : " << x << endl
                 << endl;
            system("pause");
            exit(0);
        }
        else
        {
            cout << endl
                 << "Miss by :" << abs(distance - shot) << " Km" << endl;
            sleep(1);
        }
    }
    cout << endl
         << "Out of Missiles! " << endl;
    system("pause");
}

int main()
{
    play();
}