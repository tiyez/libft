/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ddlink.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsandsla <jsandsla@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:07:41 by jsandsla          #+#    #+#             */
/*   Updated: 2020/11/04 14:32:53 by jsandsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_err			ft_ddlink(t_dd *dd, t_da *da)
{
	t_err	error;

	error = E_INVALID_DATA_STRUCTURE;
	if (da->sz == sizeof(t_d))
	{
		error = E_OK;
		dd->da = da;
		dd->len = da->len;
		dd->ptr = (t_d *)da->ptr;
	}
	return (error);
}