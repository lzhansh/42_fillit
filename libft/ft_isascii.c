/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chyuen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:23:37 by chyuen            #+#    #+#             */
/*   Updated: 2019/05/01 15:24:20 by chyuen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**check single char within ASCII table (1 to 127)
**if yes, return 1. otherwise, return 0
*/

int	ft_isascii(int c)
{
	return (c > -1 && c < 128);
}
