/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:05:32 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/15 10:31:49 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ' && str[i] <= '~'))
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
// 	char str[] = "casjhcw @oifpwoef )(*7 ))/";
// 	int stat;
// 	stat = ft_str_is_printable(str);
// 	printf("\nValue of stat : %d", stat);
// }
