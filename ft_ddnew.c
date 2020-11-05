/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ddnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsandsla <jsandsla@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:52:53 by jsandsla          #+#    #+#             */
/*   Updated: 2020/11/05 15:25:39 by jsandsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_err			ft_ddnew(t_dd *dd, t_d **ppd)
{
	t_err	error;

	error = ft_ddnewinitex(dd, ppd, 0, 0, 0);
	return (error);
}

t_err			ft_ddnewinit(t_dd *dd, t_d **ppd, t_byte *mem, size_t len)
{
	t_err	error;

	error = ft_ddnewinitex(dd, ppd, mem, len, 0);
	return (error);
}

t_err			ft_ddnewinitex(t_dd *dd, t_d **ppd, t_byte *mem, size_t len,
	size_t reserve_len)
{
	t_err	error;
	t_d		*d;

	error = ft_daappend(dd->da, 0, 1);
	if (error == E_OK)
	{
		d = (t_d *)ft_da(dd->da, dd->da->a.len - 1);
		error = ft_dinitex(d, mem, len, reserve_len);
		if (error == E_OK)
			*ppd = d;
		else
			ft_daremove(dd->da, dd->da->a.len - 1);
		dd->len = dd->da->a.len;
		dd->ptr = dd->da->a.ptr;
	}
	return (error);
}
