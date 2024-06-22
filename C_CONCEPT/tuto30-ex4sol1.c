#include <stdio.h>
  // TRIANGULAR STAR PATTERN  

  void starpattern(int rows)
  {
     for (int i = 0; i < rows; i++)
     {
         for (int j = 0; j <= i; j++)
         {
            printf("*");
         }
         printf("\n");
     }
  }

  void reverse_starpattern(int rows)
  {
     for (int i = 0; i < rows; i++)
     {
         for (int j = 0; j < rows-i; j++)
         {
            printf("*");
         }
         printf("\n");
     }
  }

int main(){
    
    int rows;
    printf("How many rows do you want? \n");
    scanf("%d", &rows);
    starpattern(rows);
    reverse_starpattern(rows);
    
    return 0;
}

