/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peekRearLD.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:29:47 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 13:30:03 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

DequeNode* peekRearLD(LinkedDeque* pDeque)
{
	if (!pDeque)
		return (NULL);
	return (pDeque->pRearNode);
}