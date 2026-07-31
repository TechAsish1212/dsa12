#include <iostream>
#include <vector>
using namespace std;

bool check(int num, int row, int col, vector<vector<char>> &board)
{
    char c = '0' + num;

    // Check row
    for (int k = 0; k < 9; k++)
    {
        if (board[row][k] == c)
            return false;
    }

    // Check column
    for (int r = 0; r < 9; r++)
    {
        if (board[r][col] == c)
            return false;
    }

    // Check 3x3 box
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[startRow + i][startCol + j] == c)
                return false;
        }
    }

    return true;
}

bool find(int row, int col, vector<vector<char>> &board)
{
    if (row == 9)
        return true;

    if (col == 9)
        return find(row + 1, 0, board);

    if (board[row][col] != '.')
        return find(row, col + 1, board);

    for (int num = 1; num <= 9; num++)
    {
        if (check(num, row, col, board))
        {
            board[row][col] = '0' + num;

            if (find(row, col + 1, board))
                return true;

            // Backtrack
            board[row][col] = '.';
        }
    }

    return false;
}

void solveSudoku(vector<vector<char>> &board)
{
    find(0, 0, board);
}

int main()
{
    vector<vector<char>> board(9, vector<char>(9));

    cout << "Enter Sudoku Board (9x9):\n";
    cout << "Use '.' for empty cells\n\n";

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> board[i][j];
        }
    }

    solveSudoku(board);

    cout << "\nSolved Sudoku:\n";

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}