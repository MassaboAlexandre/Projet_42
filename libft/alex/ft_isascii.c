/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ascii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 23:17:08 by marvin            #+#    #+#             */
/*   Updated: 2026/08/14 23:17:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_ascii(int c)
{
    if (!(c >= 0 && c < 127))
            return(0);
    else
        return (1);
}
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int   c = '~';
    printf("version maison : %d\n", is_ascii(c));
    printf("version officiel : %d\n", isascii(c));
    return (0);
}