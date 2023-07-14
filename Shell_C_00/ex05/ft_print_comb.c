# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void ft_print_comb( void )
{
	int a = 0;
	int b = 0;
	int c = 0;
	int size = 3;
	while( )
	{
		char* m = (char*)malloc((size+1) * sizeof(char));
		strcpy(m,a + b + c + ",");
		write(1, &m ,1);
	}
}

int main()
{
	ft_print_comb();
	return 0;
}

