/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:37:02 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/15 10:33:52 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
		dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char d_str[100] = "akfjha";
// 	char s_str[] = "abcdefghsd";
// 	int c = 0;
// 	int str_len;
// 	printf("Value of d_string before calling the function: %s", d_str);
// 	str_len = ft_strlcpy(d_str, s_str, c);
// 	printf("\nValue of d_string after calling the function: %s", d_str);
// 	printf("\nValue of i after calling the function: %d", str_len);
// }
