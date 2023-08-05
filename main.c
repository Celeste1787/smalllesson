/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:18:47 by akdovlet          #+#    #+#             */
/*   Updated: 2023/08/05 17:20:14 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_cool(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main()
{
	char	str[] = "cool and really cool";

	ft_putstr(str);

	ft_cool(str);
	
	ft_putstr(str);
}
