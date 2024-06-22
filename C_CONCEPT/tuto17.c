// Goto statements, try to avoid this and use only when we need to break multiple loops using single statements

#include <stdio.h>

int main(){

/*label:
printf("we are inside label\n");
goto end;
printf("Hello World\n");
goto label;
end:
printf("we are at end\n");*/

int num;
for (int i = 0; i < 8; i++)
{
    printf("%d\t", i);
    for (int j = 0; j < 8; j++)
    {
        printf("Enter the number. enter 0 to exit\t");
        scanf("%d", &num);
        if(num==0){
          goto end;
        }
    }
}
end:
    return 0;
}