/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toggle_bit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdo-minh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 02:15:51 by hdo-minh          #+#    #+#             */
/*   Updated: 2018/12/08 02:15:55 by hdo-minh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toggle_bit(int nbr, int index)
{
	return (nbr ^= 1UL << index);
}
