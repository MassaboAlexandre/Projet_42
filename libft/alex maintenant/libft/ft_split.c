/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:51:53 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/05 17:41:14 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len);
size_t  ft_strlen(const char *s);

static int cw(const char *s1, char c, int len)
{
    int i;
    int detect;

    i = 0;
    detect = 0;
    while (i < len && s1[i] != '\0')
    {
        while (i < len && s1[i] == c)
            i++;
        if (i < len && s1[i] != '\0')
        {
            detect++;
            while (i < len && s1[i] != c && s1[i] != '\0')
                i++;
        }
    }
    return (detect);
}

static int selectW(const char *s1, char c, int len, int select)
{
    int i;
    int detect;

    i = 0;
    detect = 0;
    while (i < len)
    {
        while (i < len && s1[i] == c)
            i++;
        if (i < len)
        {
            if (detect == select)
                return (i);
            detect++;
            while (i < len && s1[i] != c)
                i++;
        }
    }
    return (i);
}

static int lenwd(const char *s, char c, int start)
{
    int i;

    i = 0;
    while (s[start] != c && s[start] != '\0')  
    {
        i++;
        start++;
    }
    return (i);
}

static void    freetab(char **bigtab, int i)
{
    while (i > 0)
            {
                i--;                               
                free(bigtab[i]);
            }
            free(bigtab);  
}

char **ft_split(char const *s, char c)
{
    int     i;
    int     cws;
    char    **bigtab;

    i = 0;
    if (s == NULL)
        return (NULL);
    cws = cw(s, c, ft_strlen(s));
    bigtab = malloc(sizeof(char *) * (cws + 1));   
    if (bigtab == NULL)
        return (NULL);
    while (i < cws)                                
    {
        bigtab[i] = ft_substr(s, selectW(s, c, ft_strlen(s), i),
                lenwd(s, c, selectW(s, c, ft_strlen(s), i)));
        if (bigtab[i] == NULL)
        {
            freetab(bigtab, i);
            return (NULL);
        }
        i++;
    }
    bigtab[cws] = NULL;
    return (bigtab);
}

// int main(void)
// {
//     int         cws;
//     char const  s[] = "hhhh";
//     char        c = '\0';
//     char        **tab;
//     int         i;
//     int         len = ft_strlen(s);              
//     i = 0;
//     printf("s = %s \n c = %c\n ", s, c);
//     tab = ft_split(s, c);
//     if (!tab)
//         return (1);
//     cws = cw(s, c, len);
//     printf("cw = %d \n", cws);
//     printf("strlen %d\n", len);
//     while (tab[i])                                
//     {
//         printf("%d mots : %s \n", i, tab[i]);
//         free(tab[i]);
//         i++;
//     }
//     free(tab);
//     return (0);
// }