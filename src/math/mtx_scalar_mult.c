#include "libmtx.h"

t_mtx	mtx_scalar_mult(double const lambda, t_mtx const mtx)
{
	int		i;
	t_mtx	scaled;

	scaled = mtx_new(mtx.row, mtx.col);
	i = 0;
	while (i < scaled.row * scaled.col)
	{
		scaled.mtx[i] = lambda * mtx.mtx[i];
		++i;
	}
	return (scaled);
}
