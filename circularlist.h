#ifndef _CIRCULARLIST_
#define _CIRCULARLIST_

typedef struct CircularListNodeType
{
	int data;
	struct CircularListNodeType* pLink;
} CircularListNode;

typedef struct CircularListType
{
	int currentElementCount;
	CircularListNode* pLink;
} CircularList;

void displayCircularList(CircularList* pList);
CircularList* createCircularList();
int addCLElement(CircularList* pList, int position, CircularListNode element);
int removeCLElement(CircularList* pList, int position);
void deleteCircularList(CircularList* pList);
void clearCircularList(CircularList* pList);
int getCircularListLength(CircularList* pList);

#endif


#ifndef _COMMON_LIST_DEF_
#define _COMMON_LIST_DEF_

#define TRUE		1
#define FALSE		0	

#endif