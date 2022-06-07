#include <stdio.h>

#include <unistd.h>


int degrees(int num, int base)
{
    int degree = 0;

    while ((num = num / base))
    {
        degree++;
    }
    return degree;
}

int power(int num, int exp)
{
    int ret = 1;
    while (exp--)
        ret = ret * num;
        return ret;
}

int main(int ac, char **av)
{
    int num = 0;
    char *c;

    char base[] = "0123456789abcdef";
    if (ac == 2)
    {
        c = av[1];
        while (*c)
        {
            num = num * 10 + *c - '0';
            c++;
        }
        int degree = degrees(num, 16);
        while (degree >= 0)
        {
            *c = base[num / power(16, degree)];
            num = num % power(16, degree);
            write(1, c, 1);
            degree--;
        }
    }
    write(1, "\n", 1);
}

// int main()
// {
//     printf("%d\n", degrees(244, 10));
// }