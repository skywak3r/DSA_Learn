#ifndef LIST_H
#define LIST_H
template<typename T>
class List
{
public:
	List(int size);  
	~List();			
	void ClearList();
	bool ListEmpty();
	int ListLength();
	bool GetElement(int i,T &e);
	int LocatElem(T &e);
	bool PriorElem(T &current, T &pre);
	bool NextElem(T &current, T &next);
	void ListTraverse();//default have PrintInfo()
	bool ListInsert(int i,T &ele);
	bool ListDelete(int i, T &ele);
private:
	T *m_tArr;
	int m_iSize;
	int m_iLength;


};
template<typename T>
List<T>::List(int size)
{
	m_iSize = size;
	m_tArr = new T[m_iSize];
	m_iLength = 0;

}
template<typename T>
List<T>::~List()
{
	delete[]m_tArr;
	m_tArr = NULL;
}
template<typename T>
void List<T>::ClearList()
{
	m_iLength = 0;
}
template<typename T>
bool List<T>::ListEmpty()
{
	return m_iLength == 0 ? true : false;
}
template<typename T>
int List<T>::ListLength()
{
	return m_iLength;
}
template<typename T>
bool List<T>::GetElement(int i, T &e)
{
	if (i<0 || i>m_iLength)
		return false;
	e = m_tArr[i];
	return true;
}
template<typename T>
int List<T>::LocatElem(T &e)
{
	for (int i = 1; i <= m_iLength; i++)
	{
		if (m_tArr[i] == e)
		{
			return i;
		}
	}
	return -1;  
}
template<typename T>
bool List<T>::PriorElem(T &current, T &pre)
{
	int temp = LocatElem(current);
	if (temp == -1||temp==0)
	{
		return false;
	} 
	
	pre = m_tArr[temp - 1];
	return true;
}
template<typename T>

bool List<T>::NextElem(T &current, T &next)
{
	int temp = LocatElem(current);
	if (temp == -1 || temp == m_iLength)
	{
		return false;
	}

	next = m_tArr[temp + 1];
	return true;
}
template<typename T>
void List<T>::ListTraverse()
{
	for (int i = 1; i <= m_iLength; i++)
		m_tArr[i].PrintInfo();
}
template<typename T>
bool List<T>::ListInsert(int i, T &ele)
{
	if (i < 0)
	{
		cout << "iillgule" << endl;
		return false;
	}
	if (m_iLength + 1 > m_iSize)
	{
		cout << "memory not enough" << endl;
		return false;
	}
	for (int k = m_iLength; k >=i; k--)
	{
		
		m_tArr[k+1] = m_tArr[k];
		
	}
	m_tArr[i] = ele;
	m_iLength++;
	return true;
}
template<typename T>
bool List<T>::ListDelete(int i, T &ele)
{
	if (i < 0||i>=m_iLength)
		return 0;
	ele = m_tArr[i];
	for (int k = i; k <= m_iLength; k++)
	{
		m_tArr[k] = m_tArr[k+1]; 
	}
	
	
	m_iLength--;

}

#endif // !List_H
