/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_2dintdel.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/08 11:44:06 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/08 11:44:08 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_2dintdel(int ***atab, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free((*atab)[i++]);
	free(*atab);
	*atab = NULL;
}
