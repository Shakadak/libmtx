/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:03:49 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:03:51 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libmtx.h"

t_mtx	mtx_new(int const row, int const col)
{
	t_mtx	new;
	int		i;

	new.row = row;
	new.col = col;
	i = 0;
	while (i < row * col)
	{
		new.mtx[i] = 0.0;
		++i;
	}
	return (new);
}
