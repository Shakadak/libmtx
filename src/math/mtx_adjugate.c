/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_adjugate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:02:05 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:02:26 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmtx.h"

static t_mtx	mtx_cofactor_mtx(t_mtx const mtx)
{
	t_mtx			co;
	unsigned int	i;
	unsigned int	j;

	co = mtx_new(mtx.row, mtx.col);
	i = 0;
	while (i < co.row)
	{
		j = 0;
		while (j < co.col)
		{
			co.mtx[i * co.col + j] = mtx_cofactor(mtx, i, j);
			++j;
		}
		++i;
	}
	return (co);
}

t_mtx			mtx_adjugate(t_mtx const mtx)
{
	return (mtx_transpose(mtx_cofactor_mtx(mtx)));
}
