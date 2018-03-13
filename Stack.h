
class Stack
{
	int top;
	int count;
	int maxsize;
	int array[];
	
	public:
		Stack();
		int size();
		bool isEmpty();
		void push(int x);
		int pop();
		int peek();
		void print();
		
};
