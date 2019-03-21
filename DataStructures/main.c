#include <stdio.h>
#include <stdlib.h>
#include "DataStructures.h"
#include "Lambda.h"
int Equal(Node* node, void* data)
{
	return node->data == data;
}
int main()
{

    List *list = CreateEmptyList();
	ListInsertEnd(list, 8);
	ListInsertEnd(list, 53);
	ListInsertEnd(list, 312);
	ListInsertEnd(list, 2);
	ListInsertEnd(list, 412);
	ListInsertEnd(list, 41);
	ListInsertEnd(list, 42);
	printf("Element found> %i\n",ListFind(list, 42, &Equal)->data);
    //ListOrderedInsert(list, 5,(void*)NULL);
	//ListOrderedInsert(list, 4,(void*)NULL);
	//ListOrderedInsert(list, 6,(void*)NULL);
    ListPrint(list);
}
