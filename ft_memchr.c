/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:02:23 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/11/24 16:14:56 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;

	tmp_s = (unsigned char *) s;
	while (n > 0)
	{
		if (*tmp_s != c)
		{
			tmp_s++;
			n--;
		}
		else
			return (tmp_s);
	}
	return (NULL);
}
