int		get_size(char *nbr);
int		verified_allint(char *nbr);
char	*getcomab(int nbr3, int nbr4);

int	get_size(char *nbr)
{
	static int	i = 0;

	if (nbr[i] != '\0')
		i++;
	else
		return (i);
	return (get_size(nbr));
}

int	verified_allint(char *nbr)
{
	static int	iter = 0;

	iter = 0;
	if (nbr[iter] != '\0')
	{
		if (iter % 2 == 0)
		{
			if ((nbr[iter] <= '0') || (nbr[iter] >= '5'))
				return (2);
		}
	}
	iter++;
	return (verified_allint(nbr));
}

char	*getcomb(int nbr3, int nbr4)
{
	if (nbr3 == 2 && nbr3 == 2)
		return ("3142 2413 1423 3241 2413 3142 2143");
	else if (nbr3 == 1 && nbr4 == 4)
		return ("4321");
	else if (nbr3 == 4 && nbr4 == 1)
		return ("1234");
	else if (nbr3 == 1 && nbr4 == 3)
		return ("4132 4231 4312");
	else if (nbr3 == 3 && nbr4 == 1)
		return ("2314 1324 2134");
	else if (nbr3 == 2 && nbr4 == 3)
		return ("1432 2431 3421");
	else if (nbr3 == 3 && nbr4 == 2)
		return ("2341 1342 1243");
	else if (nbr3 == 1 && nbr4 == 2)
		return ("4123 4213");
	else if (nbr3 == 2 && nbr4 == 1)
		return ("3214 3124");
	return ("2");
}
