/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 02:58:55 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/08/31 19:25:38 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int atoi(const char *nptr);

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	m;

	i = 0;
	while (str[i] == ' ' )
		i++;
	n = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			n *= -1; 
		}
		i++;
	}
	m = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		m = (m * 10) + (str[i] - '0');
		i++;
	}
	n = n * m;
	return (n);
}

/*
#include <stdio.h> //for printf
// #include <unistd.h> //for write
#include <stdlib.h> //for atoi

int ft_atoi(char *str);

int main(int argc, char *argv[]){

    if (argc == 2){
        ft_atoi(argv[1]);

    }else if (argc < 2){ //run test cases
        char *str;
        str = "      ---+--+1234ab567";
        printf("%i\n", ft_atoi(str));
        
    }else if (argc < 2){
        printf("%s\n", "too less args!");
    }else if (argc > 2){
        printf("%s\n", "too many args!");
    }
    return (0);
};
*/
