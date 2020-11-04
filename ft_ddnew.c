/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ddnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsandsla <jsandsla@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:52:53 by jsandsla          #+#    #+#             */
/*   Updated: 2020/11/04 23:22:01 by jsandsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_err			ft_ddnew(t_dd *dd, t_d **ppd)
{
	t_err	error;

	error = ft_ddnewinitex(dd, ppd, 0, 0, 0);
	return (error);
}