/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:19:37 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/12 15:55:01 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	j;

	i = *a;
	j = *b;
	*a = i / j;
	*b = i % j;
}

/*int	main(void)
{
	int	d;
	int	m;

	d = 15;
	m = 3;
	ft_ultimate_div_mod(&d, &m);
}*/
