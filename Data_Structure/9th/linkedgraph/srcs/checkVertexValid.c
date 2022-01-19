/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkVertexValid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:33:27 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/20 14:36:25 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"

int checkVertexValid(LinkedGraph* pGraph, int vertexID)
{
	// ������� ����Ͻ� 1 ��ȯ
	// �̻���� ����Ͻ� 0 ��ȯ
	
	if (!pGraph)
		return FALSE;
	if (vertexID >= pGraph->maxVertexCount)
		return FALSE;
	if (pGraph->pVertex[vertexID] == USED)
		return USED;
	else
		return NOT_USED;
}