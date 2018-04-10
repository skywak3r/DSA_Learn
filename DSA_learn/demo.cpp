//#include"MyQueue.h"
//#include"Customer.h"
//#include"MyStack.h"
//#include"List.h"
//#include"List_Link.h"
//
//#define BINARY 2
//#define OCTONARY 8
//#define HEXADECIMAL 16
//using namespace std;
//void menu(List_Link *list);
//void CreatPerson(List_Link *list);
//void DeletePerson(int i, List_Link *list);
//void freePerson();
//
//
//void main()
//{
//	//MyStack<int> sta(5);
//	//int m = 1532;
//	//int mod = 0;
//	//while (m != 0)
//	//{
//	//	mod = m%OCTONARY;
//	//	sta.push(mod);
//	//	m = m / 8;
//	//}
//	//sta.stackTraverse();
//	/*MyQueue<Customer> que(4);
//	Customer c1("zhangsan", 10);
//	Customer c2("lisi", 20);
//	Customer c3("wangwu", 30);
//	sta.push(c1);
//	sta.push(c2);
//	sta.push(c3);
//	sta.stackTraverse();
//	
//	cout << sta.stackLengh() << endl;*/
//	/*que.EnQueue(c1);
//	que.EnQueue(c2);
//	que.EnQueue(c3);
//	que.QueueTraverse();*/
//
//	//int i, j, k,flag=0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//flag = 1;
//	//for (j = 0; j<7; j++)
//	//{
//	//printf("*");
//	//if (j >= 2 - i&&flag!=0)
//	//{
//	//for (k = 0; k < 2 * i + 1; j++, k++)
//	//{
//	//flag = 0;
//	//printf(" ");
//	//}
//	//}
//
//	//}
//
//
//
//	//printf("\n");
//	//}
//	
//	////栈括号匹配
//	//MyStack<char> *pStack=new MyStack<char>(30);
//	//MyStack<char> *pNeedStack = new MyStack<char>(30);
//	//char currentNeed = 0;
//	//
//	//char str[] = "()[()[][][][][][][]()]";
//	//for (int i = 0; i < strlen(str); i++)
//	//{
//	//	if (str[i] != currentNeed)
//	//	{
//	//		pStack->push(str[i]);
//	//		switch (str[i])
//
//	//		{
//	//		case '[':
//	//			
//	//			if (currentNeed != 0)
//	//			{
//	//				pNeedStack->push(currentNeed);
//	//			}
//	//			currentNeed = ']';
//	//			
//	//			break;
//	//		case '(':
//	//			
//	//			if (currentNeed != 0)
//	//			{
//	//				pNeedStack->push(currentNeed);
//	//			}
//	//			currentNeed = ')';
//
//	//			
//	//			break;
//
//	//		default:
//	//			cout << "不匹配" << endl;
//	//			system("pause");
//
//	//			return;
//	//		}
//	//	}
//
//	//	else
//	//	{	
//	//		char elem;
//	//		pStack->pop(elem);
//	//		currentNeed=pNeedStack->pop(currentNeed);
//
//	//	}
//	//	
//	//}
//	//	if (pStack->stackEmpty())
//	//	{
//	//		cout << "匹配" << endl;
//	//	}
//	//	else
//	//	{
//	//		cout << "不匹配" << endl;
//	//	}
////
//	//List<Customer>  list(10); 
//	//Customer c1("zhangsan", 10);
//	//Customer c2("lisi", 20);
//	//Customer c3("wangwu", 30);
//	//Customer c4;
//	//List<int> list(10);
//	//int c1 = 1;
//	//int c2 = 2;
//	//int c3 = 520;
//	//int c4 = 4;
//	//Customer c4;
//	//list.ListInsert(1, c1);
//	//list.ListInsert(2, c2);
//	//list.ListInsert(3, c3);
//	//cout<<list.LocatElem(c2)<<endl;
//	//list.ListTraverse();
//
////-------------------------------------------------------------------------
////-------------------通讯录----------------------
//
//
//	List_Link *list=new List_Link;
//
//	menu(list);
//
//	
//	
//	
//	
//	system("pause");
//}
//void menu(List_Link *list)
//{
//	int code=0;
//	int i = 0;
//	while (code!=4)
//	{
//		cout << "1.新建联系人" << endl;
//		cout << "2.删除联系人（序号）" << endl;
//		cout << "3.浏览通讯记录" << endl;
//		cout << "4.退出菜单" << endl;
//		cout << ">>";
//		cin >> code;
//		switch (code)
//		{
//		case 1:
//			cout << "用户指令------>新建联系人" << endl;
//			CreatPerson(list);
//			break;
//		case 2:
//			cout << "用户指令------>删除联系人" << endl;
//			cout << "输入删除的序号" << endl;
//			cin >> i ;
//			cout << endl;
//			DeletePerson(i,list);
//			break;
//		case 3:
//			cout << "用户指令------>浏览联系人" << endl;
//			list->ListTraverse();
//			break;
//		case 4:
//			cout << "用户指令------>退出菜单" << endl;
//			cout << endl;
//			break;
//		
//		}
//
//	}
//	delete list;
//	list = NULL;
//}
//
//void CreatPerson(List_Link *list)
//{
//	Node node;
//	Person person;
//	cout << "名字" << endl;
//	cin >> person.name;
//	cout << "电话" << endl;
//	cin >> person.phone;
//	node.data = person;
//	list->ListInsertTail(&node);
//
//}
//void DeletePerson(int i,List_Link *list)
//{
//	Node temp;
//	list->ListDelete(i, &temp);
//
//}