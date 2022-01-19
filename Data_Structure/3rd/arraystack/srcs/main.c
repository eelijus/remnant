/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:32:02 by sujilee           #+#    #+#             */
/*   Updated: 2021/11/30 15:12:45 by sujilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraystack.h"

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