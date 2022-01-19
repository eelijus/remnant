/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addVertexLG.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:28:00 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/20 14:32:57 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedgraph.h"

int addVertexLG(LinkedGraph* pGraph, int vertexID)
{
	if (!pGraph)
		return FALSE;
	if (vertexID >= pGraph->maxVertexCount)
		return FALSE;
	if (pGraph->pVertex[vertexID])
	{
		printf("vertaxID already exist!\n");
		return FAIL;
	}
	pGraph->pVertex[vertexID] = USED;
	pGraph->currentVertexCount++;

	return SUCCESS;
}