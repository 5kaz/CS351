#include <stdio.h>

int fibonacci(int n)
{
  int somme=0, u0=0, u1=1, i=0;
  for (i=1;i<n;i++)
  {
    somme = u0+u1;
    u0=u1;
    u1=somme;
  }
  return somme;
}

int main()
{
  int n=1;
  printf("Entrer un entier superieur a 1 :\n");
  scanf("%d",&n);
  printf("Le terme de rang %d est égal à %d\n",n,fibonacci(n));
  return 0;
}
