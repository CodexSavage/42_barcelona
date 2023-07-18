#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int n;
	int i;

	n = 1;
	i = 0;
	while (str[i] != '\0' && n == 1)
	{
		printf("%c", str[i]);
		if ((str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			n = 0;
	}
	printf("\n");
	return n;
}
int main(void)
{
  int result = ft_str_is_alpha("holacom5estas");
  printf("%d\n", result);
  return 0;
}
