
#include "pch.h"
#include <iostream>
#include <ctime>
#include <experimental/filesystem>
NodeList *temp = new NodeList;
NodeList *p;

//创建链表
NodeList *CreatList(NodeList *head,int Length)
{
	
	for(int i=0;i<Length;i++)
	{
		p = new NodeList;
		p->value = rand();
		p->id = i+1;
		if(i==0)
		{		
			temp = p;
			head = temp;
		}else
		{
			p->Prev = temp;
			temp->next = p;
			temp = p;
		}
	}
	return head;
}
//输出链表
void Search_list_next(NodeList *head)
{
	while(head!=NULL)
	{
		std::cout << head->value << "\t";
		head = head->next;
	}
}
//查找元素
NodeList *Search_Value_in_List(NodeList *head,int target)
{
	while(head!=NULL&&head->value!=target)
	{
		head = head->next;
	}
	return head;
}
//插入元素
NodeList *Insert_List(NodeList *head,NodeList *value)
{
	int i = 1;
	value->next = head;
	if(head!=NULL)
	{
		head->Prev = value;
	}
	head = value;
	while(head!=NULL)
	{
		head->id = i;
		i = i + 1;
		head = head->next;
	}
	return value;
}
//删除元素
NodeList *Delete_List(NodeList *head,NodeList *value)
{
	if(value->next!=NULL)
	{
		if(value->Prev!=NULL)
		{
			value->next->Prev = value->Prev;
		}else
		{
			value->next->Prev = NULL;
			head = value->next;
		}
	}
	if(value->Prev!=NULL)
	{
		if (value->next != NULL)
		{
			value->Prev->next = value->next;
		}else
		{
			value->Prev->next = NULL;
		}
	}
	return head;
}

//排序
void List_Sort(NodeList *head)
{
	NodeList *key;
	NodeList *temp;
	head = head->next;
	while(head!=NULL)
	{
		key = head;
		temp = head->Prev;
		while(temp!=NULL&&(temp->value)>key->value)
		{
			
		}
	}
}
int main()
{
	srand((unsigned)time(0));
	NodeList *head = new NodeList;
	int Length;
	std::cout << "输入长度" << std::endl;
	std::cin >> Length;
	head = CreatList(head, Length);
	std::cout << "正向输出" << std::endl;
	Search_list_next(head);
//***********************************************************
	int value;
	NodeList *Insert=new NodeList;
	std::cout << "请输入数值（插入）" << std::endl;
	std::cin >> value;
	Insert->value = value;
	head = Insert_List(head, Insert);
//*************************************************************
	std::cout << "正向输出" << std::endl;
	Search_list_next(head);
//**********************************************************
	std::cout << "请输入要删除的值" << std::endl;
	std::cin >> value;
	Insert = Search_Value_in_List(head,value);
	if(Insert==NULL)
	{
		std::cout << "没有找到" << std::endl;
	}else
	{
		head=Delete_List(head,Insert);
	}
	std::cout << "正向输出" << std::endl;
	Search_list_next(head);
//*************************************************************);
}

