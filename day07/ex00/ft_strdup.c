/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 16:22:40 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/10 16:41:51 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *src)
{
	char *dest = malloc(sizeof(ft_strlen);
	char *cpy;

	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (dest);
}

void	main()
{
	printf("%s", ft_strcpy("test"));
}
