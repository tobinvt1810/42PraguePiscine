/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:55:48 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/15 10:26:27 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproduce the behavior of the function strncpy (man strncpy).
• Here is how it should be prototyped:
char *ft_strncpy(char *dest, char *src, unsigned int n);
*/

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	printf("\nValue of dest : %s", dest);
	return (dest);
}

// int	main(void)
// {
// 	char d_str[] = "123456789";
// 	char s_str[100] = "abcdefgh";
// 	int c = 3;

// 	printf("Value of d_string before calling the function: %s", d_str);
// 	ft_strncpy(d_str, s_str, c);
// 	printf("\nValue of d_string after calling the function: %s", d_str);
// }
