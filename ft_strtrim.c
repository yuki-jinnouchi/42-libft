/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:08:30 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/11/27 16:18:29 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*ptr;
	unsigned int	s1_length;
	unsigned int	start_count;
	unsigned int	end_count;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start_count = 0;
	s1_length = ft_strlen(s1);
	while (ft_strchr(set, s1[start_count] != 0 && start_count < s1_length - 1))
		start_count++;
	end_count = s1_length - 1;
	while (ft_strchr(set, s1[end_count] != 0 && start_count < end_count))
		end_count--;
	ptr = ft_substr(s1, start_count, end_count - start_count);
	return (ptr);
}
