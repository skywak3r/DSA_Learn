#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<string>
using namespace std;
class Customer
{
	friend bool operator == (const Customer &c1, const Customer &c2);
public:
	Customer(string _name="", int _age=0);  
	 ~Customer();
	void PrintInfo();
	

private:
	string m_strName;
	int m_iAge;
	};



#endif // !CUSTOMER_H
