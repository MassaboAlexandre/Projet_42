/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 09:53:20 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/28 09:53:20 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sum;
	int		rslt;

	rslt = 0;
	sum = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sum *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = rslt * 10;
		rslt = rslt + (str[i] - '0');
		i++;
	}
	return (sum * rslt);
}
// int main(void)
// {
// 	char *str = "      +134599";
// 	int i = ft_atoi(str);
// 	printf("%d\n", i);
// }