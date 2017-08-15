/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 09:44:32 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/15 10:01:07 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		countword(char *str)
{
	int		mots;
	int		k;

	mots = 0;
	k = 0;
	if (str == NULL)
		return (0);
	while (str[k])
	{
		while ((str[k] >= 8 && str[k] <= 13) || str[k] == ' ')
			k++;
		if (str[k] < 127 && str[k] > 32)
			mots++;
		while (str[k] < 127 && str[k] > 32)
			k++;
	}
	return (mots);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*(str++))
		n++;
	return (n);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	int					k;
	char				*cpy;

	cpy = dest;
	i = 0;
	k = ft_strlen(src);
	while (i < n)
	{
		if (i < k)
			*(dest++) = *(src++);
		else
			*(dest++) = '\0';
		i++;
	}
	return (cpy);
}

char	**ft_split_whitespaces(char *str)
{
	int		count;
	char	**array;
	int		k;
	int		l;

	count = countword(str);
	if ((array = malloc(count * sizeof(char*))) == NULL || count == 0)
		return (NULL);
	l = 0;
	k = 0;
	while (l < count)
	{
		while ((*str >= 8 && *str <= 13) || *str == ' ')
			str++;
		while (*str < 127 && *str > 32 && str++)
			k++;
		if ((array[l] = malloc(sizeof(char) * (k))) == NULL)
			return (NULL);
		ft_strncpy(array[l], (str - k), (k));
		l++;
		k = 0;
	}
	array[l] = 0;
	return (array);
}
