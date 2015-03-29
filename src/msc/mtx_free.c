#include <stdlib.h>
#include "libmtx.h"

void	mtx_free(t_mtx const mtx)
{
	free(mtx.mtx);
}
