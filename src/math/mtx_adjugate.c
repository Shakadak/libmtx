#include "libmtx.h"

static t_mtx	mtx_cofactor_mtx(t_mtx const mtx)
{
	t_mtx	co;
	unsigned int	i;
	unsigned int	j;

	co = mtx_new(mtx.row, mtx.col);
	i = 0;
	while (i < co.row)
	{
		j = 0;
		while (j < co.col)
		{
			co.mtx[i * co.col + j] = mtx_cofactor(mtx, i, j);
			++j;
		}
		++i;
	}
	return (co);
}

t_mtx	mtx_adjugate(t_mtx const mtx)
{
	return (mtx_transpose(mtx_cofactor_mtx(mtx)));
}
