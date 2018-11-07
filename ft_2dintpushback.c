#include "includes/libft.h"

int	**ft_2dintpushback(int **tab, int len, int *line)
{
	int	**ntab;
	int	i;

	if (!(ntab = (int**)ft_memalloc(sizeof(int*) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{	
		ntab[i] = tab[i];
		i++;
	}
	ntab[i] = line;
	return (ntab);
}