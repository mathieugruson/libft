/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdoubletab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:15:51 by mgruson           #+#    #+#             */
/*   Updated: 2022/11/17 13:44:48 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putdoubletab(char **doubletab)
{
	int	i;

	i = 0;
	if (!doubletab)
		return ;
	while (doubletab[i])
	{
		ft_putstr(doubletab[i]);
		write(1, "\n", 1);
		i++;
	}	
}
