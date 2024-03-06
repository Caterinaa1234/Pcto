#include <stdio.h>
int main()
{
  int a;
  int b;
  int c;
  printf ("ínserisci tre lunghezze");
  scanf("'%d %d %d", &a,&b,&c);
  if(a==b & & b==c)
{
printf ("íl triangolo è equilatero\n");
}
else if (a==b && b!=c && c==a)
{
    printf("íl triangolo è isoscele ");
}
if (a!=b && b!=c && a!=c)
{
    printf ( "ïl triangolo è scaleno");
}
if (a==0 && b==0 && c==0)
{
    printf ("non è un triangolo");
}









}
   