#include <stdio.h>

int jeuMulti()
{
  int table=0, result=0, i=0;
  do
  {
    printf("Entrez une table entre 2 et 9\n");
    scanf("%d",&table);
  } while (table>9 && table<2);
  for (i=1;i<10;i++)
  {
    printf("%d * %d = ",i,table);
    scanf("%d",&result);
    if (i * table != result)
    {
      printf("Mauvaise réponse, la bonne réponse était %d\n",i*table);
      return 0;
    }
  }
  printf("Félicitations, vous connaissez la table de %d\n",table);
  return 1;
}

int jeuMultiPoints()
{
  int table=0, result=0, i=0, erreur=0;
  do
  {
    printf("Entrez une table entre 2 et 9\n");
    scanf("%d",&table);
  } while (table>9 && table<2);
  for (i=1;i<10;i++)
  {
    printf("%d * %d = ",i,table);
    scanf("%d",&result);
    if (i * table != result)
    {
      printf("Mauvaise réponse, la bonne réponse était %d\n",i*table);
      erreur++;
    }
  }
  if (erreur==0)
  {
    printf("Félicitations, vous connaissez la table de %d\n",table);
    return 0;
  }
  else
  {
    printf("Vous avez fait %d erreurs\n",erreur);
    return 1;
  }
}

int main()
{
  printf("Lancement procedure jeuMulti\n");
  jeuMulti();
  printf("Lancement procedure jeuMultiPoints\n");
  jeuMultiPoints();
  return 1;
}
