#include <iostream>

using namespace std;



class Stack {
	int top;
    	int * sptr;


public:
    int size;

	Stack() { 
        size = 5;
        top = -1;
        sptr = new int[size];
    }

    Stack(int size){
        this ->size = size;
        top = -1;
        sptr = new int[size];
    }

	bool push(int x){
        if (top >= (size - 1)) {
		    cout << "Stack Overflow";
		    return false;
	    }
	    else {
            ++top;
		    sptr[top] = x;//sptr[++top] = x;
		    cout << x << " pushed into stack\n";
		    return true;
	    }
    }

	int pop(){
        if (top < 0) {
		    cout << "Stack Underflow";
		    return 0;
	    }
	    else {
		    int x = sptr[top];//int x = sptr[top--]
            --top;
		    return x;
	    }    
    }
	int peek(){
        if (top < 0) {
		    cout << "Stack is Empty";
		    return 0;
	    }
	    else {
		    int x = sptr[top];
		    return x;
	    }
    }

	bool isEmpty(){
        if (top == -1)
            return true;
        else
            return false;        
    }

    void print() {
        cout<<"THE STACK IS : ";
        for(int i = top ; i>=0 ; i--){
            cout<<sptr[i]<<" ";
        }
        cout<<endl;
    }


    ~Stack() {
        delete[] sptr;
    }

};





int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
    s.push(40);
	s.push(50);
	cout << s.pop() << " Popped from stack\n";
	
	
	cout << "Top element is : " << s.peek() << endl;
	
	s.print();

	return 0;
}
