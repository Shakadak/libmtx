#include "libmtx.h"

double	vec_dot(t_mtx const lh, t_mtx const rh)
{
	t_mtx	lhT;
	double	product;

	lhT = mtx_transpose(lh);
	product = mtx_dot(lhT, 0, rh, 0);
	mtx_free(lhT);
	return (product);
}
