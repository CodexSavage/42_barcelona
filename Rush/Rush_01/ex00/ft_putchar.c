#include <unistd.h>

void	ft_putchar(char *nbr)
{
	write(1, &nbr, 1);
}
