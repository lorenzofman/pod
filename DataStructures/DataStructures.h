#ifndef DATASTRUCTURES_H_INCLUDED
#define DATASTRUCTURES_H_INCLUDED
#define NULL 0
typedef struct Node
{
	void* data;
	struct Node* next;
	struct Node* previous;
}Node;

typedef struct List
{
	int count;
	Node *first;
	Node *last;
}List;

List *CreateEmptyList ();
void ListOrderedInsert(List *list, void *data, void* lessThanOperator);
void ListInsertEnd(List* list, void *data);
void ListPrint(List* list);
Node* ListFind(List *list, void* data, void * predicate(Node*, void*));


#endif // DATASTRUCTURES_H_INCLUDED
