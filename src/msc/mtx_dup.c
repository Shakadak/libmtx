#include "libmtx.h"

t_mtx	mtx_dup(t_mtx const src)
{
	t_mtx			copy;
	unsigned int	i;

	copy = mtx_new(src.row, src.col);
	i = 0;
	while (i < copy.row * copy.col)
	{
		copy.mtx[i] = src.mtx[i];
		++i;
	}
	return (copy);
}
