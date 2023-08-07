/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lessonprintcomb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:38:39 by akdovlet          #+#    #+#             */
/*   Updated: 2023/08/06 16:26:34 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int	a;
	int b;
	int c;
	

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while ( c <= 9)
			{
				ft_putchar(a / 10 + 48);
				ft_putchar(b + 48);
				ft_putchar(c + 48);
				ft_putchar(',');
				ft_putchar(' ');
				c++;
			}
			b++;
		}
		a++;
	}
}
