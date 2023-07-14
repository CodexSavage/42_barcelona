# include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int op;
	int res;

	op = a / b;
	*div = op;
	res = a % b;
	*mod = res;
	printf("%d", op);
	printf("%d", res);
}

int main()
{
	int div;
	int mod;

	ft_div_mod(8, 5, &div, &mod);
	return 0;
}
