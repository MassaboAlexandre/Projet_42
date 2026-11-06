/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 23:19:12 by marvin            #+#    #+#             */
/*   Updated: 2026/08/14 23:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
    if (!(c >= 32 && c <= 126))
            return(0);
    
    return (1);
}
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int    c = '@';
    printf("version maison : %d\n", ft_isprint(c));
    printf("version officiel : %d\n", isprint(c));
    return (0);
}