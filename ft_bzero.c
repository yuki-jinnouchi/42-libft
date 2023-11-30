/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:59:23 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/11/24 16:06:15 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp_s;

	tmp_s = s;
	while (n > 0)
	{
		*tmp_s++ = 0;
		n--;
	}
	return ;
}
