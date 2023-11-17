/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:17:59 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/08/31 19:18:07 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

/*
#include <stdio.h> //for printf
// #include <unistd.h> //for write

int ft_strlen(char *str);

int main(int argc, char *argv[]){
    char *str;
    int n;

    if (argc == 2){
        n = ft_strlen(argv[1]);
        printf("%i\n", n);
        
    }else if (argc < 2){ //run test cases

        n = 0;
        printf("%d\n", n);

        str = "this is string";    
        n = ft_strlen(str);
        printf("String Length is %d\n", n);
        
    }else if (argc < 3){
        printf("%s\n", "too less args!");
    }else if (argc > 3){
        printf("%s\n", "too many args!");
    }
    return (0);
};
*/
