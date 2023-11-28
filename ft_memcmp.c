/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:02:35 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/11/24 16:17:49 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *) s1;
	tmp_s2 = (unsigned char *) s2;
	while ((*tmp_s1 != 0 || *tmp_s2 != 0) && n > 0)
	{
		if (tmp_s1 == tmp_s2)
		{
			tmp_s1++;
			tmp_s2++;
			n--;
		}
		else
		{
			return (*tmp_s1 - *tmp_s1);
		}
	}
	return (0);
}
