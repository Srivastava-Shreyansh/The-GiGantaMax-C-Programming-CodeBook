/*If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i)True.
(ii)False.
(iii)Depends.
*/
#include <stdio.h>

int main(){
    int s;
    printf("\n1-->True\n0-->False\nEnter 1 or 0:");
    scanf("%d",&s);

    if (s==0){
        printf("Correct!");
    }
    else{
        printf("Incorrect Mate! The correct answer is FALSE as it will print second element starting index from 0!");
    }
    return 0;
}