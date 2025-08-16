/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:44:18 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/15 10:32:54 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	• Create a function that converts every letter to lowercase.
	• Here is how it should be prototyped:
		char *ft_strlowcase(char *str);
	• It should return str.
*/

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			str[i] = str[i];
			i++;
		}
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "abcDEFghijk";
// 	printf("\nConverted to Lowercase : %s", ft_strlowcase(str));
// }
