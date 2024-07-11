#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Replaces all occurrences of a word in a string with another word.
 * 
 * This function takes a string and replaces all instances of the specified old word
 * with the new word, returning the modified string.
 * 
 * @param str The original string.
 * @param old_word The word to be replaced.
 * @param new_word The word to replace with.
 * @return char* A new string with the old word replaced by the new word.
 */
char *replace_word(const char *str, const char *old_word, const char *new_word)
{
    char *result_string;
    int i, count = 0;
    int new_word_length = strlen(new_word);
    int old_word_length = strlen(old_word);

    // Count the number of times the old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], old_word) == &str[i])
        {
            count++;
            // Jump over this word
            i = i + old_word_length - 1; // -1 because i is already incrementing
        }
    }

    // Allocate memory for the new string
    result_string = (char *)malloc(i + count * (new_word_length - old_word_length) + 1); // +1 to include null character

    i = 0;
    while (*str)
    {
        // Compare the substring with the result
        if (strstr(str, old_word) == str)
        {
            strcpy(&result_string[i], new_word);
            i += new_word_length;
            str += old_word_length;
        }
        else
        {
            result_string[i] = *str;
            i += 1;
            str += 1; // Move to the next character
        }
    }
    result_string[i] = '\0';
    return result_string;
}

/**
 * @brief Main function to read a template file, replace placeholders, and write to a new file.
 * 
 * This function reads a letter template from a file, replaces placeholders with actual values,
 * and writes the modified content to a new file.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("letter.txt", "r");
    ptr2 = fopen("generated_letter.txt", "w");
    char str[200];

    // Read the content of the template file
    fgets(str, 200, ptr);
    printf("The given letter template was:-\n%s\n", str);

    // Call the replace_word function and generate a new string
    char *newstr;
    newstr = replace_word(str, "{{item}}", "laptop");
    newstr = replace_word(newstr, "{{outlet}}", "RAM-LAXMI ELECTRONIC OUTLET");
    newstr = replace_word(newstr, "{{name}}", "HEMANTA");
    printf("The actual template generated is:-\n%s\n", newstr);

    // Write the modified content to the new file
    fprintf(ptr2, "%s", newstr);
    fclose(ptr);
    fclose(ptr2);

    // Free the allocated memory
    free(newstr);

    return 0;
}
