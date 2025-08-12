/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:45:01 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/12 16:02:37 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = i + 1;
	size = size -1;
	while (i < size)
	{
		if (tab[i] > tab[j])
		{
			tmp = tab[i];
			tab[i] = tab[j];
			tab[j] = tmp;
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
	}
}

/*int	main(void)
{
	int	size;
	int	arr [] = {6, 2, 7, 4, 5, 1};

	size = 6;
	ft_sort_int_tab(arr, size);
}*/
