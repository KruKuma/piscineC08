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
#include "ft_stock_str.h"

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

void    ft_free_tab(struct s_stock_str *tab, int index)
{
    int    i;

    i = 0;
    while (i < index)
    {
        free(tab[i].copy);
        i++;
    }
    free(tab);
}

int	ft_fill_tab(struct s_stock_str *tab, int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
		{
			ft_free_tab(tab, i);
			return (0);
		}
		i++;
	}
	tab[i].str = 0;
	return (1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;

	if (ac < 0)
		return (0);
	tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	if (!ft_fill_tab(tab, ac, av))
		return (0);
	return (tab);
}
