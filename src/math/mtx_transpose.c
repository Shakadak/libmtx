/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_transpose.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:03:30 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:03:32 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmtx.h"

t_mtx	mtx_transpose(t_mtx const mtx)
{
	t_mtx			transposed;
	unsigned int	i;
	unsigned int	j;

	transposed = mtx_new(mtx.col, mtx.row);
	i = 0;
	while (i < mtx.row)
	{
		j = 0;
		while (j < mtx.col)
		{
			transposed.mtx[j * transposed.col + i] = mtx.mtx[i * mtx.col + j];
			++j;
		}
		++i;
	}
	return (transposed);
}
