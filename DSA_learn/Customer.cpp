#include "Customer.h"
#include<iostream>
using namespace std;

Customer::Customer(string _name, int _age)
{
	m_iAge = _age;
	m_strName = _name;
}
Customer::~Customer()
{
}

void Customer::PrintInfo()
{	
	cout << m_iAge << endl;
	cout << m_strName << endl;
	cout << endl;
	
}
bool operator==(const Customer &c1, const Customer &c2)
{
	bool a;
	a= c1.m_iAge == c2.m_iAge&&c1.m_strName == c2.m_strName;
	return a;
}
//bool Customer::operator==(const Customer c)
//{
//	return this->m_iAge == c.m_iAge
//		&& this->m_strName == c.m_strName;
//
//}
