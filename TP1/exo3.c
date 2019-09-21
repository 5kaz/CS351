#include <stdio.h>

int main()
{
  unsigned int n=0,i=0,somme=0;
  printf("Entrez un entier positif \n");
  scanf("%u",&n);
  while (i < n+1)
  {
    somme += i;
    i++;
  }
  printf("La somme des %u premiers entiers vaut %u\n",n,somme);
  return 0;
}
