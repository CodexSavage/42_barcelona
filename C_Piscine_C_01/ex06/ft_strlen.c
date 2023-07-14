# include <stdio.h>

int	ft_strlen(char *str)
{
	size_t size = 0;
	while( str[size] != '\0')
	{
		size ++;
	}
	return size;
}

int main()
{
	char p[] = "Hola mundo como est";
	int t;


	t = ft_strlen(p);
	printf("%d", t);
	return 0;
}
