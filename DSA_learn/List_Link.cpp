#include"List_Link.h"
#include<iostream>
#include"Node.h"
List_Link::List_Link()
{
	m_pList = new Node;

	m_pList->next = NULL;
	m_iLength = 0;
}
bool List_Link::ListEmpty()
{
	return m_iLength == 0 ? true : false;
}
int List_Link::ListLength()
{
	return m_iLength;
}
void List_Link::ClearList()
{
	Node *currentNode = m_pList->next;
	while (currentNode != NULL)
	{
		Node *temp = currentNode->next;
		delete currentNode;
		currentNode = temp;
	}
	m_pList = NULL;
}
List_Link::~List_Link()
{
	ClearList();
	delete m_pList;
	m_pList = NULL;
}

bool List_Link::ListInsertHead(Node *pNode)
{
	Node *temp = m_pList->next;
	Node *newNode = new Node;
	if (newNode == NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	m_pList->next = newNode;
	newNode->next = temp;
	m_iLength++;
	return true;

}
bool List_Link::ListInsertTail(Node *pNode)
{
	Node *currentNode = m_pList;
	while (currentNode->next!=NULL)
	{
		currentNode = currentNode->next;
	}
	Node *newNode = new Node;
	if (newNode == NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	currentNode->next = newNode;
	newNode->next = NULL;
	m_iLength++;
	return true;
	
}
bool List_Link::ListInsert(int i, Node *pNode)
{
	if (i <= 0 || i > m_iLength)
	{
		cout << "index error"<<endl;
		return false;
	}
	Node *currentNode = m_pList;
	for (int k = 1; k < i; k++)
	{
		currentNode = currentNode->next;
	}
	Node *newNode = new Node;
	if (newNode == NULL)
		return false;
	newNode->data = pNode->data;
	newNode->next=currentNode->next;
	currentNode->next = newNode;
	m_iLength++;
	return true;
	


}
bool List_Link::ListDelete(int i, Node *pNode)
{
	if (i <= 0 || i > m_iLength)
	{
		cout << "index error" << endl;
		return false;
	}
	Node *currentNode = m_pList;
	Node *currentNodeBefore = NULL;
	for (int k = 1; k <= i; k++)
	{
		currentNodeBefore = currentNode;
		currentNode = currentNode->next;
	}
	pNode->data = currentNode->data;
	currentNodeBefore->next = currentNode->next;
	delete currentNode;
	currentNode = NULL;
	m_iLength--;
	return true;
}

bool List_Link::GetElement(int i, Node *pNode)
{
	if (i<=0 || i>m_iLength)
	{
		return false;
	}
	Node *currentNode = m_pList;
	for (int k = 1; k < i; k++)
	{
		currentNode = currentNode->next;
	}
	pNode->data = currentNode->next->data;
	return true;
}
int List_Link::LocatElem(Node *pNode)
{
	Node *currentNode;
	currentNode->next = m_pList;
	int count = 0;
	while (currentNode!=NULL)
	{
		currentNode = currentNode->next;
		if (currentNode->data == pNode->data)
		{
			return count;
		}
		count++;
	}
	return -1;
}
bool List_Link::PriorElem(Node *pCurrentNode, Node *pPreNode)
{

	Node *currentNode=new Node;
	Node *temp = NULL;
	currentNode->next = m_pList;
	while (currentNode != NULL)
	{
		temp = currentNode;
		currentNode = currentNode->next;
		if (currentNode->data == pCurrentNode->data)
		{
			if (temp == m_pList)
				return false;
			pPreNode->data = temp->data;
			return true;
		}
		
	}
	return false;
}
bool List_Link::NextElem(Node *pCurrentNode, Node *pNextNode)
{
	Node *currentNode=new Node;
	currentNode = m_pList;
	while (currentNode != NULL)
	{
		
		currentNode = currentNode->next;
		
		if (currentNode->data == pCurrentNode->data)
		{
			if (currentNode->next == NULL) {
				cout << "last one" << endl;
				return false;
			}
			
			pNextNode->data = currentNode->next->data;
			return true;
		}

	}
	return false;
}
void List_Link::ListTraverse()
{
	int i = 1;
	Node *currentNode = m_pList;
	while (currentNode->next!=NULL)
	{
		currentNode = currentNode->next;
		cout << i<<".";
		currentNode->PrintNode();
		i++;
	}
}