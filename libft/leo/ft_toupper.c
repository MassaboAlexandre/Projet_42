/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 18:21:33 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/25 18:21:33 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
// int main(void)
// {
//     char c = 'h';
//     char d = 'g';
//     c = ft_toupper(c);
//     d = toupper(d);
//     printf("%c\n", c);
//     printf("%c\n", d);
// }