/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_alpha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 22:38:14 by marvin            #+#    #+#             */
/*   Updated: 2026/08/14 22:38:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char c)
{
  
    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
            return(0);
    else 
        return (1);
}
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char   c = 'b';
    printf("version maison : %d\n", ft_isalpha(c));
    printf("version officiel : %d\n", isalpha(c));
    return (0);
}