/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skudo <skudo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:12:37 by skudo             #+#    #+#             */
/*   Updated: 2022/10/29 14:35:01 by skudo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static void	init(char *num)
{
	int	i;

	i = 0;
	while (i < 40)
	{
		num[i] = '\0';
		i++;
	}
}

static int	check_over(char *str, long number, int i, int sign)
{
	long	ov_div;
	long	ov_mod;

	if (sign == -1)
		return (0);
	ov_div = LONG_MAX / 10;
	ov_mod = LONG_MAX % 10;
	if (number > ov_div || ((number == ov_div) && ((str[i] - '0') > ov_mod)))
		return (1);
	return (0);
}

static int	check_under(char *str, long number, int i, int sign)
{
	long	ov_div;
	long	ov_mod;

	if (sign == 1)
		return (0);
	ov_div = (LONG_MIN) / 10;
	ov_mod = (LONG_MIN) % 10 * (-1);
	number = number * -1;
	if (number < ov_div || ((number == ov_div) && ((str[i] - '0') > ov_mod)))
		return (1);
	return (0);
}

static int	atooi(char *str, int sign)
{
	char	num[40];
	int		i;
	long	number;
	char	*str_copy;

	str_copy = str;
	init(num);
	i = 0;
	while (*str >= '0' && *str <= '9')
		num[i++] = *(str++);
	number = 0;
	i = 0;
	while (num[i] != '\0')
	{
		number += num[i] - '0';
		if (num[i + 1] == '\0')
			break ;
		i++;
		if (check_over(str_copy, number, i, sign))
			return ((int)LONG_MAX);
		if (check_under(str_copy, number, i, sign))
			return ((int)LONG_MIN);
		number *= 10;
	}
	return (number);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		num;
	char	*str1;

	str1 = (char *)str;
	sign = 1;
	while ((*str1 >= '\t' && *str1 <= '\r') || *str1 == ' ')
		str1++;
	if (*str1 == '-' || *str1 == '+')
	{
		if (*str1 == '-')
			sign *= -1;
		str1++;
	}
	if (!(*str1 >= '0' && *str1 <= '9'))
		return (0);
	num = atooi(str1, sign);
	num *= sign;
	return (num);
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	st1[];
	int		num;
	char	st2[];
	int		num2;

	(void)argc;
	(void)argv;
	st1[] = "-9223372036854775809";
	num = ft_atoi(st1);
	// int num = ft_atoi(argv[1]);
	printf("%d\n", num);
	st2[] = "-9223372036854775809";
	num2 = atoi(st2);
	printf("%d\n", num2);
	return (0);
}
*/