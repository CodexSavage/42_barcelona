# include <stdio.h>
# include <unistd.h>

void f_aux(int *a, int * b, int *c);

void ft_print_comb(void){

	static int a = 0;
	static int b = 1;
	static int c = 2;

	f_aux(&a, &b, &c);

	//printf("%d%d%d, ", a, b, c);
	if (a == b || b == c || a == c)
	{
		if (a == c || b == c)
		{
			c++;
			ft_print_comb();
		}
		else if (b == a)
		{
			b++;
			ft_print_comb();
		}
	}
	else
		c++;
	f_aux(&a, &b, &c);
	if (a == 10)
		return;
	printf("%d%d%d, ", a, b, c);
	ft_print_comb();
}
void f_aux( int *a, int *b,  int *c)
{
	if (*c == 10 )
	{
		*c = 0;
		*b += 1; 
	}
	if (*b == 10)
	{
		*b = 0;
		*a += 1;
	}
}

int	main(){
	ft_print_comb();
	return 0;
}


