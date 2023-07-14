# include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int aux;
	
	aux = *a;
	printf("%d%d%d\n", *a, *b, aux);
	*a = *b;
	*b = aux;
	printf("%d%d%d", *a, *b, aux);
}

int main()
{
	int x;
	int y;

	x = 4;
	y = 2;

	ft_swap(&x, &y);
	return 0;
}
