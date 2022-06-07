#include <unistd.h>


void print_hex(unsigned char c)
{
    char base[] = "0123456789abcdef";
    write(1, &base[c / 16], 1);
    write(1, &base[c % 16], 1);
}

void	print_memory(const void *addr, size_t size)
// void	print_memory(size_t size)
{
    unsigned char *tab;
    tab = (unsigned char *)addr;
    size_t i = 0;
    while (i < size)
    {
        size_t j = 0;
        while (j < 16 && i + j < size)
        {
            // write(1, "00", 2); // print hex add[i + j]
            print_hex(tab[i + j]);
            if (j % 2)
                write(1, " ", 1);
            j++;
        }
        while (j < 16)
        {
            write(1, "  ", 2); // print hex add[i + j]
            if (j % 2)
                write(1, " ", 1);
            j++;
        }
        j = 0;
        while (j < 16  && i + j < size)
        {
            if (tab[i + j] >= ' ' && tab[i + j] <= '~')
                write(1, &tab[i + j], 1);
            else
                write(1, ".", 1);
            j++;
        }
        write(1, "\n", 1);
        i += 16;
    }
}

int	main(void)
{
	int	tab[10] = {0, 23, 150, 255,
	              12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}