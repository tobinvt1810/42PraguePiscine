/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:48:06 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/15 10:33:31 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_string(char str)
{
	if ((str >= 'a' && str <= 'z')
		|| (str >= 'A' && str <= 'Z')
		|| (str >= '0' && str <= '9'))
	{
		return (1);
	}
	else
		return (0);
}

char	to_lowcase(char *str)
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
}

char	to_caps(char str, char pre_str, char next_str)
{
	if (is_string(str))
	{
		if ((str >= 'a' && str <= 'z') && pre_str == ' ')
		{
			str = str - 32;
		}
		else if ((is_string(pre_str) == 0)
			&& (is_string(str) == 1)
			&& pre_str != ' ')
		{
			str = str - 32;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = to_caps(str[i], str[i - 1], str[i + 1]);
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "Hi, hoW are you? 42wOrds fOrty~two; fifty+and+one";
// 	printf("\nOriginal String : %s", str);
// 	to_lowcase(str);
// 	printf("\nConverted to Uppercase : %s", ft_strcapitalize(str));
// }
