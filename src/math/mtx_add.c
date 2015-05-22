/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:01:47 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:04:51 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmtx.h"

t_mtx	mtx_add(t_mtx const lh, t_mtx const rh)
{
	t_mtx			sum;
	unsigned int	i;
	unsigned int	j;

	sum = mtx_new(lh.row, rh.col);
	i = 0;
	while (i < sum.row)
	{
		j = 0;
		while (j < sum.col)
		{
			sum.mtx[i * sum.col + j] = lh.mtx[i * lh.col + j]
				+ rh.mtx[i * rh.col + j];
			++j;
		}
		++i;
	}
	return (sum);
}
