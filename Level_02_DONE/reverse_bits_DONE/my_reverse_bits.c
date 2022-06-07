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

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char i = 1;
    unsigned char s = 1 << 7;
    unsigned char r = 0;


    while (s)
    {
        if (octet & i)
            r = r | s;
        i = i << 1;
        s = s >> 1;
    }
    return (r);
}

int main()
{
    unsigned char c = 42;

    print_bits(c);
    write(1, "\n", 1);

    print_bits(reverse_bits(c));
    write(1, "\n", 1);
}