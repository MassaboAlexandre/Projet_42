/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 18:36:29 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/25 18:36:29 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return(c);
}
// int main(void)
// {
//     char c = 'H';
//     char d = 'G';
//     c = ft_tolower(c);
//     d = tolower(d);
//     printf("%c\n", c);
//     printf("%c\n", d);
// }