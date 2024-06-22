#include <stdio.h>

int main(){

int m , s;
printf("Enter math marks as m \n");
scanf("%d", &m);

printf("Enter science mark as s \n");
scanf("%d", &s);

printf("You have entered %d as mark\n", m, s);

if (m>=40 or  s >=40)
{
    printf("You have passed the exam and got 20 rupees\n");
}
else if (m>=40 and s>=40)
{
    printf("You have passed in both exam and got 50 rupees\n");
}
else (m< 40 and s < 40);
{
    printf("You have failed in exam and got nothing!!\n");
}
return 0;
}

// wrong because or and and statement can't be used 
// also if we used symbols for or and and than also it won't work