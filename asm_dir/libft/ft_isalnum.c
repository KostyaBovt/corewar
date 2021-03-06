/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartyno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 16:13:11 by omartyno          #+#    #+#             */
/*   Updated: 2016/11/22 16:15:51 by omartyno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalpha(int c)
{
	return (((c >= 0101 && c <= 0132) || (c >= 0141 && c <= 0172)) ? 1 : 0);
}

static int	ft_isdigit(int c)
{
	return ((c >= 0x30 && c <= 0x39) ? 1 : 0);
}

int			ft_isalnum(int c)
{
	return ((ft_isalpha(c) || ft_isdigit(c)) ? 1 : 0);
}
