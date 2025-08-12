/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:28:44 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/12 15:53:02 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b ;
}

/*int	main(void)
{
	int	i;
	int	j;
	int	d;
	int	m;

	i = 15;
	j = 3;
	ft_div_mod(i, j, &d, &m);
}*/
