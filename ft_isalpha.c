/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:58:25 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/08/29 16:03:48 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	if ((c < 'A' || 'Z' < c) && (c < 'a' || 'z' < c))
	{
		return (0);
	}
	return (1);
}

/*
#include <stdio.h>
#include <unistd.h>

int ft_isalpha(char *str);

int main(void){
    char str_a[] = "HELLO";
    char str_b[] = "HELL0";
    char str_null[] = "";
    int ans_a;
    int ans_b;
    int ans_null;

    write(1, str_a, 5); printf("\n");
    write(1, str_b, 5); printf("\n");
    write(1, str_null, 1); printf("\n");

    ans_a = ft_isalpha(str_a);
    ans_b = ft_isalpha(str_b);
    ans_null = ft_isalpha(str_null);

    printf("%d\n", ans_a);
    printf("%d\n", ans_b);   
    printf("%d\n", ans_null);

    return (0);
};
*/