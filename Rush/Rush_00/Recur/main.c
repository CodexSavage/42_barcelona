# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>


void rush( int x, int y[])
{
	int aux = 1, i = 1, c = 0, dic[3];
	char o = 'o', l = '-', p = '|';
	if ( y[1] == 1) c = y[2];
	if ( y >= 1)
	{
		while( i <= x)
		{
			if ((i == 1 || i == x) c && ( y[0] == y[2] || y[0] == 1)) write( 1, &o, 1);
			else if ( i!=1 || i != c && ( y[0] == y[2] || y[0] == 1))write(1, &l, 1);
			else if ( i == 1 || i == x) write(1, &p, 1);
			else write(, " ", 1);
			i++;
		}
		dic[0] = y--;
		dic[1] = aux++;
		dic[2] = c;
		rush( 5, dic);
	}
}


int main( int argc, char *argv[])
{
	rush(atoi(argv[1]), atoi(argv[2]));
}
