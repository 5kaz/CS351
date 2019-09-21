#include <stdio.h>
#include <stdbool.h>

int main()
{
	int annee=0;
	bool bissextile = false;
	printf ("Entrer une annee : \n");
	scanf("%d",&annee);
	if (annee % 4 == 0)
	{
		bissextile = true;
		if (annee % 100 == 0)
		{
			bissextile = false;
			if (annee % 400 == 0)
			{
				bissextile = true;
			}
		}
	}
	if (bissextile==false)
	{
		printf("L'annee n'est pas bissextile\n");
	}
	else
	{
		printf("L'ann�e est bissextile\n");
	}
	return 0 ;
}
