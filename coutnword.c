/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coutnword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:18:02 by akdovlet          #+#    #+#             */
/*   Updated: 2023/08/19 18:25:53 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

//"     Hey salut ca va?? ?? daf " " ?d"

int	ft_countword(char *str, char *charset)
{
	int	i;
	int	wordcount;

	i = 0;
	wordcount = 0;
	while (str[i])
	{
		if (str[i] && !ft_char_check(str[i], charset))
		{
			wordcount++;
			i++;
			while (str[i] && !ft_char_check(str[i], charset))
				i++;
		}
		else
			i++;
	}
	return (wordcount);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_countword(argv[1], argv[2]));
}
