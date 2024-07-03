/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:08:39 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/11/30 19:28:26 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Parameters s: The string from which to create the substring.
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring.
Return value The substring.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (len + start > s_len)
	{
		if (s_len >= start)
			len = s_len - start;
		else
			len = 0;
	}
	ptr = (char *) malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	if (len == 0)
		ft_strlcpy(ptr, "", 1);
	else 
		ft_strlcpy(ptr, (s + start), len + 1);
	return (ptr);
}
