//  C++ program for random no. guess game
#include <iostream>
#include <time.h>
#include <string.h>
using namespace std;
int main()
{
    int i, j, k = 1;
    srand(time(0));
    j = (rand() % 100) + 1;
    while (1)
    {
        cout << endl
             << "guess a number between 1 to 100" << endl
             << "Attempt" << k << endl;
        cin >> i;

        if (i < j)
        {
            cout << "**enter higher number**";
            k++;
        }
        if (i > j)
        {
            cout << "**enter lower number**";
            k++;
        }
        if (i == j)
        {
            cout << "you guess was correct" << endl;
            break;
        }
    }
    return 0;
}
