#include <stdio.h>

int factorielle (int n)
{
  int somme=1,i=1;
  if (n==0)
  {
    return somme;
  }
  for (i=1;i<=n;i++)
  {
    somme = somme * i;
  }
  return somme;
}

int main()
{
  int n=0;
  printf("Entrez un entier positif\n");
  scanf("%d",&n);
  printf("Factorielle %d vaut %d\n",n,factorielle(n));
  return 0;
}
