/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttripletab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:14:57 by mgruson           #+#    #+#             */
/*   Updated: 2022/11/17 13:21:22 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_puttripletab(char ***tripletab)
{
	int	i;

	i = 0;
	if (!tripletab)
		return ;
	while (tripletab[i])
	{
		ft_putdoubletab(tripletab[i]);
		i++;
	}
}
