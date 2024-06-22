#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replace_word(const char *str, const char *old_word, const char *new_word)
{
    char *result_string;
    int i, count = 0;
    int new_word_length = strlen(new_word);
    int old_word_length = strlen(old_word);

    //lets count the number of times old word occurs in the string
    for ( i = 0; str[i] != '\0'; i++)
    {
        if(strstr(&str[i], old_word) ==  &str[i])
        {
            count++;

            // Jump over this word
            i = i + old_word_length - 1;
            // -1 because i is already incrementing
        }
    }
    
    // making a new string to fit in the replaced word
    result_string = (char *) malloc(i + count * (new_word_length - old_word_length) +1);
    // +1 because to include null character

    i = 0;
    while(*str){
        // compare the substring with result
        if(strstr(str, old_word) == str){
            strcpy(&result_string[i], new_word);
            i += new_word_length;
            str += old_word_length;
        }
        else{
            result_string[i] = *str;
            i += 1;
            str += 1;
            // to read and write next
        }
    }
    result_string[i] = '\0';
    return result_string;
}
    
int main(){
    
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("letter.txt", "r");
    ptr2 = fopen("generated_letter.txt", "w");
    char str[200];

    fgets(str, 200, ptr);
    printf("The given letter template was:-\n %s", str);
    
    // call the replace word function and generate new str
    char *newstr;
    newstr = replace_word(str, "{{item}}", "laptop");
    newstr = replace_word(newstr, "{{outlet}}", "RAM-LAXMI ELECTRONIC OUTLET");
    newstr = replace_word(newstr, "{{name}}", "HEMANTA");
    printf("The actual template generated is:-\n %s", newstr);

    fprintf(ptr2, "%s", newstr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}