/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:08:20 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 16:08:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int  c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int c = 'H';
    printf("version maison : %d\n", ft_toupper(c));
    printf("version officiel : %d\n", toupper(c));
    return (0);
}