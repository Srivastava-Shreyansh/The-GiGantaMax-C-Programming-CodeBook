#include <stdio.h>

int sumOfN(int n);
int sumOfN(int n){
    if (n==0)
    {
        return 0;
    }
    

    return sumOfN(n-1)+n;

}
int main(){
    int f = sumOfN(5);
    printf("%d",f);
    return 0;
}
