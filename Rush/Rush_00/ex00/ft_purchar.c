# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void rush(int x, int y)
{
	printf("%d\n", x);
	printf("%d\n", y);
	char middle_x = '-';
	char init = 'o';
	char middle_y = '|';

	for ( int l = 1; l <= y; l++)
	{
		for (int i = 1; i <= x; i ++)
		{
			if (l == 1 || l == y)
			{
				if (i == 1 || i == x) write( 1, &init, 1);
				else write( 1, &middle_x, 1);
			}
			else
			{
				if ( i == 1 || i == x)
				{
					write( 1, &middle_y, 1);
				}
				else write(1, " ", 1);
			}
		}
		write(1,"\n", 1);
	}
	printf("\n");

}

void ft_putchar()
{
	char r = 'e';
}

int main( int argc, char *argv[])
{
	rush(atoi(argv[1]),atoi(argv[2]));
	return 0;
}
