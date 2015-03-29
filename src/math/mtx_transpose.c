#include "libmtx.h"

t_mtx	mtx_transpose(t_mtx const mtx)
{
	t_mtx	transposed;
	int		i;
	int		j;

	transposed = mtx_new(mtx.col, mtx.row);
	i = 0;
	while (i < mtx.row)
	{
		j = 0;
		while (j < mtx.col)
		{
			transposed.mtx[j * transposed.col + i] = mtx.mtx[i * mtx.col + j];
			++j;
		}
		++i;
	}
	return (transposed);
}
