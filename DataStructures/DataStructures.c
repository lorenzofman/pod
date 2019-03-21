#include "DataStructures.h"
#include <stdio.h>
#include <stdlib.h>
#define private static
private Node* CreateNode(void *data)
{
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    node->previous = NULL;
    return node;
}

private Node *InsertNode(Node *node, void *data)
{
    Node *newNode = CreateNode(data);
    if(node != NULL){
        node->next = newNode;
    }
    newNode->previous = node;
    return newNode;
}

List *CreateEmptyList ()
{
    List *list = (List*)malloc(sizeof(List));
    list->count = 0;
    list->first = list->last = NULL;
    return list;
}
void ListOrderedInsert(List *list, void *data, void* lessThanOperator)
{
    if(list->count == 0)
    {
        ListInsertEnd(list,data);
    }
    for(Node* iterator = list->first;iterator != NULL ;iterator = iterator->next)
    {
        if((int)iterator->data > (int)data)
        {
            printf("Last number before is: %i\n", (int)iterator->previous->data);
            break;
        }
    }
}
Node* ListFind(List *list,void* data, void * predicate(Node*,void*)) 
{
	for (Node* node = list->first; node != NULL; node = node->next) 
	{
		if (predicate(node,data))
		{
			return node;
		}
	}
	return NULL;
}
void ListInsertEnd(List* list, void *data)
{
    Node* newNode = InsertNode(list->last,data);
    if(list->count == 0)
    {
        list->first = newNode;
    }
    list->last = newNode;
    list->count++;
}
void ListPrint(List* list)
{
    Node* current = list->first;
    while(current != NULL)
    {
        printf("%i\n",current->data);
        current = current->next;
    }
}
