//2. Calculate average of 3 values.

#include<stdio.h>
int main()
{
    float s,l,m;
    printf("Enter the values:");
    scanf("%f %f %f",&s,&l,&m);

    float avg=(s+l+m)/3;

    printf("The average of 3 values is:%.2f",avg);

    return 0;
}

