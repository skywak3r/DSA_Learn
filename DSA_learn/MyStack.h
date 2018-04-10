#ifndef MYSTACK_H
#define MYSTACK_H
template <typename T>
class MyStack
{
public:
	MyStack(int size);
	~MyStack();
	bool stackEmpty();
	bool stackFull();
	void clearStack();
	int stackLengh();
	bool push(T ele);
	T pop(T &ele);
	void stackTraverse();
private:
	int m_iSize;
	int m_iTop;
	T *m_TBuffer;

};

template <typename T>
MyStack<T>::MyStack(int size)
{
	m_TBuffer = new T[size];
	m_iSize = size;
	clearStack();

}
template <typename T>
MyStack<T>::~MyStack()
{
	delete[]m_TBuffer;
	m_TBuffer = NULL;
}

template <typename T>
bool MyStack<T>::stackEmpty()
{
	return m_iTop == 0 ? true : false;
}
template <typename T>
bool MyStack<T>::stackFull()
{
	return m_iTop == m_iSize ? true : false;
}
template <typename T>
void MyStack<T>::clearStack()
{
	m_iTop = 0;
	
	
}

template <typename T>
int MyStack<T>::stackLengh()
{
	return m_iTop;
}

template <typename T>
bool MyStack<T>::push(T ele)
{
	if (stackFull())
		return false;
	m_iTop++;
	m_TBuffer[m_iTop] = ele;   //Õ»µÄÔ­Àí
	
	return true;
}
template <typename T>
T MyStack<T>::pop(T& ele)
{
	if (stackEmpty())
		return 0;
	return m_TBuffer[m_iTop--];
}

template <typename T>
void MyStack<T>::stackTraverse()
{
	for (int i = m_iTop-1; i >= 0; i--)
	{
		//m_TBuffer[i].PrintInfo();
		cout << m_TBuffer[i];
	}
	cout << endl;
}



#endif // !MYSTACK_H
