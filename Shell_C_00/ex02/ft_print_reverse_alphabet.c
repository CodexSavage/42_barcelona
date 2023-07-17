#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void)
{
    static char letter = 'z';

    if ( letter < 'a')
		{
			write(1, "\n", 1);
			return ;
		}
    write(1, &letter, 1);
    letter--;
    ft_print_alphabet();
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}
