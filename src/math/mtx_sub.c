#include "libmtx.h"

t_mtx	mtx_sub(t_mtx const lh, t_mtx const rh)
{
	t_mtx			diff;
	t_mtx			tmp;

	tmp = mtx_scalar_mult(-1, rh);
	diff = mtx_add(lh, tmp);
	mtx_free(tmp);
	return (diff);
}
