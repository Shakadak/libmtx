/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_dot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:03:34 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:03:36 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmtx.h"

double	vec_dot(t_mtx const lh, t_mtx const rh)
{
	return (mtx_dot(mtx_transpose(lh), 0, rh, 0));
}
