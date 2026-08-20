/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 22:31:01 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 22:31:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc(size_t elementcount, size_t elementsize)
{
    size_t i;
    unsigned char *pointer;

    i = 0;
    pointer = malloc(elementsize * elementcount);
    if (pointer == NULL)
        return ((void *)0);
    while(i <= elementcount)
    {
        pointer[i] = '\0';
        i++;
    }
    return((void *) &pointer[0]);
}

#include <stdio.h>

int main(void)
{
    size_t i = 0;
    size_t elementcount = 5;
    size_t elementsize = 1;

    char    *cmp;
    cmp = (char *)ft_calloc(elementcount, elementsize);
    char    *cop;
    cop = (char *)calloc(elementcount, elementsize);
    printf("version maison   : ");
    while (i < elementcount)
    {
        cmp[i] = i + '0';
        printf("%c", cmp[i]);
        i++;
    }
    printf("'\\%d';\n", cmp[i]);
    i = 0;

    printf("version officiel : ");
    while (i < elementcount)
    {
        cop[i] = i + '0';
        printf("%c", cop[i]);
        i++;
    }
    printf("'\\%d';\n", cop[i]);

    return (0);
}