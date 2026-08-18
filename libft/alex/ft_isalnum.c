/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_alnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 23:13:26 by marvin            #+#    #+#             */
/*   Updated: 2026/08/14 23:13:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
        || (c >= '0' && c <= '9')))
            return(0);
    else
        return (1);
}

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int    c = '1';
    printf("version maison : %d\n", ft_isalnum(c));
    printf("version officiel : %d\n", isalnum(c));
    return (0);
}