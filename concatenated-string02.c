#include<stdio.h>
#include<string.h>
void main()
{
    char name[100]={'i','s','h','a',' ','n','e','g','i'};
    char sentence[100] =" is a student.";
    strcat(name,sentence);
    printf(" %s",name);
}
