#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sensei.txt", "r");
    if(ptr == NULL){
        printf("The file given does not exists, Sorry!");
    }
    else{

        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n",num);
        
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n",num);
    }

    fclose(ptr);
    return 0;
}