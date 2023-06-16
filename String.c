#include<stdio.h>
#include<string.h>
int main (void)
{
    int number = 0;
    char name[20];
    printf("enter your name:");
    gets(name);
    number = strlen(name);
    printf("%s\n", name);
    //puts(name);
    printf("length of string is %d", number);
    //scanf("%s", name);
    //printf("%s", name);
}