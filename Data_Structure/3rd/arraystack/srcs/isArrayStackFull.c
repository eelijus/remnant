/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isArrayStackFull.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:59:26 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 14:12:43 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

int isArrayStackFull(ArrayStack* pStack)
{	
    if (pStack == NULL)
        return (FALSE);
    if (pStack->currentElementCount == pStack->maxElementCount)
        return (TRUE);
    return (FALSE);
}