/* Q3--> Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. 
Consider g = 9.8m/s2.
*/
#include <stdio.h>
int force(int);
int force(int m)
{
    return (m * (9.8));
}
int main()
{
    int m;
    printf("Enter the mass of the body:");
    scanf("%d", &m);
    printf("The Gravitational Force of Attraction for the given mass %d is:%d\n", m, force(m));
    return 0;
}