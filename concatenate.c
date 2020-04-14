//program to concatenate two stings
#include <stdio.h>
int main()
{
    char str1[10],str2[10];
    int i=0,j=0;
    printf("enter the first string\n");
    gets(str1);
    printf("enter the second string\n");
    gets(str2);
    while(str1[i]!='\0')
        i++;
    while(str2[j]!='\0')
    {

        str1[i]=str2[j];
        j++;
        i++;

    }
    str1[i]='\0';
    printf("concatenated string is %s\n",str1);
    return 0;
}
