#include <stdio.h>

int	getSize(char *nbr);

char* getcomb(int nbr3, int nbr4)
{
	if (nbr3 == 2 && nbr3 == 2)
  	return "3142 2413 1423 3241 2413 3142 2143";
	else if (nbr3 == 1 && nbr4 == 4)
  	return "4321";
	else if ( nbr3 == 4 && nbr4 == 1)
  	return "1234";
	else if (nbr3 == 1 && nbr4 == 3)
  	return "4132 4231 4312";
	else if (nbr3 == 3 && nbr4 == 1)
  	return "2314 1324 2134";
	else if (nbr3 == 2 && nbr4 == 3)
  	return "1432 2431 3421";
	else if (nbr3 == 3 && nbr4 == 2)
  	return "2341 1342 1243";
	else if (nbr3 == 1 && nbr4 == 2)
  	return "4123 4213";
	else if (nbr3 == 2 && nbr4 == 1)
  	return "3214 3124";
	return "2";
}

void paramcomb(char *nbr)
{
	int size;
	int i;
	int j;

	i = 0;
	j = 0;
	size = getSize(nbr);
	if (size > 4)
	{
		while()
	}
	//si longitud es > 4 entonces longitud -1 para verificar valores
}
int main(void)
{
	printf("%s", getcomb(2,2));
	return 0;
}
