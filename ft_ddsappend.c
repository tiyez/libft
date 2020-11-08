/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ddsappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsandsla <jsandsla@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:08:41 by jsandsla          #+#    #+#             */
/*   Updated: 2020/11/08 20:09:20 by jsandsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_err			ft_ddsappend(t_dds *dds, const char *str, size_t n)
{
	t_d		*d;
	t_s		s;
	size_t	res;
	t_err	error;

	error = E_OK;
	if (!dds->dd->len)
		error = ft_ddnewinitex(dds->dd, &d, 0, dds->rate - 1, 1);
	if (error == E_OK)
	{
		d = &dds->dd->ptr[dds->dd->len - 1];
		ft_sinitd(&s, d);
	}
	while (error == E_OK && (res = ft_sappendn(&s, str, n)) && res < n &&
		str[res] != '\0')
	{
		str += res;
		n -= res;
		error = ft_ddnewinitex(dds->dd, &d, 0,
			(d->max_len + 1) * 2 - 1, 1);
		if (error == E_OK)
			ft_sinitd(&s, d);
	}
	return (error);
}

t_err			ft_ddsappendstr(t_dds *dds, const char *str)
{
	t_err	error;

	error = ft_ddsappend(dds, str, ft_strlen(str));
	return (error);
}

t_err			ft_ddsappendc(t_dds *dds, char c)
{
	t_err	error;
	char	arr[2];

	arr[0] = c;
	arr[1] = '\0';
	error = ft_ddsappend(dds, arr, 1);
	return (error);
}

t_err			ft_ddsappends(t_dds *dds, t_s *s)
{
	t_err	error;

	error = ft_ddsappend(dds, s->ptr, s->len);
	return (error);
}

t_err			ft_ddsappendvs(t_dds *dds, t_vs *vs)
{
	t_err	error;

	error = ft_ddsappend(dds, vs->ptr + vs->offset, vs->len - vs->offset);
	return (error);
}
