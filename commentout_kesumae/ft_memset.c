/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skudo <skudo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:26:09 by skudo             #+#    #+#             */
/*   Updated: 2022/10/29 14:40:11 by skudo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int num, unsigned long long len)
{
	unsigned char	*ptr;

	ptr = dst;
	while (len-- > 0)
		*ptr++ = (unsigned char)num;
	return (dst);
}
