#ifndef NODE_H
#define NODE_H
#include<iostream>
#include"Person.h"
using namespace std;
class  Node
{
public:
	Node *next;
	Person data;
	void PrintNode();

};

#endif // !NODE_H
