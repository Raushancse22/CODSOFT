#include <iostream>
using namespace std;

char table[3][3];
void initializetable()
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            table[i][j] = '-';
        }
    }
}

// Function to display the table
void displaytable()
{
    cout << "Tic Tac Toe\n";
    cout << "-------------\n";
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << table[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "-------------\n";
}

// Function to check if the move is valid
bool isValidMove(int row, int col)
{
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && table[row][col] == '-');
}

// Function to check for a win
bool checkWin(char symbol)
{
    for (int i = 0; i < 3; ++i)
    {
        if (table[i][0] == symbol && table[i][1] == symbol && table[i][2] == symbol)
            return true;
        if (table[0][i] == symbol && table[1][i] == symbol && table[2][i] == symbol)
            return true;
    }
    if (table[0][0] == symbol && table[1][1] == symbol && table[2][2] == symbol)
        return true;
    if (table[0][2] == symbol && table[1][1] == symbol && table[2][0] == symbol)
        return true;
    return false;
}

// Function to play the game
void playGame()
{
    char currentPlayer = 'X';
    bool gameRunning = true;
    int row, col;

    initializetable();

    while (gameRunning)
    {
        displaytable();

        // Input from current player for row and column
        cout << "Player " << currentPlayer << ", enter row (0-2) and column (0-2): ";
        cin >> row >> col;

        if (isValidMove(row, col))
        {
            table[row][col] = currentPlayer;

            if (checkWin(currentPlayer))
            {
                displaytable();
                cout << "Player " << currentPlayer << " wins!\n";
                gameRunning = false;
            }
            else if (currentPlayer == 'X')
            {
                currentPlayer = 'O';
            }
            else
            {
                currentPlayer = 'X';
            }
        }
        else
        {
            cout << "Invalid move! Try again.\n";
        }

        // Check for a draw
        bool isFull = true;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                if (table[i][j] == '-')
                {
                    isFull = false;
                    break;
                }
            }
            if (!isFull)
                break;
        }

        if (isFull)
        {
            displaytable();
            cout << "It's a draw!\n";
            gameRunning = false;
        }
    }
}

int main()
{
    playGame();
    return 0;
}
