/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:07:43 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:12:26 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strspn(char *set, char u)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == u)
            return (1);
        i++;
    }
    return (0);
}