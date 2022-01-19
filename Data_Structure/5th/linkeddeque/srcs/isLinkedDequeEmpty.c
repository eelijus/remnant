/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isLinkedDequeEmpty.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:21:29 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 13:35:39 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

int isLinkedDequeEmpty(LinkedDeque* pDeque)
{
	if (!pDeque)
		return (FALSE);
	return (pDeque->currentElementCount == 0 ? TRUE : FALSE);
}
