#include <stdio.h>

int main(){

char day;
printf("enter day: \n");
scanf("%s", &day);

switch (day)
{
case 'm':
printf("monday\n");
    break;

case 't':
printf("tuesday\n");
    break;

    case 'w':
printf("wednusday\n");
    break;

    case 'T':
printf("thursday\n");
    break;

    case 'f':
printf("friday\n");
    break;

    case 's':
printf("saturday\n");
    break;

    case 'S':
printf("sunday\n");
    break;

default:
    printf("not a valid day\n");
}

    return 0;
}