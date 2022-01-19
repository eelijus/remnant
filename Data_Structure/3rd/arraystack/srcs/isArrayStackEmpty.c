/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isArrayStackEmpty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:04:41 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 14:56:06 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

int isArrayStackEmpty(ArrayStack* pStack)
{
    if (!pStack)
        return (FALSE);
    if (pStack->currentElementCount == 0)
        return (TRUE);
    return (FALSE);
}