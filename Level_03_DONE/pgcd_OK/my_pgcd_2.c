#include <stdio.h>
#include <stdlib.h>

int	euclid(int n1, int n2)
{
	int max;
	int min;

	if (n1 < n2)
	{
		min = n1;
		max = n2;
	}
	else
	{
		min = n2;
		max = n1;
	}
	if (max % min == 0)
		return min;
	else
		return(euclid(max - min, min));
}


int	main(int ac, char **av)
{
	int	n1;
	int	n2;

	if (ac != 3)
		return(printf("\n"));
	n1 = atoi(av[1]);
	n2 = atoi(av[2]);
	printf("> %d\n", euclid(n1, n2));
	return(0);
}

// $ ./a.out 143425 7999132588
// Segmentation fault (core dumped)