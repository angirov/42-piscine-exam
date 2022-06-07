#include <stdio.h>

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_hex(int num)
{
    if (num >= 16)
    {
        print_hex(num / 16);
        print_hex(num % 16);
    }
    else if (num < 10)
        ft_putchar(num + '0');
    else
        ft_putchar(num - 10 + 'a');
}

int main(int ac, char **av)
{
    int num = 0;
    char *c;

    if (ac == 2)
    {
        c = av[1];
        while (*c)
        {
            num = num * 10 + *c - '0';
            c++;
        }
        print_hex(num);
    }
    write(1, "\n", 1);
}
