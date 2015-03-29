#ifndef LIBMTX_H
# define LIBMTX_H

typedef struct	s_mtx
{
	int			row;
	int			col;
	double		*mtx;
}				t_mtx;

t_mtx	mtx_identity(unsigned int const size);
t_mtx	mtx_product(t_mtx const lhs, t_mtx const rhs);
t_mtx	mtx_transpose(t_mtx const mtx);

void	mtx_free(t_mtx const mtx);
t_mtx	mtx_new(int const row, int const col);

#endif
