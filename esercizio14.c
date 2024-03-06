#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf ("inserisci tre numeri\n");
    scanf ("%d %d %d",&a, &b, &c);
    if (a-b==b-c)
    {
        printf ("ok");
    } 
    else
    {
        printf ("ko");
    }
}