#include <stdio.h>
// pointers and arrays arithmetic in C
int main(){

int i , a[5], *p;
p = &a[0];   // or we can write &a or a.

for(i = 0; i <= 4; i++){
    scanf("%d", p+i);
}
for(i = 0 ; i <= 4 ; i++){
    printf("%d \t", *(p+i));
}

    return 0;
}