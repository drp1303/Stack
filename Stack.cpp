#include "Stack.h"
#include<iostream>

using namespace std;

Stack::Stack()
{
	top = -1;
	maxsize = 101;
	array[maxsize];
}
bool Stack::isEmpty()
{
	if(top==-1)
		return true;
	else
		return false;
}

int Stack::size()
{
	return count;
}

void Stack::push(int x)
{
	if(top == maxsize-1)
	{
		cout<<"\n Error: Stack overflow";
		return;
	}
	array[++top]=x;
	count++;
	
}

int Stack::pop()
{
	if(isEmpty())
	{
		cout<<"\n Error: No element to pop";
		return 0;
	}
	count--;
	return array[top--];
}

int Stack::peek()
{
	return array[top];
}

void Stack::print()
{
	cout<<"\nStack : ";
	for(int i=0;i<size();i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<"\n";
}

