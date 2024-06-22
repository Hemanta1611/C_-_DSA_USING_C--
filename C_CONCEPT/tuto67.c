#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(){
    
    // 6 MODES: r, w, a, r+, w+, a+
    // r+ = reading + writing if file is not exist than it won't work if exist it will erase old data and start writing
    // w+ = reading + writing {from beginning} if file is not exist it will create new file
    // if file exist w+ erase the file to zero length and start writing
    // a+ = reading + writing + add {after ending} 

    // fgets =>> f = file, get = get, s = string means get string from file
    // fgets used to read a null terminated string a file in c

    FILE *ptr = NULL;
    // ptr = fopen("myfile.txt", "r");

    // char c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c);

    // char str[34];
    // fgets(str, 3, ptr);
    // // here 3 = string is of 3 characters include last must = '\0'
    // printf("The string is:- %s\n", str);


    // ptr = fopen("myfile.txt","w");
    // fputc('o',ptr);
    // ptr = fopen("myfile.txt", "r+");
    // fputc('h',ptr);

    // ptr = fopen("myfile.txt", "w");
    // fputs("hello ramlal", ptr);

    ptr = fopen("myfile.txt", "a");
    fputs("hello ramlal", ptr);

    fclose(ptr);
    // when we stop doing work of any file than it is good to close that file


    return 0;
}