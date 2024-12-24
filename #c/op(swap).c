#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,t;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    t=*pa;
    *pa=*pb;
    *pb=t;
    printf("after swappinga=%d and b=%d",a,b);
    return 0;

}