/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_minor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:02:55 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:02:57 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmtx.h"

/*
** Warning: Thes function are intended for mxm matrix.
** No check will be effected to avoid mxn matrices.
*/

static t_mtx	mtx_submatrix(t_mtx const mtx,
		unsigned int const row,
		unsigned int const col)
{
	t_mtx			sub;
	unsigned int	i;
	unsigned int	j;
	unsigned int	isub;
	unsigned int	jsub;

	sub = mtx_new(mtx.row - 1, mtx.col - 1);
	i = 0;
	isub = 0;
	while (i < mtx.row)
	{
		if (i == row)
			++i;
		j = 0;
		jsub = 0;
		while (j < mtx.col)
		{
			if (j == col)
				++j;
			sub.mtx[isub * sub.col + jsub] = mtx.mtx[i * mtx.col + j];
			++j && ++jsub;
		}
		++i && ++isub;
	}
	return (sub);
}

double			mtx_minor(t_mtx const mtx,
		unsigned int const row,
		unsigned int const col)
{
	return (mtx_determinant(mtx_submatrix(mtx, row, col)));
}
