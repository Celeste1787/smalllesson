/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arugmentdumain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:22:38 by akdovlet          #+#    #+#             */
/*   Updated: 2023/08/06 13:48:18 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		rush(atoi(argv[1]), atoi(argv[2]));
	}
}
