# include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;

	printf("%d", *********nbr);
}

int	main()

{
	int q = 2;
	int* w = &q;
	int** e = &w;
	int*** r = &e;
	int**** t = &r;
	int***** y = &t;
	int****** u = &y;
	int******* i = &u;
	int******** o = &i;
	int********* p = &o;
	
	ft_ultimate_ft(p);
	return 0;
}
