/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_2dintpushback.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/08 11:44:16 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/08 14:59:44 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

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
