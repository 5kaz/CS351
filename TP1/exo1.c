#include <stdio.h>
void version1();
void version2();
void version3();



int main()
{
	version1();
	version2();
	version3();
	return 0;
}


void version1()
{
	char note;
	printf("Insérer une note entre A et E : \n");
	scanf("%c",&note);
	if (note=='A')
	{
		printf ("Très bien \n");
	}
	else if (note == 'B')
	{
		
		printf ("Bien \n");
	}
	else if (note == 'C')
	{
		
		printf ("Assez bien \n");
	}
	else if (note == 'D')
	{
		
		printf ("Passable \n");
	}
	else if (note == 'E')
	{
		
		printf ("Insuffisant \n");
	}
	printf ("Fin1\n");
}

void version2()
{
	char note;
	printf("Insérer une note entre A et E : \n");
	scanf("%c",&note);
	if (note=='A')
	{
		printf ("Très bien \n");
	}
	
	if (note == 'B')
	{
		printf ("Bien \n");
	}
	
	if (note == 'C')
	{
		printf ("Assez bien \n");
	}
	if (note == 'D')
	{
		printf ("Passable \n");
	}
	if (note == 'E')
	{
		printf ("Insuffisant \n");
	}
	printf ("Fin2\n");

}

void version3()
{
	char note;
	printf("Insérer une note entre A et E : \n");
	scanf("%c",&note);
	switch (note)
	{
		case 'A' :
			printf ("Très bien \n");
			break;
		case 'B' :
			printf ("Bien \n");
			break;
		case 'C' :
			printf ("Assez bien \n");
			break;
		case 'D' :
			printf ("Passable \n");
			break;
		case 'E' :
			printf ("Insuffisant \n");
			break;
	}
	printf ("Fin3\n");

}