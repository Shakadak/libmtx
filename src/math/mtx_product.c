#include "libmtx.h"

t_mtx	mtx_product(t_mtx const lhs, t_mtx const rhs)
{
	t_mtx	product;
	int		i;
	int		j;
	int		k;

	product = mtx_new(lhs.row, rhs.col);
	i = 0;
	while (i < product.row)
	{
		j = 0;
		while (j < product.col)
		{
			k = 0;
			while (k < lhs.col)
			{
				product.mtx[i * product.col + j] += lhs.mtx[i * lhs.col + k]
					* rhs.mtx[k * rhs.col + j];
				++k;
			}
			++j;
		}
		++i;
	}
	return (product);
}
