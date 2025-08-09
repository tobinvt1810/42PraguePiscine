/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:31:19 by dkondysi          #+#    #+#             */
/*   Updated: 2025/08/09 16:57:16 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// SOME INFO:

//These three files will be compiled together.
#include <stdio.h>
void	ft_putchar(char a);

void    rush(int x, int y)
{
	int row;
	int column;

	if (x > 0 && y > 0)
	{
		row = 1;
		column = 1;
		while (row <= y)
		{
			while (column <= x)
			{
				if(row == 1 || row == y)
				{
					if(column == 1 || column == x )
					{
						ft_putchar('o');
					}
					else 
					{
						ft_putchar('-');
					}
				}
				else if(column == 1 || column == x )
				{
					ft_putchar('|');
				}
				else
				{
					ft_putchar(' ');
				}
				column++;
			}
			ft_putchar('\n');
			row++;
			column = 1;
		}
	}
    
}

//Your function must never crash or enter an infinite loo

//