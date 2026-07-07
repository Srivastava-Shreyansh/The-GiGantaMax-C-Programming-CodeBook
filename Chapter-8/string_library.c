#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] = "Lamborghini";
    int length = strlen(str);
    printf("The size of the string is: %d\n", length);

    char rtr[100];
    strcpy(rtr, str);
    printf("%s\n",rtr);

    char s1[30] = "Hello";
    char s2[] = "MOTO";
    strcat(s1, s2);
    printf("%s\n",s1);

    char st1[]="deep";
    char st2[]="joke";
    char st3[]="deep";
    strcmp("st1", "st2");
    strcmp("st2", "st1");
    strcmp("st1", "st3");
    printf("%d\n",strcmp(st1,st2));
    printf("%d\n",strcmp(st2,st1));
    printf("%d\n",strcmp(st1,st3));
    return 0;
}