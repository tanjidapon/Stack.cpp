#include<iostream>
using namespace std;
class Stack
{
private:
    int top;
    int arr[5];

    public:
        Stack()
        {
            top= -1;
            for(int i=0;i<5;i++)
            {
                arr[i]=0;
            }
        }
        bool isEmpty()
        {
            if(top== -1)
                return true;
            else
                return false;
        }

         bool isFull()
        {
            if(top== 4)
                return true;
            else
                return false;
        }
        void push(int value)
        {
            if(isFull())
            {

                cout<<arr[0]<<" replaced by " <<value<<endl;
                arr[0]=value;
            }
            else
            {
                top++;
                arr[top]=value;
            }
        }
        int pop()
        {
            if(isEmpty())
            {
                cout<<"stack underflow"<<endl;
                return 0;
            }
            else
            {
                cout<<arr[top]<<" popped"<<endl;
                int popValue= arr[top];
                arr[top]=0;
                top--;

                return popValue;
            }
        }
        int peek()
        {
            if(isEmpty())
            {
                cout<<"stack underflow"<<endl;
                return 0;
            }
            else
            {
                cout<<arr[top]<<" is the top item"<<endl;
                return arr[top];
            }
        }

};

int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);
    stack.pop();
    stack.peek();
    stack.push(70);
    cout<<"70 pushed"<<endl;
    stack.peek();

    return 0;

}
