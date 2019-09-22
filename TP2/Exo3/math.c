#include "math.h"

#include <stdio.h>

int pgcd(int a, int b)
{
	if(b == 0)
		return a;

	int r = 0;
	while(r = a % b)
	{
		a = b;
		b = r;
	}
	return b;
}

unsigned int quotient(unsigned int a, unsigned int b)
{
	if(b == 0)
		return 0;

	unsigned int ret = 1, res = a;
	while(res > b)
	{
		res = res - b;
		ret++;
	}
	return ret;
}

unsigned int reste(unsigned int a, unsigned int b)
{
	if (b!=0)
	{
		return (a - quotient(a,b) * b); //a=bq+r donc r=a-b*q
	}
	else
	{
		return 0;
	}
}

unsigned int valeurAbsolue(int a)
{
	if (a<0)
	{
		return (-a);
	}
	else
	{
		return a;
	}
}

unsigned int ppcm(unsigned int a, unsigned int b)
{
	return valeurAbsolue(a*b) / pgcd(a, b);
}


void testBibliotheque()
{
	printf("quotient(10, 5) = %d\n", quotient(10, 5)); //test quotient entier
	printf("quotient(10, 3) = %d\n", quotient(10, 6)); //test quotient avec reste
	printf("quotient(10, 0) = %d\n", quotient(10, 0)); // test quotient avec b = 0

	printf("reste(10, 5) = %d\n", reste(10, 5)); //test reste sans reste
	printf("reste(10, 6) = %d\n", reste(10, 6)); //test reste avec reste
	printf("reste(10, 0) = %d\n", reste(10, 0)); // test reste avec b = 0

	printf("valeurAbsolue(10) = %d\n", valeurAbsolue(10)); //test valeurAbsolue positive
	printf("valeurAbsolue(-10) = %d\n", valeurAbsolue(-10)); // test valeurAbsolue negative
	printf("valeurAbsolue(0) = %d\n", valeurAbsolue(0)); // test valeurAbsolue avec 0

	printf("ppcm(10, 20) = %d\n", ppcm(10, 20)); //test ppcm a < b
	printf("ppcm(20, 10) = %d\n", ppcm(20, 10)); // test ppcm a > b
	printf("ppcm(0, 10) = %d\n", ppcm(0, 10)); // test ppcm avec a = 0
	printf("ppcm(10, 0) = %d\n", ppcm(10, 0)); // test ppcm avec b = 0
}
