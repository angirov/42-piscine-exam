#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	num;
	int	minus;

	num = 0;
	minus = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n' || 
				*str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			min = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		num = num*10 + '0' - *str++;
	if (minus)
		num *= -1;
	return (num);
}