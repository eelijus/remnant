/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peekFrontLD.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:22:53 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 13:24:51 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkeddeque.h"

DequeNode* peekFrontLD(LinkedDeque* pDeque)
{
	if (!pDeque)
		return (NULL);
	return (pDeque->pFrontNode);
}