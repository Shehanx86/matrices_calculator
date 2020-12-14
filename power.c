#include <stdio.h>
void powerTwo(int r, int c);

int main(void) {
  int rows, columns;

    printf("Enter number of the rows : ");
    scanf("%d",&rows);
    printf("Enter number of the columns : ");
    scanf("%d",&columns);

    powerTwo( rows, columns);

  return 0;
}

void powerTwo(int r, int c) {
    double matrix[c][r];
    double answer[c][r];
    
    for(int i = 0; i < c; i++)  {
      for(int j = 0; j < r; j++)  {
        printf("Enter {%d, %d} element : ",i+1 ,j+1);
        scanf("%lf", &matrix[i][j]); //initializes the matrix

        answer[i][j] = 0; //intialize all answers to 0
      }
    }

    for(int x = 0; x < c; x++)  {
      for(int y = 0; y < r; y++)  {
        for(int z = 0; z < r; z++) {
          answer[x][y] = answer[x][y] + (matrix[x][z] * matrix[z][y]);
          
          if(z == r-1)  {
          printf("{%d, %d} element : %f \n",x+1 ,y+1, answer[x][y] );
          }
        }
      }
    } 
  }