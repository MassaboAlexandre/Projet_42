/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:20:32 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/04 14:53:36 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void    *ft_calloc(size_t count, size_t size)
{
    size_t i; 
    unsigned char *tab;

    i = 0;
    if (count > SIZE_MAX / size)
        return (NULL);
    tab = malloc (sizeof(char) * count * size);
    if (tab == NULL)
	    return (NULL);
    while (i < count * size)
    {
        tab[i] = 0;
        i++;
    }
    return ((void *)tab);
}

// int main(void)
// {
//     char *maison;
//     char *officiel;
//     int i = 0;

//     maison = ft_calloc( 1, 1);
//     officiel = calloc( 1, 1);
//     // while (i < 20)
//     // {
//     //     maison[i] = 'b';
//     //     officiel[i] = 'b';
//     //     i++;
//     // }
//     printf("version maison   : %s\n", maison);
//     printf("version officiel : %s\n", officiel);
// }