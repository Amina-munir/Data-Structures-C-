//Stack Implementation using Array
#include <iostream>
using namespace std;

void push(int val);
void pop();
void isempty();
void isfull();
void printeven();
void popval();
void display();
int stack[100], n=100, top=-1,i = 0 , popstack[100];


int main()
{
    int ch, val;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Check that stack is empty or not?"<<endl;
    cout<<"4) Check that stack is full or not?"<<endl;
    cout<<"5) Display Even number in stack. "<<endl; 
    cout<<"6) Display all pop elements"<<endl;
    cout<<"7) Display stack"<<endl;
    cout<<"8) Exit"<<endl;
    
	do 
{
    cout<<"\nEnter choice: "<<endl;
    cin>>ch;
switch(ch) 
{
     case 1: 
{
     cout<<"Enter value to be pushed:"<<endl;
     cin>>val;
     push(val);
     break;
}
case 2: 
{
     pop();
     break;
}
case 3: 
{
	isempty();
    
    break;
}
case 4:
{
	isfull();
     
     break;
}
case 5:
{
	printeven();
     break;
}
case 6:
{
    popval();
     break;
}
case 7:
{
    display();
    break;
}
case 8:
{
    cout<<"Exit"<<endl;
    break;
}

default: 
    {
       cout<<"Invalid Choice"<<endl;
    }
  }
} 
     while(ch!=8);
     return 0;
}

    //push call
    void push(int val)
{
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;

   else
    {
        top++;
        stack[top]=val;
    }
}
   //pop call

    void pop()
  { 
    if(top<=-1)
    cout<<"Stack Underflow"<<endl;
    else
  { 
   popstack[i] = stack[top];
   i++;
   cout<<"The popped element is "<< stack[top] <<endl;
   top--; 
  }
}

   //check stack empty or not??
	bool empty()
{
     if(top==-1)
     return true;
     else
     return false;
      
}
void isempty()
   {
    if (empty()==true)
     cout<<"Stack is empty"<<endl;
     else
     cout<<"Stack is not empty"<<endl;
	}
		
//isfull function
void isfull()
{
	if(top>=n-1)
   cout<<"Stack is full"<<endl;
   else
   cout<<"Stack not full"<<endl;
}

   //all poped values
   void popval()
{
    if (i > 0) 
	{
        cout << "Popped values: ";
        for (int j = i - 1; j >= 0; j--)
	 {
            cout << popstack[j] << " ";
     }
     
    }
    else 
	{
        cout << "No values have been popped yet." << endl;
    }
}

   //void checkeven()
   void printeven()
{
    cout << "Even numbers in stack: ";
    for(int k=top; k>=0; k--)
    {
        if(stack[k] % 2 == 0)
        {
            cout << stack[k] << " ";
        }
    }
    cout << endl;
}

   //display
   void display()
{
   if(top>=0)
{ 
   cout<<"Stack elements are:";
   for(int i=top; i>=0; i--)
   cout<<stack[i]<<" ";
   cout<<endl;
}
   else
   cout<<"Stack is empty";
}


