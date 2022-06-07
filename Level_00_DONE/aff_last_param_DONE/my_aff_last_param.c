#include <unistd.h>

int main(int argc, char **argv)
{
	char	*c;

	if (argc > 1)
	{
		c = argv[argc -1];
		while (*c)
		{
			write(1, c++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}