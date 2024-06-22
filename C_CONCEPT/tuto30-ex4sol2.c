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
         for (int j = rows; j>=i ; j--) // LITTLE DIFFERENT FROM PREVIOUS NUMBER
         {
            printf("*");
         }
         printf("\n");
     }
  }

int main(){
    
    int rows, haha;

    printf("Enter 0 for star pattern and 1 for reversed star pattern \n");
    scanf("%d", &haha);
    printf("How many rows do you want? \n");
    scanf("%d", &rows);
   
   switch (haha)
   {
   case 0:
     starpattern(rows);
      break;

   case 1:
     reverse_starpattern(rows);
     break;
   
   default:
     printf("You have entered an invalid choice.");
      break;
   }
    
    return 0;
}
