/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:08:14 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/11/28 00:06:05 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ptr;
	unsigned int	len_s1;
	unsigned int	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = (char *) malloc((len_s1 + len_s2) * sizeof(char));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1, len_s1);
	ft_memcpy(ptr + len_s1, s2, len_s2);
	return (ptr);
}
