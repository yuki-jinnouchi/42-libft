/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:30:41 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/11/17 18:30:42 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int isdigit(int c)
{
    if (c < '0' || '9' < c)
    {
        return (0);
    }
	return (1);
}
