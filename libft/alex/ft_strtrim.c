/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 01:45:02 by marvin            #+#    #+#             */
/*   Updated: 2026/08/21 01:45:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    int detect;
    char    *res;

    i = 0;
    j = 0;
    k = 0;
    detect = 0;
    while(s1[i])
        i++;
    res = malloc(sizeof(char) * i + 1);
    if (res == NULL)
        return (NULL);
    i = 0;
    while(s1[i])
    {
        while(set[j])
        {
            if (s1[i] == set[j])
                detect++;
            j++;
        }
        j = 0;
        if (detect == 0)
        {
            res[k] = s1[i];
            k++;
        }
        detect = 0;
        i++;
    }
    return(res);
}

#include <stdio.h>

int main(void)
{
    char s1[] = "abcdefgh";
    char set[] = "bdfh";
    printf("s1 = %s set = %s\n", s1, set);
    printf("%s\n", ft_strtrim(s1, set));
    return (0);
}