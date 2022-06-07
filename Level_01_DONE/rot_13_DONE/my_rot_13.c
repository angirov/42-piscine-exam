#include <unistd.h>

int	main(int ac, char **av)
{
	char	*c;
	char	p;

	if (ac == 2)
	{
		c = av[1];
		while (*c)
		{
			p = *c;
			if (*c >= 'a' && *c<= 'z')
				p = 'a' + ((*c + 13 - 'a') % 26);
			if (*c >= 'A' && *c<= 'Z')
				p = 'A' + ((*c + 13 - 'A') % 26);
			write(1, &p, 1);
			c++;
		}
	}
	write(1, "\n", 1);
	return (0);
}