# include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
	printf("%d", *nbr);
}

int	main(void)
{
	int	value;

	value = 4;
	int* r = &value;

	
	ft_ft(r);
	return 0;
}
