/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:08:39 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/11/28 00:04:44 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = (char *) malloc(len * sizeof(char));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, (const void *)(s + start), len);
	return (ptr);
}
