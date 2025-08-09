/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:31:24 by dkondysi          #+#    #+#             */
/*   Updated: 2025/08/09 19:25:48 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char a);
void	rush(int x, int y);

int	main(void)
{
	rush(1, 1);
	rush(2, 1);
	rush(1, 2);
	rush(2, 2);
	rush(10, 2);
	rush(2, 10);
	rush(5, 8);
	rush(5, 3);
	rush(5, 1);
	rush(1, 5);
	rush(4, 4);
	ft_putchar('-');
	return (0);
}
