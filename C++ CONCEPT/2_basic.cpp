#include <iostream>
// io = input-output
    
int main(){
    
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        count = count + i;
    }

    printf("%d", count);
    
    return 0;
}