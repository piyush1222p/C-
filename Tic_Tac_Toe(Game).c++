#include <iostream>
#include <ctime>
using namespace std;

// Function declarations
void Drawboard(char *spaces); // Draws the Tic-Tac-Toe board
void PlayerMove(char *spaces, char player); // Handles the player's move
void ComputerMove(char *spaces, char Computer); // Handles the computer's move
bool CheckWinner(char *spaces, char player, char computer); // Checks if there is a winner
bool CheckTie(char *spaces); // Checks if the game is a tie

int main()
{
    // Initialize the game board and players
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    // Draw the initial empty board
    Drawboard(spaces);

    // Main game loop
    while (running)
    {
        // Player's turn
        PlayerMove(spaces, player);
        Drawboard(spaces);

        // Check if the player wins or if it's a tie
        if (CheckWinner(spaces, player, computer))
        {
            running = false; // End the game if the player wins
            break;
        }
        else if (CheckTie(spaces))
        {
            running = false; // End the game if it's a tie
            break;
        }

        // Computer's turn
        ComputerMove(spaces, computer);
        Drawboard(spaces);

        // Check if the computer wins or if it's a tie
        if (CheckWinner(spaces, player, computer))
        {
            running = false; // End the game if the computer wins
            break;
        }
        else if (CheckTie(spaces))
        {
            running = false; // End the game if it's a tie
            break;
        }
    }

    // End of the game
    cout << "\nThanks for playing... \n";

    return 0;
}

// Function to draw the Tic-Tac-Toe board
void Drawboard(char *spaces)
{
    cout << "\n";
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << endl;
    cout << "     |     |     " << endl;
    cout << "\n";
}

// Function to handle the player's move
void PlayerMove(char *spaces, char player)
{
    int number;
    do
    {
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;
        number--; // Adjust for 0-based indexing
        if (spaces[number] == ' ')
        {
            spaces[number] = player; // Place the player's marker
            break;
        }
    } while (!number > 0 || !number < 8); // Repeat if the input is invalid
}

// Function to handle the computer's move
void ComputerMove(char *spaces, char Computer)
{
    int number;
    srand(time(NULL)); // Seed the random number generator
    while (true)
    {
        number = rand() % 9; // Generate a random position
        if (spaces[number] == ' ')
        {
            spaces[number] = Computer; // Place the computer's marker
            break;
        }
    }
}

// Function to check if there is a winner
bool CheckWinner(char *spaces, char player, char computer)
{
    // Check all possible winning combinations
    if ((spaces[0] != ' ') && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == player ? cout << "YOU WIN!! " : cout << "YOU LOSE.." << endl;
    }
    else if ((spaces[3] != ' ') && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == player ? cout << "YOU WIN!! " : cout << "YOU LOSE.." << endl;
    }
    else if ((spaces[6] != ' ') && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        spaces[6] == player ? cout << "YOU WIN!! " : cout << "YOU LOSE.." << endl;
    }
    else if ((spaces[0] != ' ') && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == player ? cout << "YOU WIN!! " : cout << "YOU LOSE.." << endl;
    }
    else if ((spaces[1] != ' ') && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        spaces[1] == player ? cout << "YOU WIN!! " : cout << "YOU LOSE.." << endl;
    }
    else if ((spaces[2] != ' ') && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        spaces[2] == player ? cout << "YOU WIN!! " : cout << "YOU LOSE.." << endl;
    }
    else if ((spaces[0] != ' ') && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        spaces[0] == player ? cout << "YOU WIN!! " : cout << "YOU LOSE.." << endl;
    }
    else if ((spaces[2] != ' ') && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        spaces[2] == player ? cout << "YOU WIN!! " : cout << "YOU LOSE.." << endl;
    }
    else
    {
        return false; // No winner yet
    }

    return true; // Winner found
}

// Function to check if the game is a tie
bool CheckTie(char *spaces)
{
    // Check if all spaces are filled
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false; // Not a tie
        }
    }
    cout << "IT'S A TIE" << "\n";
    return true; // It's a tie
}