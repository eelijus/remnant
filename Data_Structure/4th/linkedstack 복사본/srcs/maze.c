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
	StackNode nextPos;	//user�� ��ġ�� ��Ÿ�� ���
	StackNode *temp;	//pop�� ��带 ���� ��� �׸�

	pushLinkedStack(pStack, startPos);	// Ǫ��
	nextPos = startPos; // �������� user�� ����ġ��
	//���� ��ġ�� ���ڱ� ���
	mazeArray[startPos.y][startPos.x] = 2;

	// ������ �� ��ų� �������� ������ ������
	while (!isLinkedStackEmpty(pStack) && !(nextPos.x == endPos.x && nextPos.y == endPos.y))
	{
		//temp�� Ǫ���ߴ� ��ġ ������ ���� ��带 �Ҵ�
		temp = popLinkedStack(pStack);
		nextPos.x = temp->x; // ��ġ��忡 �� ��ġ�� x��ǥ ����
		nextPos.y = temp->y; // ��ġ��忡 �� ��ġ�� y��ǥ ����
		nextPos.direction = startPos.direction; // ���� �����尪 ������ ����
		// �� �� �ִ� ������ �ְų� �������� �������� �ʾ��� ��
		while (nextPos.direction < 4 && !(nextPos.x == endPos.x && nextPos.y == endPos.y))
		{
			//��ġ�� x, y��ǥ�� ���� direction �������� �̵� 
			nextPos.x += DIRECTIONS[nextPos.direction][0];
			nextPos.y += DIRECTIONS[nextPos.direction][1];
			// �̷� ũ�⸦ ����ų� �������� �̵��� ĭ�� �ĺ��ڰ� 0�� �ƴ� ���
			if (nextPos.x >= WIDTH || nextPos.x < 0 || nextPos.y >= HEIGHT || nextPos.y < 0 || mazeArray[nextPos.y][nextPos.x] != 0)
			{
				//���� ��ġ�� �̵��ϱ� �� ĭ���� ����
				nextPos.x -= DIRECTIONS[nextPos.direction][0];
				nextPos.y -= DIRECTIONS[nextPos.direction][1];
				//���� �ٲ� (�� -> �� -> �� -> �� ������)
				nextPos.direction++;
			}
			else 
			{
				mazeArray[nextPos.y][nextPos.x] = 2;
				// �����Ӱ� �̵��� : ��ġ ��带 Ǫ��
				pushLinkedStack(pStack, nextPos);
				//�������� �������� ���
				nextPos.direction = 0;
				if (nextPos.x == endPos.x && nextPos.y == endPos.y)
				{
					printMap(mazeArray);
					return ;
				}
			}
		}
	}
	// ���� ��ġ = ���� ��ġ�� ���
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