#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("ínserisci tre dimensioni");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b)
    {
        if(b==c)
        printf("e equilatero\n");

    }
    else if(a!=b)
    {
        if(b!=c)
        printf("e scaleno\n");
    }
    else
    {
        printf("e isoscele\n");
    }

}