#include <stdio.h>

int	check_parameters( char *nbr);

int	main(int argc, char *argv[])
{
	if (argc == 2)
		check_parameters(argv[1]);
	else
		return -1;
}
