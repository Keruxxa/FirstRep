#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
int fun(int, int);
int result();

int main()
{
    srand(time(NULL));
    int x1, x2, score = 0, sum = 0;
    bool game = true;
    cout << "Press a button to start the game";
    getch();
    while (game == true)
    {
        sum = fun(x1, x2);
        switch (sum)
        {
            case 7: case 11: cout << "\nThe sum is: " << sum << " You win!" << endl; game = false; break;
            case 2: case 3: case 12: cout << "\nThe sum is: " << sum << " You loose!" << endl; game = false; break; 
            case 4: case 5: case 6: case 8: case 9: case 10:
            cout << "\nThe sum is: " << sum << " The game is going on." << endl << endl;
            while (score != sum)
            {
                score = fun(x1, x2);
                if (score == sum)
                {
                    cout << "Your score is: " << score << " You win!" << endl; game = false; break;
                }
                if (score == 7)
                {
                     cout << "Your score is: " << score << " You loose!" << endl; game = false; break;
                }
                else
                {
                    cout << "Your score is: " << score << " The game is going on." << endl;
                }
            }
        }
    }
    system("pause");
    return 0;
}

int fun(int x1, int x2)
{
    x1 = 1 + rand() % 6;
    x2 = 1 + rand() % 6;
    int sum = x1 + x2;
    return sum;
}