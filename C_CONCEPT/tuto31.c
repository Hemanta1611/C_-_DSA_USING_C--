/* // CALL BY VALUE & CALL BY REFERENCE
#include <stdio.h>

float add(int a, int b){
    return a+b;
}
    
int main(){
    
    int x = 7, y = 9;
    // add(x,y);
    printf("sum = %f", add(x,y));
    
    return 0;
}*/

#include <stdio.h>

void changevalue(int *a , int *b){

    *a = 1234;
    *b = 6789;

}
    
int main(){
    
    int a = 34 , b = 56;
    printf("the value of a is %d and b is %d \n", a, b);
    changevalue(&a, &b);
    printf("The value of a is now %d and b is %d\n", a, b);

    return 0;
}


// #include<stdio.h>
// #include<string.h>
// int main()
// {
// char str[50] = "123456789";
// printf("After reversing string is =%s",strrev(str));
// return 0;}