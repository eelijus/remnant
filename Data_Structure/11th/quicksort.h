/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:36:38 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/27 14:00:34 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _QUICK_SORT_
#define _QUICK_SORT_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "doublylist.h"


DoublyList *quickSort(DoublyList *pList);
DoublyListNode *findRight(DoublyList *pList, int position);
DoublyListNode *findLeft(DoublyList *pList, int position);
void	nodeSwitch(DoublyListNode *rigth, DoublyListNode *left);
int		isSorted(DoublyList *pList, int position);

#define TRUE	1
#define FALSE	0


#endif