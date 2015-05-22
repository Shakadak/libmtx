/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_identity.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:02:51 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:02:52 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmtx.h"

t_mtx	mtx_identity(unsigned int const size)
{
	t_mtx			id;
	unsigned int	i;

	id = mtx_new(size, size);
	i = 0;
	while (i < size)
	{
		id.mtx[i * size + i] = 1.0;
		++i;
	}
	return (id);
}
