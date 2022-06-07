#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	n1;
	int	n2;
	int	min;
	int	i;
	int	res;

	if (ac != 3)
		return(printf("\n"));
	n1 = atoi(av[1]);
	n2 = atoi(av[2]);
	if (n1 < n2)
		min = n1;
	else
		min = n2;
	i = 2;
	res = 1;
	while (i <= min)
	{
		if (n1 % i == 0 && n2 % i == 0)
			res = i;
		i++;
	}
	printf("%d\n", res);
	return(0);
}