//1. Find minimum value 5,12,0.

#include<stdio.h>
int main()
{
    int s,d,r;
    s=5;
    d=12;
    r=0;

    if(s<d && s<r)
    {
        printf("The minimum value is:%d",s);
    }
    else if(d<s && d<r)
    {
        printf("The minimum value is:%d",d);
    }
    else if(r<s && r<d)
    {
        printf("The minimum value is:%d",r);
    }
    return 0;
}
