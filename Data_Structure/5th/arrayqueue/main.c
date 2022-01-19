/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:05:20 by sujilee           #+#    #+#             */
/*   Updated: 2021/12/07 14:58:56 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrayqueue.h"

int main()
{
	// // ArrayStack *myArray;
	// // ArrayStackNode *curr;
	// // ArrayStackNode node0 = {0};
	ArrayQueue *linkeds;
	ArrayQueueNode node1 = { 0 };
	ArrayQueueNode *curr;

	int len = 0;
	int position = 0;
	int max;
	char c;
	printf("input maxsize(0 when linkedlist): ");
	scanf(" %d", &max);
	// myArray = createArrayStack(max);
	linkeds = createArrayQueue(max);
	while(1)
	{
		rewind(stdin);
		printf("put Enqueue Dequeue Peek Full empTy pRint: ");
		scanf(" %c", &c);
		rewind(stdin);
		switch (c)
		{
		/*
		------------------------------------------------------------------------

										ARRAY_STACK
										
		------------------------------------------------------------------------
		*/
		// case 'P':
		// 	scanf("%c", &(node0.data));
		// 	pushAS(myArray, node0);
		// 	break ;
		// case 'O':
		// 	printf("%d\n", popAS(myArray)->data);
		// 	break ;
		// case 'K':
		// 	printf("%d\n", peekAS(myArray)->data);
		// 	break ;
		// case 'F':
		// 	printf("stack is %sfull\n", isArrayStackFull(myArray) == TRUE ? "" : "not ");
		// 	break ;
		// case 'E':
		// 	printf("stack is %sempty\n", isArrayStackEmpty(myArray) == TRUE ? "" : "not ");
		// 	break ;
		// case 'R':
		// 	for (int i = 0; i < myArray->currentElementCount; i++)
		// 		printf("%c ", myArray->pElement[i].data);
		// 	printf("\n");
		/*
		------------------------------------------------------------------------

										LINKED_STACK
										
		------------------------------------------------------------------------
		*/
		case 'E':
			scanf("%c", &(node1.data));
			enqueueAQ(linkeds, node1);
			break ;
		case 'D':
			printf("%d\n", (curr = dequeueAQ(linkeds)) ? curr->data : -1 );
			free(curr);
			break ;
		case 'P':
			printf("%d\n", (curr = peekAQ(linkeds)) ? curr->data : -1 );
			break ;
			free(curr);
		case 'F':
			printf("queue is %sfull\n", isArrayQueueFull(linkeds) == TRUE ? "" : "not ");
			break ;
		case 'T':
			printf("queue is %sempty\n", isArrayQueueEmpty(linkeds) == TRUE ? "" : "not ");
			break ;
		case 'R':
			displayArrayQueue(linkeds);
			break;
		default:
			break;
		}
	}
	if(linkeds)
		deleteArrayQueue(linkeds);
	return (0);
}

/**
int main()
{
    ArrayStack *myStack;

    ArrayStackNode *temp;
    ArrayStackNode node0 = {'a'};

    int number;
    int cnt = -1;
    myStack = createArrayStack(10);
    while (1)
    {
        printf("1 : Push\n2 : Pop\n3 : Peek\n4 : Display\n5 : Delete\n6 : isEmpty?\n");
        scanf(" %d", &number);
        switch (number)
        {
        case 1:
            printf("data : \n");
            getchar();
            scanf("%c", &node0.data);
            if (myStack->maxElementCount < cnt + myStack->currentElementCount)
                return (0);
            pushAS(myStack, node0);
            cnt++;
            displayArrayStack(myStack);

            break;
        case 2:
            temp = popAS(myStack);
            if (!temp)
                return (0);
            printf("<<%c has popped out!>>\n", temp->data);
            displayArrayStack(myStack);
            break;
        case 3:
            temp = peekAS(myStack);
            printf("<<tada %c!>>\n", temp->data);
            break;
        case 4:
            displayArrayStack(myStack);
            break;
       case 5:
            deleteArrayStack(myStack);
            system("leaks arraystack");
            break;
        case 6:
            if (isArrayStackEmpty(myStack) == 1)
                printf("<<it's empty>>\n");
            else
                printf("<<nope, there's something left>>\n");
            break;
        default:
            break;
        }
    }
    return (0);
}
**/