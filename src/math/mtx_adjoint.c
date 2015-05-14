#include "libmtx.h"

static t_mtx	mtx_cofactor_mtx(t_mtx const mtx)
{
}

t_mtx	mtx_adjoint(t_mtx const mtx)
{
	return (mtx_transpose(mtx_cofactor_mtx(mtx)));
}
