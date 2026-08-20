/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 21:04:55 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 21:04:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *pointera, const void *pointerb, size_t size)
{
    size_t  i;
    unsigned char   *pointer1;
    unsigned char   *pointer2;

    pointer1 = (void *)pointera;
    pointer2 = (void *)pointerb;
    i = 0;
    while(i < size)
    {
        if(pointer1[i] != pointer2[i])
            return (pointer1[i] - pointer2[i]);
        i++;
    }
    return(pointer1[i] - pointer2[i]);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    // char
    printf("char\n");
    char *cpointera = "eyatrzgrzrgyy";
    char *cpointerb = "eybtrzgrzrgyy";
    size_t csize = 4;
    printf("version maison   : %d\n", ft_memcmp(cpointera, cpointerb, csize));
    printf("version officiel : %d\n", memcmp(cpointera, cpointerb, csize));

    // int
    printf("char\n");
    int ipointera[] = {22, 33, 44, 55};
    int ipointerb[] = {22, 43, 44, 55};
    size_t isize = 4 * 3;
    printf("version maison   : %d\n", ft_memcmp(ipointera, ipointerb, isize));
    printf("version officiel : %d\n", memcmp(ipointera, ipointerb, isize));

    return (0);
}