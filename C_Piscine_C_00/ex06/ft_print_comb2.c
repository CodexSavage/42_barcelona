#include <unistd.h>
#include <stdio.h>

void ft_print(int value, int value2);
void ft_printi(int value, int value2);

void ft_print_comb2(void)
{
	int i;
	int i2;
	int j;
	int j2;

	i = 0;
	i2 = 0;
	j = 0;
	while (i <= 9)
	{
		j2 = 0;
		if (i2 > 9 )
		{
			i2 = 0;
			i++;
		}
		ft_printi(i, i2);
		while (j <= 9)
		{
			if (j2 > 9 )
			{
				j2 = 0;
				j++;
			}
			//ft_print(j, j2);
			j2++;
		}
		ft_print(j , j2);
		i2++;
	}
}
void ft_printi(int value, int value2)
{
	value += '0';
  write(1, &value, 1);
  value2 += '0';
  write(1, &value2, 1);
  write(1, " ", 1);
}

void ft_print(int value, int value2)
{
	value += '0';
	write(1, &value, 1);
	value2 += '0';
	write(1, &value2, 1);
	//if (value != 9 && value2 != 9 && value3 != 9 && value4 != 9)
	//	write(1, ", ",1);
}

int main(void)
{
	ft_print_comb2();
	return 0;
}
