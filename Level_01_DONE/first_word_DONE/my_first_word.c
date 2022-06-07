#include <unistd.h>

int	main(int ac, char **av)
{
	char	*c;
	char	*start;

	if (ac == 2)
	{
		c = av[1];
		while (*c == ' ' || *c == '\f' || *c == '\n' || 
				*c == '\r' || *c == '\t' || *c == '\v')
			c++;
		if (*c)
		{
			start = c;
			while (!(*c == ' ' || *c == '\f' || *c == '\n' || 
					*c == '\r' || *c == '\t' || *c == '\v'))
				c++;
			while (start != c)
				write(1, start++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}