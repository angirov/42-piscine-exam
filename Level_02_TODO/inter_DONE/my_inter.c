#include <unistd.h>

int	main(int ac, char **av)
{
	char	*s;
	char	*p;
	int		unique;

	if (ac == 3)
	{
		s = av[1];
		while (*s)
		{
			p = av[1];
			unique = 1;
			while (p != s)
			{
				if (*p++ == *s)
				{
					unique = 0;
					break;
				}
			}
			p = av[2];
			while (*p && unique)
			{
				if (*p++ == *s)
				{
					write(1, s, 1);
					break;
				}
			}
			s++;
		}
	}
	write(1, "\n", 1);
	return (0);
}