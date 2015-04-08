#include "libmtx.h"

t_mtx	mtx_sub(t_mtx const lh, t_mtx const rh)
{
	return (mtx_add(lh, mtx_scalar_mult(-1, rh)));
}
