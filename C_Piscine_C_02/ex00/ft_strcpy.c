#include <stdio.h>
#include <stdlib.h>
char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
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
	result = ft_strcpy(def, prueba);
	printf("%s", result);
	return 0;
}
