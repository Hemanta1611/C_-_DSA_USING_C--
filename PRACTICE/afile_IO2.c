#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// (fscanf) IS USED TO SCAN INSIDE A FILE && (fgetc) IS USED TO READ A FILE
// (fprintf) IS USED TO PRINT INSIDE A FILE && (fputc) IS USED TO WRITE OR APPEND IN A FILE
    
int main(){
    
    FILE *fptr;

    // OPENING and CLOSING a FILE
    // fptr = fopen("test.txt","r");
    // if (fptr == NULL)
    // {
    //     printf("File don't exist.\n");
    // }
    // else{
    //     fclose(fptr);
    // }


    

    /*
    r = read                         -> if file don't exist it will became NULL
    w = write by deleting old text   -> if file don't exist it will make a file
    a = write by adding new text with old text   -> if file don't exist it will make a file
    */




    // READING from a FILE   HERE WE READ FROM FILE USING fscanf AND WE GIVE OUTPUT IN TERMINAL USING printf (NOT BY fprintf)
    // fptr = fopen("test.txt", "r");
    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // char readfile[100];
    // fscanf(fptr, "%[^\n]s", readfile);
    // printf("file text: %s\n", readfile);
    // fclose(fptr);
    // OR
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // fclose(fptr);




    // APPEND IN A FILE
    // fptr = fopen("test.txt", "a");
    // fprintf(fptr, "%c", ' ');
    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'A');
    // fprintf(fptr, "%c", 'N');
    // fprintf(fptr, "%c", 'G');
    // fprintf(fptr, "%c", 'O');
    // OR
    // fputc(' ', fptr);
    // fputc('M', fptr);
    // fputc('A', fptr);
    // fputc('N', fptr);
    // fputc('G', fptr);
    // fputc('O', fptr);
    // fclose(fptr);


    // EOF = End Of File -- We already traversed throgh file
    fptr = fopen("test.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
//  ⬆   THIS ACTS LIKE INCREMENT IF WE DON'T USE IT THEN IT WILL BECAME ENDLESS LOOP OF 1ST CHARACTER OF FILE
    }
    printf("\n");
    fclose(fptr);
    
    return 0;
}