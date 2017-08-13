/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 08:31:40 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/12 11:21:19 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*(str++))
		n++;
	return (n);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int k;

	i = 0;
	k = ft_strlen(src);
	while ((unsigned)i < size)
	{
		if (i < k)
			*(dest++) = *(src++);
		else
			*(dest++) = '\0';
		i++;
	}
	*dest = '\0';
	return (ft_strlen(dest));
}
