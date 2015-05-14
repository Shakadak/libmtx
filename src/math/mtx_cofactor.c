#include "libmtx.h"

double	mtx_cofactor(t_mtx const mtx,
		unsigned int const row,
		unsigned int const col)
{
	return (mtx_minor(mtx, row, col) * (row + col ? -1.0 : 1.0));
}
