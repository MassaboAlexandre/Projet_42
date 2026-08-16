/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 19:45:16 by marvin            #+#    #+#             */
/*   Updated: 2026/08/16 19:45:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    ft_bzero(void   *s, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        s[i] = 0;
        i++;
    }
}

#include <strings.h>
#include <stdio.h>

int main(void)
{
    int i = 0;
    int istr[] = {10, 20, 30, 40, 50};
    int istr2[] = {10, 20, 30, 40, 50};
    int size_istr = 5;
    char    cstr[] = "abcdefg";
    char    cstr2[] = "abcdefg";
    size_t  n = 3;
    // version int;
    printf("Version sans modif int :\n");
    while(i < size_istr)
    {
        printf("pour i = %d, istr = %d ; ", i, istr[i]);
        i++;
    }
    i = 0;
    printf("\nVersion maison int :\n");
    ft_bzero(istr, n);
    while(i < size_istr)
    {
        printf("pour i = %d, istr = %d ; ", i, istr[i]);
        i++;
    }
    i = 0;

    printf("\nVersion officiel int :\n");
    bzero(istr2, n);
     while(i < size_istr)
    {
        printf("pour i = %d, istr2 = %d ; ", i, istr2[i]);
        i++;
    }
    i = 0;

    // version char;
    printf("\nVersion sans modif char :\n");
    printf("%s\n", cstr);
    printf("Version maison char:\n");
    ft_bzero( cstr, n);
    printf("%s\n", cstr);
    printf("Version offciel char:\n");
    bzero( cstr2, n);
    printf("%s\n", cstr2);
    return (0);
}