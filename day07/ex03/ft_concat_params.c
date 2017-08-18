/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:30:02 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/17 09:24:14 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		k;
	char	*cpy;

	i = 0;
	k = ft_strlen(src);
	cpy = dest;
	while (i < k)
	{
		*(dest++) = *(src++);
		i++;
	}
	*dest = '\0';
	return (cpy);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		sum;
	int		i;
	char	*str;
	char	*cpy;

	i = 1;
	sum = 0;
	if (argc == 1)
		return ("\0");
	while (i < argc)
		sum += ft_strlen(argv[i++]);
	if ((str = (char*)malloc(sizeof(char) * (sum))) == NULL)
		return (NULL);
	cpy = str;
	i = 1;
	while (i < argc)
	{
		if (i != 1)
			*(str++) = '\n';
		ft_strcat(str, argv[i++]);
		while (*str != '\0')
			str++;
	}
	*str = '\0';
	return (cpy);
}
