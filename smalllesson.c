/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalllesson.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:13:03 by akdovlet          #+#    #+#             */
/*   Updated: 2023/08/05 17:21:38 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

char	*ft_cool(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		str[i] = 'x';
		i++;
	}
	return (str);
}


