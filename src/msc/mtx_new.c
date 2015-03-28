#include "stdlib.h"
#include "libmtx.h"

t_mtx	mtx_new(int const row, int const col)
{
	t_mtx	new;
	int		i;

	new.row = row;
	new.col = col;
	new.mtx = (double *)malloc(row * col * sizeof(*new.mtx));
	if (new.mtx == NULL)
	{
		new.row = 0;
		new.col = 0;
	}
	else
	{
		i = 0;
		while (i < row * col)
		{
			new.mtx[i] = 0.0;
			++i;
		}
	}
	return (new);
}
