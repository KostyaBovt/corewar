/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ldi.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 16:12:06 by aklimchu          #+#    #+#             */
/*   Updated: 2017/03/31 14:38:00 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/vm.h"

void				i_ldi(t_arg *args, t_process *p, t_state *s)
{
	int				address;
	int				read_val;
	unsigned char	*pos;

	address = (get_arg_val(args[0], p, s->arena, 4) +
			get_arg_val(args[1], p, s->arena, 4)) % IDX_MOD;
	pos = move_to(address, p->pc, s->arena);
	read_val = read_mem(4, pos, s->arena);
	if (args[2].val > 0 && args[2].val <= REG_NUMBER)
		p->regs[args[2].val - 1] = read_val;
	p->carry = FALSE;
}
