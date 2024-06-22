#include <stdio.h>
   
int main(){
   
   int i,j, temp;
   int a[10];

   printf("Enter the elements of array a:\n");
   for( i = 0; i<10; i++){
      scanf("%d", &a[i]);
   }
   // ASCENDING ORDER OF ALL ARRAY ELEMENTS
   for(i = 0; i<9;i++){
      for(j = i+1; j<10; j++){
         if(a[i]>a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
   printf("ascending order of array");
  for(i = 0;i<10; i++){
   printf("%d \t", a[i]);
  }

   return 0;
}