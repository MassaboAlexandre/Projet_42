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

int trim_detect(char const c1, char const *set)
{
    int j;
    int detect;

    j = 0;
    detect = 0;
    while(set[j])
    {
        if (c1 == set[j])
                detect++;
        j++;
    }
    return (detect);
}

char    *trim_malloc(char const *s1, char const *set)
{
    int i;
    int detect;
    char    *res;

    i = 0;
    detect = 0;
    while(s1[i])
    {
        if (0 == trim_detect(s1[i], set))
            detect += 1;
        i++;
    }
    res = malloc(sizeof(char) * detect + 1);
    return (res);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int k;
    char    *res;

    i = 0;
    k = 0;
    if (s1 == NULL)
        return (void *)0;
    res = trim_malloc (s1, set);
    while(s1[i])
    {
        if (0 == trim_detect(s1[i], set))
        {
            res[k] = s1[i];
                k++;
        }
        i++;
    }
    res[k] = '\0';
    return(res);
}

#include <stdio.h>

int main(void)
{
    char s1[] = "12345666667";
    char set[] = "";
    printf("s1 = %s set = %s\n", s1, set);
    printf("%s\n", ft_strtrim(s1, set));
    return (0);
}
