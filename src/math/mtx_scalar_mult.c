/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_scalar_mult.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:03:05 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:03:06 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmtx.h"

t_mtx	mtx_scalar_mult(double const lambda, t_mtx const mtx)
{
	unsigned int	i;
	t_mtx			scaled;

	scaled = mtx_new(mtx.row, mtx.col);
	i = 0;
	while (i < scaled.row * scaled.col)
	{
		scaled.mtx[i] = lambda * mtx.mtx[i];
		++i;
	}
	return (scaled);
}
