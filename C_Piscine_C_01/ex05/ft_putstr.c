# include<stdio.h>
# include<stdlib.h>

void	ft_putstr( char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	
}

int main(void)
{
	char p[] = "Hola mundo";
	ft_putstr(p);
	//char* string = (char*)malloc(size(p)+ 1) 
}

