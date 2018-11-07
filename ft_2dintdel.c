#include "libft.h"

void	ft_2dintdel(int ***atab, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free((*atab)[i++]);
	free(*atab);
	*atab = NULL;
}