#include <stdio.h>
int sum(int,int);
int sum(int x,int y){
    return x+y;
}
int main(){
    int a=123,b=456;
    int c=sum(a,b);
    printf("%d\n",c);

    int a1=123,b1=456;
    int c1=sum(a1,b1);
    printf("%d\n",c1);

    int a2=123,b2=456;
    int c2=sum(a2,b2);
    printf("%d\n",c2);

    return 0;
}