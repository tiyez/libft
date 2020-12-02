/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsandsla <jsandsla@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:19:37 by jsandsla          #+#    #+#             */
/*   Updated: 2020/12/01 17:57:10 by jsandsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define M(l1,l2,r1,r2) l[l1][l2] * r[r1][r2]

void	ft_mul_m4_to(t_m4 l, t_m4 r, t_m4 out)
{
	#if 0
	out[0][0] = M(0,0,0,0) + M(1,0,0,1) + M(2,0,0,2) + M(3,0,0,3);
	out[0][1] = M(0,1,0,0) + M(1,1,0,1) + M(2,1,0,2) + M(3,1,0,3);
	out[0][2] = M(0,2,0,0) + M(1,2,0,1) + M(2,2,0,2) + M(3,2,0,3);
	out[0][3] = M(0,3,0,0) + M(1,3,0,1) + M(2,3,0,2) + M(3,3,0,3);
	out[1][0] = M(0,0,1,0) + M(1,0,1,1) + M(2,0,1,2) + M(3,0,1,3);
	out[1][1] = M(0,1,1,0) + M(1,1,1,1) + M(2,1,1,2) + M(3,1,1,3);
	out[1][2] = M(0,2,1,0) + M(1,2,1,1) + M(2,2,1,2) + M(3,2,1,3);
	out[1][3] = M(0,3,1,0) + M(1,3,1,1) + M(2,3,1,2) + M(3,3,1,3);
	out[2][0] = M(0,0,2,0) + M(1,0,2,1) + M(2,0,2,2) + M(3,0,2,3);
	out[2][1] = M(0,1,2,0) + M(1,1,2,1) + M(2,1,2,2) + M(3,1,2,3);
	out[2][2] = M(0,2,2,0) + M(1,2,2,1) + M(2,2,2,2) + M(3,2,2,3);
	out[2][3] = M(0,3,2,0) + M(1,3,2,1) + M(2,3,2,2) + M(3,3,2,3);
	out[3][0] = M(0,0,3,0) + M(1,0,3,1) + M(2,0,3,2) + M(3,0,3,3);
	out[3][1] = M(0,1,3,0) + M(1,1,3,1) + M(2,1,3,2) + M(3,1,3,3);
	out[3][2] = M(0,2,3,0) + M(1,2,3,1) + M(2,2,3,2) + M(3,2,3,3);
	out[3][3] = M(0,3,3,0) + M(1,3,3,1) + M(2,3,3,2) + M(3,3,3,3);
#endif

float a00 = (l)[0][0], a01 = (l)[0][1], a02 = (l)[0][2], a03 = (l)[0][3],\
        a10 = (l)[1][0], a11 = (l)[1][1], a12 = (l)[1][2], a13 = (l)[1][3],\
        a20 = (l)[2][0], a21 = (l)[2][1], a22 = (l)[2][2], a23 = (l)[2][3],\
        a30 = (l)[3][0], a31 = (l)[3][1], a32 = (l)[3][2], a33 = (l)[3][3],\
        b00 = (r)[0][0], b01 = (r)[0][1], b02 = (r)[0][2], b03 = (r)[0][3],\
        b10 = (r)[1][0], b11 = (r)[1][1], b12 = (r)[1][2], b13 = (r)[1][3],\
        b20 = (r)[2][0], b21 = (r)[2][1], b22 = (r)[2][2], b23 = (r)[2][3],\
        b30 = (r)[3][0], b31 = (r)[3][1], b32 = (r)[3][2], b33 = (r)[3][3];\
	(out)[0][0] = a00 * b00 + a10 * b01 + a20 * b02 + a30 * b03;\
	(out)[0][1] = a01 * b00 + a11 * b01 + a21 * b02 + a31 * b03;\
	(out)[0][2] = a02 * b00 + a12 * b01 + a22 * b02 + a32 * b03;\
	(out)[0][3] = a03 * b00 + a13 * b01 + a23 * b02 + a33 * b03;\
	(out)[1][0] = a00 * b10 + a10 * b11 + a20 * b12 + a30 * b13;\
	(out)[1][1] = a01 * b10 + a11 * b11 + a21 * b12 + a31 * b13;\
	(out)[1][2] = a02 * b10 + a12 * b11 + a22 * b12 + a32 * b13;\
	(out)[1][3] = a03 * b10 + a13 * b11 + a23 * b12 + a33 * b13;\
	(out)[2][0] = a00 * b20 + a10 * b21 + a20 * b22 + a30 * b23;\
	(out)[2][1] = a01 * b20 + a11 * b21 + a21 * b22 + a31 * b23;\
	(out)[2][2] = a02 * b20 + a12 * b21 + a22 * b22 + a32 * b23;\
	(out)[2][3] = a03 * b20 + a13 * b21 + a23 * b22 + a33 * b23;\
	(out)[3][0] = a00 * b30 + a10 * b31 + a20 * b32 + a30 * b33;\
	(out)[3][1] = a01 * b30 + a11 * b31 + a21 * b32 + a31 * b33;\
	(out)[3][2] = a02 * b30 + a12 * b31 + a22 * b32 + a32 * b33;\
	(out)[3][3] = a03 * b30 + a13 * b31 + a23 * b32 + a33 * b33;\




}

void	ft_mul_m4rot_to(t_m4 l, t_m3 r, t_m4 out)
{
	out[0][0] = M(0,0,0,0) + M(1,0,0,1) + M(2,0,0,2);
	out[0][1] = M(0,1,0,0) + M(1,1,0,1) + M(2,1,0,2);
	out[0][2] = M(0,2,0,0) + M(1,2,0,1) + M(2,2,0,2);
	out[0][3] = M(0,3,0,0) + M(1,3,0,1) + M(2,3,0,2);
	out[1][0] = M(0,0,1,0) + M(1,0,1,1) + M(2,0,1,2);
	out[1][1] = M(0,1,1,0) + M(1,1,1,1) + M(2,1,1,2);
	out[1][2] = M(0,2,1,0) + M(1,2,1,1) + M(2,2,1,2);
	out[1][3] = M(0,3,1,0) + M(1,3,1,1) + M(2,3,1,2);
	out[2][0] = M(0,0,2,0) + M(1,0,2,1) + M(2,0,2,2);
	out[2][1] = M(0,1,2,0) + M(1,1,2,1) + M(2,1,2,2);
	out[2][2] = M(0,2,2,0) + M(1,2,2,1) + M(2,2,2,2);
	out[2][3] = M(0,3,2,0) + M(1,3,2,1) + M(2,3,2,2);
	out[3][0] = l[3][0];
	out[3][1] = l[3][1];
	out[3][2] = l[3][2];
	out[3][3] = l[3][3];
}

#undef M
#define M(l1,l2,r1) l[l1][l2] * r[r1]

void	ft_mul_vm4_to(t_m4 l, t_v4 r, t_v4 out)
{
	out[0] = M(0,0,0) + M(1,0,1) + M(2,0,2) + M(3,0,3);
	out[1] = M(0,1,0) + M(1,1,1) + M(2,1,2) + M(3,1,3);
	out[2] = M(0,2,0) + M(1,2,1) + M(2,2,2) + M(3,2,3);
	out[3] = M(0,3,0) + M(1,3,1) + M(2,3,2) + M(3,3,3);
}

#undef M

float	ft_mul_v3m4(t_m4 l, t_v3 r, float f3, t_v3 out)
{
	t_v4	in4;
	t_v4	out4;

	in4[0] = r[0];
	in4[1] = r[1];
	in4[2] = r[2];
	in4[3] = f3;
	ft_mul_vm4_to(l, in4, out4);
	out[0] = out4[0];
	out[1] = out4[1];
	out[2] = out4[2];
	return (out4[3]);
}

void			ft_persp_mul_v3m4(t_m4 l, t_v3 r, float f3, t_v3 out)
{
	t_v4	in4;
	t_v4	out4;

	in4[0] = r[0];
	in4[1] = r[1];
	in4[2] = r[2];
	in4[3] = f3;
	ft_mul_vm4_to(l, in4, out4);
	out[0] = out4[0] / out4[3];
	out[1] = out4[1] / out4[3];
	out[2] = out4[2] / out4[3];
}
