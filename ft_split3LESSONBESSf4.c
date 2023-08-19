/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdovlet <akdovlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:05:51 by akdovlet          #+#    #+#             */
/*   Updated: 2023/08/19 22:40:17 by akdovlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* 
// "     HEY SALUT COMMENT WHO ASKED      " 
dup = "HEY\0"
/
//splitter[1] = hey
//salut
/
/
/
/
/                " " */

int	ft_charset(char c, char *charset)
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

int	ft_charcount(char *str, char *charset, int index)
{
	int	count;

	count = 0;
	while (str[index] && !ft_charset(str[index], charset))
	{
		index++;
		count++;
	}
	return (count);
}

int	ft_countword(char *str, char *charset)
{
	int	i;
	int	countword;
	
	i = 0;
	countword = 0;
	while (str[i])
	{
		if (str[i] && !ft_charset(str[i], charset))
		{
			countword++;
			while (str[i] && !ft_charset(str[i], charset))
				i++;
		}
		else
			i++;
	}
	return (countword);
}

char	*ft_strndup(char *str, int index, int n)
{
	int		i;
	char 	*dup;
	
	i = 0;
	dup = malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	while (str[index] && i < n)
	{
		dup[i] = str[index + i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	char **splitter;
	int	wordcount;
	
	i = 0;
	j = 0;
	wordcount = ft_countword(str, charset);
	splitter = malloc(sizeof(char *) * (wordcount + 1));
	if (!splitter)
		return (NULL);
	while (str[i] && j < wordcount)
	{
		if (!ft_charset(str[i], charset))
		{
			splitter[j] = ft_strndup(str, i, ft_charcount(str, charset, i));
			while (str[i] && !ft_charset(str[i], charset))
				i++;
			j++;
		}
		else
			i++;
	}
	splitter[j] = NULL;
	return (splitter);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char	**strs;
		int		i;
	
		i = 0;
		strs = ft_split(argv[1], argv[2]);
		//printf("%d\n", ft_count_word(argv[1], argv[2])); 
		while (strs[i])
		{
			printf("%s\n", strs[i]);
			i++;
		}	
	}
}




