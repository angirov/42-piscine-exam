#include <unistd.h>

int	main(int ac, char **av)
{
	char	*c;
	int		len;

	if (ac == 2)
	{
		c = av[1];
		len = 0;
		while (*c)
		{
			len++;
			c++;
		}
		while (len-- > 0)
			write(1, --c, 1);
	}
	write(1, "\n", 1);
	return (0);
}
