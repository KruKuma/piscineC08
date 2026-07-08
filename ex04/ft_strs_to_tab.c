/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 16:08:35 by nfurst            #+#    #+#             */
/*   Updated: 2026/07/08 16:08:38 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int    ft_strlen(char *str)
{
    int	i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *dest;
    int        i;

    dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (!dest)
        return (0);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
