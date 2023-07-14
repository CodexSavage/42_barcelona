# include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int d;
	int r;

	d= *a / *b;
	r = *a % *b;
	*a = d;
	*b = r;

	printf("%d\n", *a);
	printf("%d\n", *b);
}

int	main(void)
{
	int a;
	int b;

	a = 8;
	b = 5;

	int* x = &a;
	int* y = &b;
	ft_ultimate_div_mod(x, y);
	return 0;
}
