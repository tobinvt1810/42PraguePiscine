/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:14:55 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/15 10:32:39 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
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
// 	printf("\nConverted to Uppercase : %s", ft_strupcase(str));
// }
