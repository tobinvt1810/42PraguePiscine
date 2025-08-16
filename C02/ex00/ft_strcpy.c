/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:45:09 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/15 10:24:07 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproduce the behavior of the function strcpy (man strcpy).
• Here is how it should be prototyped:
char *ft_strcpy(char *dest, char *src);
*/
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("\nValue of dest : %s", dest);
	return (dest);
}

// int	main(void)
// {
// 	char d_str[] = "Hello how are you";
// 	char s_str[100] = "I am good";

// 	printf("Value of d_string before calling the function: %s", d_str);
// 	ft_strcpy(d_str, s_str);
// 	printf("\nValue of d_string after calling the function: %s", d_str);
// }
