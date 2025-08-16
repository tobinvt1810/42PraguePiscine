/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:52:54 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/15 10:27:32 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a function that returns 1 if the given string contains only alphabetical
characters and 0 if it contains any other character.

• Here is how it should be prototyped:

int ft_str_is_alpha(char *str);
• It should return 1 if str is empty.
*/
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
// 	char str[] = "sfadf fafa";
// 	int stat;
// 	stat = ft_str_is_alpha(str);
// 	printf("\nValue of stat : %d", stat);
// }
