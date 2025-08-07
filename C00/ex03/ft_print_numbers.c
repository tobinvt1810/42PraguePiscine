/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:00:17 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/07 15:21:46 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	dig_ch;
	int		dig;

	dig = 0;
	while (dig <= 9)
	{
		dig_ch = dig + '0';
		write(1, &dig_ch, 1);
		dig++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
