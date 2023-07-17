#include <stdlib.h>
#include <stdio.h>

void	checkUp(char *nbr, int *i, char **params);
void	checkDown(char *nbr, int *i, char **params, int index);
void	checkLeft(char *nbr, int *i, char **params, int index);
void	checkRight(char *nbr, int *i, char **params, int index);
int	getSize(char *nbr);
size_t sizeofValue(int *prt);
int verifiedAllint(char *nbr);

void	check_parameters(char *nbr)
{
	int f_value;

	f_value = 0;
	int* t = &f_value;
	char **params = malloc(sizeof(char*) * 4);
	//char **params = malloc(4);

	if (getSize(nbr) != 31) // si el tamaño del string no es suficiente sale del programa
		return ;
	if (verifiedAllint(nbr) == 2) // si, no todos los elementos separados con espacios son enteros sale del programa
		return ;

	params[0] = malloc(8);
	params[1] = malloc(8);
	params[2] = malloc(8);
	params[3] = malloc(8);
	
	checkUp(nbr, t, params);
	checkDown(nbr,t , params, 0);
	checkLeft(nbr, t, params, 0);
	checkRight(nbr, t, params, 0);

	printf("%s\n", params[0]);
	printf("%s\n", params[1]);
	printf("%s\n", params[2]);
	printf("%s\n", params[3]);
}

void	checkUp(char *nbr, int *i, char **params) // guarda los primeros cuatro digitos con espacios en el array
{
	if (*i == 8)
		return ;
	params[0][*i] = nbr[*i];
	(*i)++;
	checkUp(nbr, i, params);
}

void	checkDown(char *nbr, int *i, char **params, int index) // guarda los segundos cutro digitos con espacios en el array
{
	if (*i == 16)
		return ;
	params[1][index] += nbr[*i];
	index++;
	(*i)++;
	checkDown(nbr, i, params, index);
}

void	checkLeft(char *nbr, int *i, char **params, int index) // guarda los terceros cuatro dígitos con espacios en el array
{
	if (*i == 24)
		return ;
	params[2][index] += nbr[*i];
	index++;
	(*i)++;
	checkLeft(nbr, i, params, index);
}

void	checkRight(char *nbr, int *i, char **params, int index) // guarda los cuarto cuatro dígitos con espacios en el array
{
	if (*i == 31)
		return ;
	params[3][index] += nbr[*i];
	index++;
	(*i)++;
	checkRight(nbr, i, params, index);
}

int	getSize(char *nbr) // obtiene el tamaño del string pasado por parámetro de comando
{
	static int i = 0;
	if (nbr[i] != '\0')
		i++;
	else
		return i;
	return getSize(nbr);
}

void	checkCombinatorsUpDown(char *nbr, char *nbr2)  //Comprueba las combinaciones posibles de Arriba y Abajo
{
	//int* allcomb = (int*)malloc(2 * 8);
	char* comb41 = malloc(2);
	char* comb14 = malloc(2);
	char* comb22 = malloc(2);
	char* comb13 = malloc(2);
	char* comb31 = malloc(2);
	char* comb23 = malloc(2);
	char* comb32 = malloc(2);

	comb41[0] = '4';
	comb41[1] = '1';
	comb14[0] = '1';
	comb14[1] = '4';
	comb22[0] = ''

	printf("%s", nbr);
	printf("%s", nbr2);
	return ;
}

void	checkCombinatorsLeftRight(char *nbr, char *nbr2) // Comprueba las combinaciones posibles de Izquierda y derecha
{
	printf("%s", nbr);
	printf("%s", nbr2);
	return ;
}

int verifiedAllint(char *nbr) // Verifica que los números entrados, separados por "espacio" sean números y no otra cosa
{
	static int iter = 0;
	if (nbr[iter] != '\0') //Si no detecta el final del string...continua
	{
		if (iter % 2 == 0) //Si detecta las posiciones pares incluyendo el 0...continua
		{
			if ((nbr[iter] <= '0') || (nbr[iter] >= '5')) // Si el caracter no es menor o igual que 0 o mayor o igual a 5...sale
				return 2;
		}
	}
	iter++;
	return verifiedAllint(nbr);
}

