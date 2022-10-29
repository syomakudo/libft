/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skudo <skudo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:39:19 by skudo             #+#    #+#             */
/*   Updated: 2022/10/29 14:40:02 by skudo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	count;

	if (!dst && !src)
		return (NULL);
	count = 0;
	while (0 < n--)
	{
		*(char *)(dst + count) = *(char *)src++;
		count++;
	}
	return (dst);
}
