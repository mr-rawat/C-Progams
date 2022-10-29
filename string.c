#include<stdio.h>
#include<string.h>
void main()
{
    int len,i;
    char name[100];
    printf("ENTER NAME : ");

    //scans the string
    gets(name);

    //print the string
    puts(name);

    printf("Your Name is :- %s",name);

    //length of string
    len=strlen(name);
    printf("\nThe length of the string is :- %d",len);
    
    i=0;
    while(name[i]!='\0')
    {
        i++;
    }
    printf("\nThe length of the string is :- %d",i);

}