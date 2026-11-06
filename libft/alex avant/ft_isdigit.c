/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 23:11:35 by marvin            #+#    #+#             */
/*   Updated: 2026/08/14 23:11:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_digit(int c)
{
    if (!(c >= '0' && c <= '9'))
            return(0);
    else
        return (1);
}
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int    c = '3';
    printf("version maison : %d\n", is_digit(c));
    printf("version officiel : %d\n", isdigit(c));
    return (0);
}