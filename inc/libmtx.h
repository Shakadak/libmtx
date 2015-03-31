#ifndef LIBMTX_H
# define LIBMTX_H

/*
** Convention:
** - Matrices are stored as row major.
** - Vectors are column vector.
*/

typedef struct	s_mtx
{
	unsigned int	row;
	unsigned int	col;
	double			*mtx;
}				t_mtx;

t_mtx			mtx_add(t_mtx const lh, t_mtx const rh);
double			mtx_dot(t_mtx const lh, unsigned int const i, t_mtx const rh,
		unsigned int j);
t_mtx			mtx_identity(unsigned int const size);
t_mtx			mtx_product(t_mtx const lh, t_mtx const rh);
t_mtx			mtx_scalar_mult(double const lambda, t_mtx const mtx);
t_mtx			mtx_sub(t_mtx const lh, t_mtx const rh);
t_mtx			mtx_transpose(t_mtx const mtx);

double			vec_dot(t_mtx const lh, t_mtx const rh);

void			mtx_free(t_mtx const mtx);
t_mtx			mtx_new(int const row, int const col);

#endif
