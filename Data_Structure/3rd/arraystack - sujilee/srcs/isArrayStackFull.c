/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isArrayStackFull.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:59:26 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 12:19:51 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

int isArrayStackFull(ArrayStack* pStack)
{	
	if (pStack->currentElementCount == pStack->maxElementCount)
		return (TRUE);
	else
		return (FALSE);
}