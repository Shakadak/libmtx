#include "libmtx.h"

t_mtx	mtx_product(t_mtx const lh, t_mtx const rh)
{
	t_mtx			product;
	unsigned int	i;
	unsigned int	j;

	product = mtx_new(lh.row, rh.col);
	i = 0;
	while (i < product.row)
	{
		j = 0;
		while (j < product.col)
		{
			product.mtx[i * product.col + j] = mtx_dot(lh, i, rh, j);
			++j;
		}
		++i;
	}
	return (product);
}
