#include <stdio.h>
    
   // FILE I/O

int main(){
    
    FILE *ptr = NULL;
    char string[84] = "this content was produced by tuto62_64.c\n";

    // reading a file
    // ptr = fopen("myfile.txt","r");
    // // r = read
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has %s\n", string);
   
   // writing a file by deleting old content
   // ptr = fopen("myfile.txt","w");
   // w = write
   // fprintf(ptr, "%s", string);

   // writing a  content with out deleting old content
   ptr = fopen("myfile.txt", "a");
   // a = append means = add data to the existing data of file
   fprintf(ptr, "%s", string);
   // number of times u will run = number of times content of string will print of file


    return 0;
}