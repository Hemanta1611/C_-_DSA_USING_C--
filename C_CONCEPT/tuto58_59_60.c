/*
PREPROCESSOR COMMANDS:
1. #include
2. #define
3. #undef
4. #ifdef
5. #ifndef
6. #if
7. #else
8. #elif
9. #pragma --> To issue some special commands to the compiler
*/

/*
--->> ".h" extension , indicating that they are header files
#define directive can be used for debugging

*/


#include <stdio.h>
#include "sum.c"
#define sq(x) x*x
    
int main(){
    
    int a, b;
    scanf("%d%d", &a, &b);
    printf("square of %d is %d", a, sq(a));
    printf("\naddition of %d & %d is %d\n", a, b,sum(a,b));

    
    printf("File name is %s\n", __FILE__);
    printf("Today date is  %s\n", __DATE__);
    printf("Time :  %s\n", __TIME__);
    printf("Lime No is  %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    // ANSI = it is ansi standard
    
    return 0;
}
