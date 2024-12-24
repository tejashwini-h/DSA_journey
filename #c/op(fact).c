#include<stdio.h>
#include<math.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;}
        else{
        return(n*(fact(n-1)));}

}
int main()
{
    int n;
    printf("enter nn");
    scanf("%d",&n);
    printf("fact=%d",fact(n));
    return 0;
}