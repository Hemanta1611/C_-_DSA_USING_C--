// STORAGE CLASSES IN C 1. Auto 2. Extern 3. Static 4. Register
// A storage class have  1. Scope(range) 2. default initial value 3. lifetime
#include <stdio.h>
#include "temp.c"

int main(){
    
    int sum = func(2,7);
    printf("sum of two number is %d\n", sum);
    // Declaration = Telling the compiler about the variable(no space reserved)
    // Definition = Declaration + space reservation 
    
    return 0;
}
