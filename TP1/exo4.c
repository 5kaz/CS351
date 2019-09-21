#include <stdio.h>

int main()
{
  int i, j, k, l;
  i = j = k = l = 0; //on crée 4 variables int qu'on initialise à la valeur 0
  while(i < 9)
  {
    printf("i++ = %d, ++j = %d, k-- = %d, --l = %d\n", i++, ++j, k--, --l); //j est incrémenté et l est décrémenté en premier, i et k sont modifiés après le printf
  }
  printf ("i = %d, j = %d, k = %d, l = %d\n", i, j, k, l); //i=9, j=9, k=-9 et l=-9
  return (0);
}
