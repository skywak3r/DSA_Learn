#ifndef LINK_LINK_H
#define LINK_LINK_H
#include"Node.h"
class List_Link
{
public:
	List_Link();
	~List_Link();
	void ClearList();
	bool ListEmpty();
	int ListLength();
	bool GetElement(int i, Node *pNode);
	int LocatElem(Node *pNode);
	bool PriorElem(Node *pCurrentNode, Node *pPreNode);
	bool NextElem(Node *pCurrentNode, Node *pNextNode);
	void ListTraverse();
	bool ListInsert(int i, Node *pNode);
	bool ListDelete(int i, Node *pNode);
	bool ListInsertHead(Node *pNode);
	bool ListInsertTail(Node *pNode);


private:
	int m_iSize;
	int m_iLength;
	Node *m_pList;

};


#endif // !LINK_H
