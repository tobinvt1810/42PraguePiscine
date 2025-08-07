/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trial.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tothomas <tothomas@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:04:02 by tothomas          #+#    #+#             */
/*   Updated: 2025/08/07 17:01:49 by tothomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void){

int num1, num2;
/*ASCII code for 0*/
num1 = 48;

while (num1 < 58)
{
	num2=48;
	while (num2 < 58)
	{
		putchar(num1);
		putchar(num2);
		num2++;
		putchar(',');
		putchar(' ');
	}
	
	num1++;
}
putchar('\n');
return (0);

}