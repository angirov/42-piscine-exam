int is_inbase(char c, int str_base)
{
    char base[] = "0123456789abcdef";
    int i = 0;

    while (i < str_base)
    {
        if (c == base[i])
            return (i);
        i++;
    }
    return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int num = 0;
    char *c = (char *)str;
    int minus = 0;

    while (*c <= 32)
        c++;
    if (*c == '-')
    {
        minus = 1;
        c++;
    }
    else if (*c == '+')
        c++;
    while (is_inbase(*c, str_base) >= 0)
    {
        num = num * str_base + is_inbase(*c, str_base);
        c++;
    }
    if (minus)
        num *= -1;
    return (num);
}

#include <stdio.h>

int main()
{
    printf("%d\n", ft_atoi_base("       \n \f -101234", 10));
}