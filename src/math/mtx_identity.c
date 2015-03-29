#include "libmtx.h"

t_mtx	mtx_identity(unsigned int const size)
{
	t_mtx			id;
	unsigned int	i;

	id = mtx_new(size, size);
	i = 0;
	while (i < size)
	{
		id.mtx[i * size + i] = 1.0;
		++i;
	}
	return (id);
}
