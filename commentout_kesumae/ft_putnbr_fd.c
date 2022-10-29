/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skudo <skudo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:25:00 by skudo             #+#    #+#             */
/*   Updated: 2022/10/29 14:40:23 by skudo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	n_abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		count;

	ft_bzero(str, 12);
	count = digit(n);
	// str[count] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n && (count--) >= 0)
	{
		str[count] = n_abs(n % 10) + '0';
		n /= 10;
	}
	ft_putstr_fd(str, fd);
}
