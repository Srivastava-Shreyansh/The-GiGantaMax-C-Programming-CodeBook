/*Which of the following is used to appropriately read a multi-word string.
1.gets()
2.puts()
3.printf()
4.scanf()
*/
#include <stdio.h>

int main(){
    int a;
    printf("\n1.\n2.\n3.\n4.\nChoose an Option:");
    scanf("%d", &a);
    switch(a){
        case 1:
        printf("Correct!\n");
        break;
        case 2:
        printf("Incorrect!\n");
        break;
        case 3:
        printf("Incorrect!\n");
        break;
        case 4:
        printf("Incorrect!\n");
        break;
    }
    return 0;
}