#include <stdio.h>

int main(){

    char input;
    float kmsTOmiles = 0.62137 ;
    float inchesTOfoot = 0.08333333 ;
    float cmsTOinches = 0.39370079 ;
    float poundTOkgs = 0.45359237 ;
    float inchesTOmeters = 0.0254 ;
float first, second;
    while(1)// means continue run til a condition is satisfying
{
    printf("Enter the input character. q to quit\n  1. kms to miles\n  2. inches to foot\n  3. cms to inches\n  4. pound to kg\n  5. inches to meters\n");
    scanf(" %c", &input);

switch (input)
{
case 'q':
printf("Quitting the programm...");
goto end;
   break;

case '1':
printf("Enter quantity in terms of first unit \n");
scanf("%f", &first);
second = first * kmsTOmiles;
printf("%f kilometers is equal to %f miles \n", first, second);
break;

case '2':
printf("Enter quantity in terms of first unit \n");
scanf("%f", &first);
second = first * inchesTOfoot;
printf("%f inches is equal to %f foot \n", first, second);
break;

case '3':
printf("Enter quantity in terms of first unit \n");
scanf("%f", &first);
second = first * cmsTOinches;
printf("%f cms is equal to %f inches \n", first, second);
break;

case '4':
printf("Enter quantity in terms of first unit \n");
scanf("%f", &first);
second = first * poundTOkgs;
printf("%f pound is equal to %f kgs \n", first, second);
break;

case '5':
printf("Enter quantity in terms of first unit \n");
scanf("%f", &first);
second = first * inchesTOmeters;
printf("%f inches is equal to %f meters \n", first, second);
break;


default:
    break;
}
}
end:
    return 0;
}