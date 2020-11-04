/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dsappend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsandsla <jsandsla@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:44:14 by jsandsla          #+#    #+#             */
/*   Updated: 2020/11/04 13:56:24 by jsandsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_err			ft_dsappend(t_ds *ds, char *mem, size_t n)
{
	t_err	error;

	error = ft_dappendc(ds->d, (t_byte *)mem, 0, n);
	if (error)
	{
		ds->ptr = (char *)ds->d->ptr;
		ds->len = ds->d->len;
		ds->ptr[ds->len] = '\0';
	}
	return (error);
}
