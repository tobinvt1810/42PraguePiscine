/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:47:52 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/15 12:13:45 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	write_non_printable(char str)
{
	int	div;
	int	mod;
	int	value;

	value = str;
	if (value % 16 >= 10)
	{
		div = value / 16 + '0';
		mod = value % 16 - 10 + 'a';
	}
	else
	{
		div = value / 16 + '0';
		mod = value % 16 + '0';
	}
	write(1, "\\", 1);
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_string(str[i]) || (str[i] >= ' ' && str[i] <= '~'))
		{
			str[i] = str[i];
			write(1, &str[i], 1);
			i++;
		}
		else
		{
			write_non_printable(str[i]);
			i++;
		}
	}
}

// int	main(void)
// {
// 	char str[] = "abcDE\tfghi\nj~k";
// 	ft_putstr_non_printable(str);
// }
