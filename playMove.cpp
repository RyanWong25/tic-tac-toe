//
//  playMove.cpp
//  TicTacTo
//
//  Created by Tarek Abdelrahman on 2018-05-15.
//  Copyright © 2018 Tarek Abdelrahman. All rights reserved.
//

#include <iostream>
#include <tic-tac-toe/playMove.h>

using namespace std;

void playMove(int board[3][3], int row, int col, bool& turn, bool& validMove, bool& gameOver, int& winCode) {

    // If the game is over, do nothing
    if (gameOver) return;

    // Insert your code here
    if (!turn) //X's turn
    {
        if (board[row][col] == Empty)
            validMove = true;
        else
            validMove = false;
        
        if (validMove)
        {
            turn = true;
            board[row][col] = X;
            if ((board[0][0] == X) && (board[0][1] == X) && (board[0][2] == X))
            {
                winCode = 1;
                gameOver = true;
            }
            else if ((board[1][0] == X) && (board[1][1] == X) && (board[1][2] == X))
            {
                winCode = 2;
                gameOver = true;
            }
            else if ((board[2][0] == X) && (board[2][1] == X) && (board[2][2] == X))
            {
                winCode = 3;
                gameOver = true;
            }
            else if ((board[0][0] == X) && (board[1][0] == X) && (board[2][0] == X))
            {
                winCode = 4;
                gameOver = true;
            }
            else if ((board[0][1] == X) && (board[1][1] == X) && (board[2][1] == X))
            {
                winCode = 5;
                gameOver = true;
            }
            else if ((board[0][2] == X) && (board[1][2] == X) && (board[2][2] == X))
            {
                winCode = 6;
                gameOver = true;
            }
            else if ((board[0][0] == X) && (board[1][1] == X) && (board[2][2] == X))
            {
                winCode = 7;
                gameOver = true;
            }
            else if ((board[2][0] == X) && (board[1][1] == X) && (board[0][2] == X))
            {
                winCode = 8;
                gameOver = true;
            }
            else
            {
                int draw = 0;
                for (int i = 0; i < boardSize; i++)
                {
                    for (int j = 0; j < boardSize; j++)
                    {
                        if(board[i][j] != Empty)
                            draw++;
                    }
                }
                winCode = 0;
                if (draw == 9)
                {
                    gameOver = true;
                }
                else
                {
                    gameOver = false;
                }
            }
        }
        else
        {
            turn = true;
        }
    }

    else //O's turn
    {
        if (board[row][col] == Empty)
            validMove = true;
        else
            validMove = false;
            
        if (validMove)
        {
            turn = false;
            board[row][col] = O;
            if ((board[0][0] == O) && (board[0][1] == O) && (board[0][2] == O))
            {
                winCode = 1;
                gameOver = true;
            }
            else if ((board[1][0] == O) && (board[1][1] == O) && (board[1][2] == O))
            {
                winCode = 2;
                gameOver = true;
            }
            else if ((board[2][0] == O) && (board[2][1] == O) && (board[2][2] == O))
            {
                winCode = 3;
                gameOver = true;
            }
            else if ((board[0][0] == O) && (board[1][0] == O) && (board[2][0] == O))
            {
                winCode = 4;
                gameOver = true;
            }
            else if ((board[0][1] == O) && (board[1][1] == O) && (board[2][1] == O))
            {
                winCode = 5;
                gameOver = true;
            }
            else if ((board[0][2] == O) && (board[1][2] == O) && (board[2][2] == O))
            {
                winCode = 6;
                gameOver = true;
            }
            else if ((board[0][0] == O) && (board[1][1] == O) && (board[2][2] == O))
            {
                winCode = 7;
                gameOver = true;
            }
            else if ((board[2][0] == O) && (board[1][1] == O) && (board[0][2] == O))
            {
                winCode = 8;
                gameOver = true;
            }
            else
            {
                int draw = 0;
                for (int i = 0; i < boardSize; i++)
                {
                    for (int j = 0; j < boardSize; j++)
                    {
                        if(board[i][j] != Empty)
                            draw++;
                    }
                }
                winCode = 0;
                if (draw == 9)
                {
                    gameOver = true;
                }
                else
                {
                    gameOver = false;
                }
            }
        }
        else
        {
            turn = false;
        }
    }
    
    // The function must always print the output specified in the handout before it exits
    // Use the standard output (i.e., cout) to print the output

    // Insert code to print the output below
    for (int i = 0; i < boardSize; i++)
    {
        for (int j = 0; j < boardSize; j++)
        {
            cout << -board[i][j] << " ";
        }
    }
    cout << row << " " << col << " " << turn << " " << validMove << " " << gameOver << " " << winCode << endl;
}

