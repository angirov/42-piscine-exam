#include <unistd.h>

int	main(void)
{
	char	c;
	int		i;
	char	p[1];

	c = 'a';
	i = 1;
	while (c <= 'z')
	{
		if (i % 2 == 0)
			*p = c + 'A' - 'a';
		else
			*p = c;
		write(1, p, 1);
		c++;
		i++;
	}
	write(1, "\n", 1);
}