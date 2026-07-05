#include <stdio.h>

int main()
{
    int i = 8;
    int *j;
    j = &i;
    int **k;
    k = &j;
    printf("add i= %p\n", &i);
    printf("add i= %p\n", j);
    printf("add j= %p\n", &j);
    printf("add j= %p\n", k);
    printf("value i= %d\n", i);
    printf("value i= %d\n", *(&i));
    printf("value i= %d\n", *j);
    printf("add k= %p\n", &k);
    return 0;
}