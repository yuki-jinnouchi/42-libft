/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:04:11 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/08/29 16:06:29 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
	if (c < '0' || '9' < c)
	{
		return (0);
	}
	return (1);
	}

/*
#include <stdio.h>
#include <unistd.h>

int ft_isalnum(char *str);

int main(void){
    char str_a[] = "12345";
    char str_b[] = "I2345";
    char str_null[] = "";
    int ans_a;
    int ans_b;
    int ans_null;

    write(1, str_a, 5); printf("\n");
    write(1, str_b, 5); printf("\n");
    write(1, str_null, 1); printf("\n");

    ans_a = ft_isalnum(str_a);
    ans_b = ft_isalnum(str_b);
    ans_null = ft_isalnum(str_null);

    printf("%d\n", ans_a);
    printf("%d\n", ans_b);   
    printf("%d\n", ans_null);

    return (0);
};
*/