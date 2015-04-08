#include "libmtx.h"

double	vec_dot(t_mtx const lh, t_mtx const rh)
{
	return (mtx_dot(mtx_transpose(lh), 0, rh, 0));
}
