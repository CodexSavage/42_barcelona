# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void ft_is_negative( int n)
{
	char a = 'N';
	char p = 'P';
	if ( n < 0 ) write(1, &a, 1);
	else if ( n > 0) write( 1, &p, 1);
	else write( 1, &p, 1);
}

int main( int argc, char *argv[])
{
	ft_is_negative(atoi(argv[1]));
	//ft_is_negative(4);
	return 0;
}
