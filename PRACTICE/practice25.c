#include <stdio.h>
   
int main(){
   int i,j;
   for( i = 5; i < 10; i++){
      for( j = 5; j <= i; j++){
         printf("%d", j);
      }
      printf("\n");
   }
   
   return 0;
}
/*
output
5
56
567
5678
56789
*/