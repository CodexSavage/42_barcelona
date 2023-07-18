#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i <= n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main(void)
{
	char* def = malloc(6);
	char* result = malloc(6);
	char prueba[5] = "hola";
	result = ft_strncpy(def, prueba, 3);
	printf("%s", result);
	return 0;
}
