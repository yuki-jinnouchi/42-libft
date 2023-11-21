/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjinnouc <yjinnouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 01:28:36 by yjinnouc          #+#    #+#             */
/*   Updated: 2023/11/21 00:41:53 by yjinnouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// int strncmp(const char *s1, const char *s2, size_t n);
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (*(unsigned char *) &s1[i] - *(unsigned char *) &s2[i]);
		}
	}
	return (0);
}

/*
#include <stdio.h> //for printf
#include <unistd.h> //for write
#include <stdlib.h> //for atoi

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char *argv[]){

    if (argc == 4){
        printf("%i\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));

    }else if (argc < 2){ //run test cases
        char s1[6] = "HELLO";
        char s2[5] = "HELL";
        char s3[1] = "";

        printf("test str s1:%s\n", s1);
        printf("test str s2:%s\n", s2);
        printf("test str s3:%s(null)\n", s3);
        printf("\n");

        printf("s1,s2,4:%i\n", ft_strncmp(s1, s2, 4));
        printf("s1,s2,5:%i\n", ft_strncmp(s1, s2, 5));
        printf("s1,s3,3:%i\n", ft_strncmp(s1, s3, 3));
        
    }else if (argc < 4){
        printf("%s\n", "too less args!");
    }else if (argc > 4){
        printf("%s\n", "too many args!");
    }
    return (0);
};
*/
