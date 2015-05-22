/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_dot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:02:47 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:05:12 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmtx.h"

double	mtx_dot(t_mtx const lh, unsigned int const i,
		t_mtx const rh, unsigned int j)
{
	double			product;
	unsigned int	k;

	product = 0;
	k = 0;
	while (k < lh.col)
	{
		product += lh.mtx[i * lh.col + k] * rh.mtx[k * rh.col + j];
		++k;
	}
	return (product);
}
