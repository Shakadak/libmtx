/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:03:42 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:03:44 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmtx.h"

t_mtx	mtx_dup(t_mtx const src)
{
	t_mtx			copy;
	unsigned int	i;

	copy = mtx_new(src.row, src.col);
	i = 0;
	while (i < copy.row * copy.col)
	{
		copy.mtx[i] = src.mtx[i];
		++i;
	}
	return (copy);
}
