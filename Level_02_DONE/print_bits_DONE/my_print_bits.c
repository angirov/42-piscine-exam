#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	i;

	i = 1 << 7;
	while (i > 0)
	{
		if (i & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i = i >> 1;
	}
}

int	main()
{
	print_bits(200);
}