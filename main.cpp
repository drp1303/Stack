#include "Stack.cpp"
#include<iostream>

using namespace std;

int main()
{
	Stack obj;
	obj.push(1);
	obj.push(2);
	obj.push(3);
	obj.print();
	cout<<"\nStack size: "<<obj.size();
	cout<<"\n";
	cout<<"\nStack pop: Number: "<<obj.pop();
	cout<<"\n";
	cout<<"\nStack size: "<<obj.size();
	cout<<"\n";
	obj.print();
	cout<<"\nStack peep: "<<obj.peek();
	obj.print();
}
