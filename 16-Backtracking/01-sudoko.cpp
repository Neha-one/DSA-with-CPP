#include <iostream>
using namespace std;
void printSudoko(int sudoko[][9])
{
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      cout << sudoko[i][j] << " ";
    }
    cout << endl;
  }
}
void sudokoSolver(int sudoko[][9], int row, int col)
{
  if (sudoko[row][col] != 0)
  {
    return;
  }
  for (int j = 1; j < 10;j++){
    if(isSafe(sudoko,row,j)){
      
    }
  }
}
int main()
{
  int sudoko[9][9] = {{0, 0, 8, 0, 0, 0, 0, 0, 0},
                      {4, 9, 0, 1, 5, 7, 0, 0, 2},
                      {0, 0, 3, 0, 0, 4, 1, 9, 0},
                      {1, 8, 5, 0, 6, 0, 0, 2, 0},
                      {0, 0, 0, 0, 2, 0, 0, 6, 0},
                      {9, 6, 0, 4, 0, 5, 3, 0, 0},
                      {0, 3, 0, 0, 7, 2, 0, 0, 4},
                      {0, 4, 9, 0, 3, 0, 0, 5, 7},
                      {8, 2, 7, 0, 0, 9, 0, 1, 3}};
  printSudoko(sudoko);
  sudokoSolver(sudoko, 0, 0);
  return 0;
}