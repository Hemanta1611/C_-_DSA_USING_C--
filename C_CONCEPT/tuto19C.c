#include <stdio.h>
// Without arguments and with return value
int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
printf("%c", '*');
}// line 3 to 11 no use because later we have not used above function if we use than it will work other wise it won't interfere further
int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c;
    a = 7;
    b = 9;
    c = takenumber();
    printf("The number entered is %d \n", c);
    return 0;
}