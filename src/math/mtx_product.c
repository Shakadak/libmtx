/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_product.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:03:01 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:03:03 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmtx.h"

t_mtx	mtx_product(t_mtx const lh, t_mtx const rh)
{
	t_mtx			product;
	unsigned int	i;
	unsigned int	j;

	product = mtx_new(lh.row, rh.col);
	i = 0;
	while (i < product.row)
	{
		j = 0;
		while (j < product.col)
		{
			product.mtx[i * product.col + j] = mtx_dot(lh, i, rh, j);
			++j;
		}
		++i;
	}
	return (product);
}
