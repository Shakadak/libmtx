#include "libmtx.h"

/*
** Warning: This function is intended for mxm matrix.
** No check will be effected to avoid mxn matrices.
*/

double	mtx_determinant(t_mtx const mtx)
{
	double	determinant;
	double	minor;
	int		i;

	if (mtx.col = 2)
	{
		determinant = mtx.mtx[0 * 2 + 0] * mtx.mtx[1 * 2 + 1]
			- mtx.mtx[0 * 2 + 1] * mtx.mtx[1 * 2 + 0];
	}
	else
	{
		i = 0;
		determinant = 0;
		while (i < mtx.col)
		{
			minor = mtx_minor(mtx, 0, i);
			determinant += mtx * minor * (i % 2 ? -1.0 : 1.0);
			++i;
		}
	}
	return (determinant);
}
