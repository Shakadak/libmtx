#include "libmtx.h"

t_mtx	mtx_add(t_mtx const lh, t_mtx const rh)
{
	t_mtx	sum;
	unsigned int	i;
	unsigned int	j;

	sum = mtx_new(lh.row, rh.col);
	i = 0;
	while (i < sum.row)
	{
		j = 0;
		while (j < sum.col)
		{
			sum.mtx[i * sum.col + j]  = lh.mtx[i * lh.col + j] + rh.mtx[j * rh.col + j];
			++j;
		}
		++i;
	}
	return (sum);
}
