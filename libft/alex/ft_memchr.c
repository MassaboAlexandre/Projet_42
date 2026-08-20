/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 20:40:31 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 20:40:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
    size_t i;
    unsigned char *pointerBlock;

    pointerBlock = (void *)memoryBlock;
    i = 0;
    while (i < size)
    {
        if (pointerBlock[i] == searchedChar)
            return((char *) &pointerBlock[i]);
        i++;
    }
    return(void *)0;
}
#include <string.h>
#include <stdio.h>

int main(void)
{
    int searchedChar = '5';
    size_t size = 10;
    // char 
    printf("char\n");
    char cblock[] = "zeerer5zderz5r";
    printf("version maison   : %p\n", ft_memchr(cblock, searchedChar, size));
    printf("version officiel : %p\n", memchr(cblock, searchedChar, size));

    printf("int\n");
    size_t isize = 4 * 3;
    int isearchedChar = 5;
    int iblock[] = {22, 5, 43, 54};
    printf("version maison   : %p\n", ft_memchr(iblock, isearchedChar, isize));
    printf("version officiel : %p\n", memchr(iblock, isearchedChar, isize));

    return(0);
}