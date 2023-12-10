/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:28:25 by ftome-ve          #+#    #+#             */
/*   Updated: 2023/12/10 17:39:03 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize < strlen(dst))
	return (dstsize + strlen(src));
	while (dst[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && i < dstsize -1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (i);
}




int main(void) 
{
    char destino[6] = "Hola, ";
    const char *fuente = "mundo que pasa con tu royo"; 
    
    size_t longitud_total = ft_strlcat(destino, fuente, sizeof(destino));

    printf("Cadena resultante: %s\n", destino);
    printf("Longitud total: %zu\n", longitud_total);

    return 0;
}