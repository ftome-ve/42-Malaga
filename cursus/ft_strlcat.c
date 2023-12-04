/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:28:25 by ftome-ve          #+#    #+#             */
/*   Updated: 2023/12/04 15:18:07 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
#include <stdio.h>

int main() 
{
    char destino[20] = "Hola, ";
    const char *fuente = "mundo mio que te parece"; 
    
    size_t longitud_total = strlcat(destino, fuente, sizeof(destino));

    printf("Cadena resultante: %s\n", destino);
    printf("Longitud total: %zu\n", longitud_total);

    return 0;
}