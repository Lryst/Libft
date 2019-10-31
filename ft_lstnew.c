/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:24:06 by lryst             #+#    #+#             */
/*   Updated: 2019/10/28 17:30:17 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *newlst;

    newlst = (t_list *)malloc(sizeof(t_list));
    if (newlst == NULL || content == NULL)
        return (NULL);
    else
    {
        newlst->content = (t_list *)malloc(sizeof(content));
        if (newlst->content == NULL)
            return (NULL);
        ft_memcpy(newlst->content, content, sizeof(content));
    }
    newlst->next = NULL;
    return (newlst);
    
}