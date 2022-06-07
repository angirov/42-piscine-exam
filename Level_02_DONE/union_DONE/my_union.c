#include <unistd.h>

int	main(int ac, char **av)
{
	char	*s;
	char	*p;
	int		unique;

	s = av[1];
	if (ac == 3)
	{
		while (*s)
		{
			unique = 1;
			p = av[1];
			while (p != s)
			{
				if (*p == *s)
				{
					unique = 0;
					break;
				}
				p++;
			}
			if (unique)
				write(1, s, 1);
			if (*(s + 1) == '\0' && ac)
			{
				s = av[2];
				ac = 0;
			}
			else
				s++;
		}
	}
	write(1, "\n", 1);
	return (0);
}