/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_cofactor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:02:29 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:02:33 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmtx.h"

double	mtx_cofactor(t_mtx const mtx,
		unsigned int const row,
		unsigned int const col)
{
	return (mtx_minor(mtx, row, col) * (row + col ? -1.0 : 1.0));
}
