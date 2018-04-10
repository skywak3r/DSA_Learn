#ifndef  MYQUEUE_H
#define MYQUEUE_H
#include"MyQueue.h"
#include<iostream>
#include"Customer.h"
using namespace std;

template <typename T>
class MyQueue
{
public:
	MyQueue(int QueueCapacity=1);
	~MyQueue();
	void ClearQueue();
	bool QueueEmpty() const;
	int QueueLength() const;
	bool QueueFull() const;
	bool EnQueue(T element);
	bool DeQueue(T &element);
	void QueueTraverse();

private:
	T *m_pQueue;
	int m_iQueueLen;
	int m_iQueueCapacity;
	int m_iHead;
	int m_iTail;
};

template <typename T>
MyQueue<T>::MyQueue(int _capacity)
{
	m_iQueueCapacity = _capacity;
	m_pQueue = new T[m_iQueueCapacity];
	ClearQueue();
}

template <typename T>
MyQueue<T>::~MyQueue()
{
	delete[]m_pQueue;
	m_pQueue = NULL;

}
template <typename T>
void MyQueue<T>::ClearQueue()
{
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
}
template <typename T>
bool MyQueue<T>::QueueEmpty() const
{
	return m_iQueueLen == 0 ? true : false;
}
template <typename T>
int MyQueue<T>::QueueLength() const
{
	return m_iQueueLen;
}
template <typename T>
bool MyQueue<T>::QueueFull() const
{
	return m_iQueueCapacity == m_iQueueLen ? true : false;
}
template <typename T>
bool MyQueue<T>::EnQueue(T element)
{
	if (QueueFull())
	{
		return false;
	}
	else
	{
		m_iTail = m_iTail%m_iQueueCapacity;
		m_pQueue[m_iTail] = element;
		m_iTail++;

		m_iQueueLen++;
		return true;
	}
}
template <typename T>
bool MyQueue<T>::DeQueue(T &ele)
{
	if (QueueEmpty())
	{
		return false;
	}
	m_iHead = m_iHead%m_iQueueCapacity;
	m_iHead++;
	m_iQueueLen--;

	return true;
}
template <typename T>
void MyQueue<T>::QueueTraverse()
{
	cout << endl;
	for (int i = m_iHead; i < m_iQueueLen + m_iHead; i++)
	{
		m_pQueue[i%m_iQueueCapacity].PrintInfo();


	}
	cout << endl;
}




#endif // ! MYQUEUE_H
