/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:31:49 by marvin            #+#    #+#             */
/*   Updated: 2026/08/21 14:31:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_sign(int n)
{
    if(n < 0)
        return (1);
    return (0);
}

char    *ft_inverse_cpy(int i, int n, char *res)
{
    while (0 <= i)
    {
        res[i] = (n % 10) + '0';
        n = n / 10;
        i--;
    }
    return (res);
}

int ft_leni(int i)
{
    int len;

    len = 0;
    while (0 < i)
    {
        i = i / 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    int len;
    int i;
    int sign;
    char    *res;

    sign = ft_sign(n);
    if (sign == 1)
        n *= - 1;
    i = n;
    len = ft_leni(i);
    if (sign == 1)
        len++;
    res = malloc(sizeof(char) * len);
    if (res == NULL)
        return (NULL);
    res[len] = '\0';
    i = len - 1;
    res = ft_inverse_cpy(i, n, res);
    if (sign != 0)
        res[0] = '-';
    return (res);
}

#include <stdio.h>

int main(void)
{
    int n = -1234;
    printf("int  : %d\n", n);
    printf("itoa : %s\n", ft_itoa(n));
}