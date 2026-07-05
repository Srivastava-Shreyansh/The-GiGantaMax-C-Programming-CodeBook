#include <stdio.h>

int main()
{
    float i = 9.81;
    float *j = &i;

    char k = 'a';
    char *l = &k;

    printf("add i= %u\n", j);
    printf("add k= %p\n", l);
    return 0;
}