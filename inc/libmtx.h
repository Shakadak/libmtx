/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmtx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/22 20:01:33 by npineau           #+#    #+#             */
/*   Updated: 2015/05/22 20:01:45 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMTX_H
# define LIBMTX_H

/*
** Note; This branch doesn't use any allocation and therefor can only
** handle 16 number at most.
** Convention:
** - Matrices are stored as row major.
** - Vectors are column vector.
*/

typedef struct	s_mtx
{
	unsigned int	row;
	unsigned int	col;
	double			mtx[16];
}				t_mtx;

t_mtx			mtx_add(t_mtx const lh, t_mtx const rh);
t_mtx			mtx_adjugate(t_mtx const mtx);
double			mtx_cofactor(t_mtx const mtx,
		unsigned int const row,
		unsigned int const col);
double			mtx_determinant(t_mtx const mtx);
double			mtx_dot(t_mtx const lh, unsigned int const i, t_mtx const rh,
		unsigned int j);
t_mtx			mtx_identity(unsigned int const size);
double			mtx_minor(t_mtx const mtx,
		unsigned int const row,
		unsigned int const col);
t_mtx			mtx_product(t_mtx const lh, t_mtx const rh);
t_mtx			mtx_scalar_mult(double const lambda, t_mtx const mtx);
t_mtx			mtx_sub(t_mtx const lh, t_mtx const rh);
t_mtx			mtx_transpose(t_mtx const mtx);

double			vec_dot(t_mtx const lh, t_mtx const rh);

t_mtx			mtx_dup(t_mtx const src);
t_mtx			mtx_new(int const row, int const col);

#endif
