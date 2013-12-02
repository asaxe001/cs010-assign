//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment09/tictactoe.cpp 
/// @brief Assignment 09 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date 11-25-2013
///
/// @par Enrollment Notes 
///     Lecture Section: 001
/// @par
///     Lab Section: 028
/// @par
///     TA: Mahmudul Hasan
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  =============== END ASSESSMENT HEADER ==================
#include <vector>
#include <iostream>

using namespace std;

const bool CLEAR_SCREEN = true;

/// @brief Utilizes an escape character sequence to clear the screen
void clearScreen()
{
    cout << endl;

    if (CLEAR_SCREEN)
    {
        cout << "\033c";
    }

    cout << endl;
}


/// @brief Draws the provided tic-tac-toe board to the screen
//  @param board is the tic-tac-toe board that should be drawn
void drawBoard(const vector <char> &board)
{
    clearScreen();
    for (int i = 0; i < 9; i += 3)
    {
        cout << "  " << board.at(i) << "  |  " << board.at(i + 1) << "  |  "
            << board.at(i + 2) << "  " << endl;
        if (i < 6)
            cout << "-----|-----|-----" << endl;
    }
    cout << endl;
}



/// @brief Fills vector with characters starting at lower case a.
///
///     The amount of the alphabet placed into the vector depends on its size.
///     When the vector is size 1 then it will have only character a.
///     When the vector is size 5 then it will have characters a to e.
///     When the vector is size 26 then it will have characters a to z.
///
/// @param v the vector to initialize
/// @pre-condition the vector size will never be over 26
void initVector(vector <char> &v) //done
{
    for(int i=0; i < v.size(); ++i)
    {
        v.at(i) = 'a'+i;
    }
}


/// @brief Converts a character representing a cell to associated vector index
/// @param the position to be converted to a vector index
/// @return the integer index in the vector, should be 0 to (vector size - 1)
int convertPosition(char position) //done
{
    return (static_cast<int>(position)-97);
}


/// @brief Predicate function to determine if a spot in board is available.
/// @param board the current tic-tac-toe board 
/// @param position is an index into vector to check if available
/// @return true if position's state is available (not marked) AND is in bounds
bool validPlacement(const vector <char> &board, int position) //done
{
    if (position >= board.size())
        return false;
    else if(board.at(position) == 'x' || board.at(position) == 'o')
    {
        return false;
    }
    else
        return true;
}


/// @brief Acquires a play from the user as to where to put her mark
///
///     Utilizes convertPosition and validPlacement functions to convert the
///     user input and then determine if the converted input is a valid play.
///
/// @param board the current tic-tac-toe board 
/// @return an integer index in board vector of a chosen available board spot
int getPlay(const vector <char> &board) //done
{
    char input;
    int position;

    getplay:
    cout << "Please choose a position: ";
    cin >> input;
    cout << endl;

    position = convertPosition(input);
    if(validPlacement(board, position))
        return position;
    else
        goto getplay;
}

bool gameCheck(int a, int b, int c, const vector <char> &board) //done
{
    if(board[a]==board[b] && board[b]==board[c])
    {
        return true;
    }
    return false;
}


/// @brief Predicate function to determine if the game has been won
///
///     Winning conditions in tic-tac-toe require three marks from same 
///     player in a single row, column or diagonal.
///
/// @param board the current tic-tac-toe board 
/// @return true if the game has been won, false otherwise
bool gameWon(const vector <char> &board) //done
{
    if(gameCheck(0, 1, 2, board))
        return true;
    else if(gameCheck(3,4,5, board))
        return true;
    else if(gameCheck(6,7,8, board))
        return true;
    else if(gameCheck(0,4,8, board))
        return true;
    else if(gameCheck(2,4,6, board))
        return true;
    else if(gameCheck(0,3,6, board))
        return true;
    else if(gameCheck(1,4,7, board))
        return true;
    else if(gameCheck(2,5,8, board))
        return true;
    else
        return false;
}


/// @brief Predicate function to determine if the board is full
/// @param board the current tic-tac-toe board 
/// @return true iff the board is full (no cell is available)
bool boardFull(const vector <char> &board)
{
    for(int i=0; i < 9; ++i)
    {
        if(board.at(i)!='x' && board.at(i)!='o')
            return false;
    }
    // cout << "full" << endl;
    return true;
}


// Global constants for player representation
const int PLAYER1 = 0;
const int PLAYER2 = 1;

int main()
{
    bool won=false;
    int position;
    // Variables that you may find useful to utilize
    vector <char> board(9);
    int curPlay;
    int turn = PLAYER1; // Player 1 always goes first and is 'x'

    initVector(board);

    drawBoard(board);


    while(!gameWon(board) && !boardFull(board))
    {
        if(boardFull(board))
            break;
        position = getPlay(board);

        if(turn == PLAYER1)
            board.at(position) = 'x';
        else if(turn == PLAYER2)
            board.at(position) = 'o';

        if(turn == PLAYER1)
            turn = PLAYER2;
        else if(turn == PLAYER2)
            turn = PLAYER1;
        // cout << "turn: " << turn << endl;
        
        drawBoard(board);
        // cout << "board: " << board.data() << endl;
        won = !boardFull(board);
        won = gameWon(board);
    }


    /// TODO: Determine winner and output appropriate message
    if(gameWon(board))
    {
        if(turn==PLAYER2)
            cout << "Player 1 (x's) wins!";
        if(turn==PLAYER1)
            cout << "Player 2 (o's) wins!";
    }
    else if(boardFull(board))
        cout << "no one wins";


    return 0;
}



// int player;
// if(board[a]=='x')
//     player = 1;
// else if(board[a] == 'o')
//     player = 2;
// cout << "Player " << player << " (" << board[a] << "\'s) wins!";