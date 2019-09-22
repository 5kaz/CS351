#include <stdio.h>

int pgcd(int a, int b)
{
  int r=0;
  if (b==0)
  {
    return a;
  }
  while (r = a%b)
  {
    a=b;
    b=r;
    #ifdef MISEAUPOINT
		printf("valeur courante de b = %d\n", b);
		#endif
  }
  return b;
}

int main()
{
  int a=0,b=0;
  printf("Entrer le premier entier :\n");
  scanf("%d",&a);
  printf("Entrer le second entier :\n");
  scanf("%d",&b);
  printf("Le pgcd de %d et %d vaut %d\n",a,b,pgcd(a,b));
  return 0;
}
