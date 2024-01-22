/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:17:25 by ftome-ve          #+#    #+#             */
/*   Updated: 2023/12/20 19:50:51 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;
	size_t	j;

	j = 0;
	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && len >= needle_len)
	{
		while (j < needle_len && haystack[i + j] == needle[j])
			j++;
		if (j == needle_len)
			return ((char *)(haystack + i));
		i++;
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s1[] = "Hola que tal estas";
	char	s2[] = "que";
	size_t	len;
	
	len = 7;
	printf("%s\n", ft_strnstr(s1, s2, len));
	printf("%s\n", strnstr(s1, s2, len));
	return (0);
}*/