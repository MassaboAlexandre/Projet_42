/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 19:18:22 by marvin            #+#    #+#             */
/*   Updated: 2026/08/16 19:18:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int i;
    int nb;
    int sign;

    i = 0;
    nb = 0;
    sign = 0;
    while (str[i] == ' '|| (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        sign = 1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb *= 10;
        nb += str[i] - '0';
        i++;
    }
    if(sign > 0)
        return (-nb);
    else
        return (nb);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("version maison: %d\n", ft_atoi("  -123456"));
    printf("version officiel : %d\n", atoi("  -123456"));
    return 0;
}