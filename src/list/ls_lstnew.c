/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:23:40 by aguerin           #+#    #+#             */
/*   Updated: 2017/05/05 17:35:58 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include "libft.h"
#include <stdlib.h>

/*
** ls_lstnew() alloue la mémoire et initialise la structure pour la liste de ls.
*/

t_elem	*ls_lstnew(char *name, char *path, struct stat stat)
{
	t_elem	*element;

	if ((element = (t_elem*)malloc(sizeof(t_elem) + (sizeof(char*) * 2))))
	{
		if ((element->name = (name ? ft_strnew(ft_strlen(name)) : NULL)))
			element->name = ft_strcpy(element->name, name);
		if ((element->path = (path ? ft_strnew(ft_strlen(path)) : NULL)))
			element->path = ft_strcpy(element->path, path);
		element->stat = stat;
		element->next = NULL;
	}
	return (element);
}