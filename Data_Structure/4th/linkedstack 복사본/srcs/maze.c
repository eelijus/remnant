/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maze.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:16:04 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/02 17:41:22 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void findPath(int **mazeArray,	StackNode startPos, StackNode endPos, LinkedStack *pStack)
{
	StackNode nextPos;	//user의 위치를 나타낼 노드
	StackNode *temp;	//pop한 노드를 담을 노드 그릇

	pushLinkedStack(pStack, startPos);	// 푸쉬
	nextPos = startPos; // 시작점을 user의 현위치로
	//스폰 위치에 발자국 찍기
	mazeArray[startPos.y][startPos.x] = 2;

	// 스택이 다 비거나 목적지에 도착할 때까지
	while (!isLinkedStackEmpty(pStack) && !(nextPos.x == endPos.x && nextPos.y == endPos.y))
	{
		//temp에 푸쉬했던 위치 정보를 가진 노드를 할당
		temp = popLinkedStack(pStack);
		nextPos.x = temp->x; // 위치노드에 현 위치의 x좌표 저장
		nextPos.y = temp->y; // 위치노드에 현 위치의 y좌표 저장
		nextPos.direction = startPos.direction; // 방향 디폴드값 상으로 설정
		// 갈 수 있는 방향이 있거나 목적지에 도달하지 않았을 때
		while (nextPos.direction < 4 && !(nextPos.x == endPos.x && nextPos.y == endPos.y))
		{
			//위치의 x, y좌표를 현재 direction 방향으로 이동 
			nextPos.x += DIRECTIONS[nextPos.direction][0];
			nextPos.y += DIRECTIONS[nextPos.direction][1];
			// 미로 크기를 벗어나거나 다음으로 이동할 칸의 식별자가 0이 아닐 경우
			if (nextPos.x >= WIDTH || nextPos.x < 0 || nextPos.y >= HEIGHT || nextPos.y < 0 || mazeArray[nextPos.y][nextPos.x] != 0)
			{
				//막힌 위치로 이동하기 전 칸으로 후퇴
				nextPos.x -= DIRECTIONS[nextPos.direction][0];
				nextPos.y -= DIRECTIONS[nextPos.direction][1];
				//방향 바꿈 (상 -> 하 -> 좌 -> 우 순서로)
				nextPos.direction++;
			}
			else 
			{
				mazeArray[nextPos.y][nextPos.x] = 2;
				// 순조롭게 이동중 : 위치 노드를 푸쉬
				pushLinkedStack(pStack, nextPos);
				//목적지에 도달했을 경우
				nextPos.direction = 0;
				if (nextPos.x == endPos.x && nextPos.y == endPos.y)
				{
					printMap(mazeArray);
					return ;
				}
			}
		}
	}
	// 스폰 위치 = 목적 위치일 경우
	if (nextPos.x == endPos.x && nextPos.y == endPos.y)
	{
		printMap(mazeArray);
		return ;
	}
	else 
	{
		printf("not valid maze");
		return ;
	}
}

void printMap (int **mazeArray) 
{
	int i = 0;
	int j = 0;
	while (i < HEIGHT)
	{
		while (j <WIDTH)
		{
			printf("%d", mazeArray[i][j]);
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
}

int main (void)
{
	int **maze;
	StackNode startNode;
	StackNode endNode;
	LinkedStack *pStack;

	printf("input WIDTH of the maze\n");
	scanf("%d", &WIDTH);
	printf("input HEIGHT of the maze\n");
	scanf("%d", &HEIGHT);

	printf("input position of startPoint\n");
	printf("x : ");
	scanf("%d", &startNode.x);
	printf("y : ");
	scanf("%d", &startNode.y);

	printf("input position of endPoint\n");
	printf("x : ");
	scanf("%d", &endNode.x);
	printf("y : ");
	scanf("%d", &endNode.y);
	startNode.direction = 0;
	endNode.direction = 0;

	maze = (int **)malloc(sizeof(int *) * HEIGHT);
	for (int i = 0; i < HEIGHT; i++)
	{
		maze[i] = (int *)malloc(sizeof(int) * WIDTH);
	}
	printf("maze wall&way identifier\n");
	for (int j = 0; j < HEIGHT; j++)
	{
		for (int k = 0; k < WIDTH; k++)
		{
			printf("%d's row : ", j + 1);
			scanf("%d", &maze[j][k]);
		}
	}
	pStack = createLinkedStack();
	findPath(maze, startNode, endNode, pStack);
}