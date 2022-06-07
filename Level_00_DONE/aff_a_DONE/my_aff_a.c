#include <unistd.h>

int	main (int argc, char **argv)
{
	char *c;

	c = argv[1];
	while (*c)
	{
		if (*c == 'a')
			write(1, c, 1);
		c++;
	}
	write(1, "\n", 1);
	return (0);
}
