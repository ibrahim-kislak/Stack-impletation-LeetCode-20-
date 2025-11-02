#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string val;
    Node *next;
    Node(string s):val(s),next(nullptr){}
};

class Stack {

    private:
    Node *top;
    public:
    Stack():top(nullptr){}

    bool isEmpty(){
        return top==nullptr; 
    }

    void push(string s){
       
        Node *newnode=new Node(s);
        newnode->next=top;
        top=newnode;
        cout<<"Push: "<<newnode->val<<endl;
        
    }
    void pop(){
        if (isEmpty()){cerr<<"ığın Boş"<<endl;return;}
        Node *temp=top;
        string poppedval=temp->val;
        top=top->next;
        delete temp;
        cout<<"Pop: "<<poppedval<<endl;


    }
    string peek(){
        if (isEmpty()){cerr<<"ığın Boş"<<endl;return "";}
       return top->val;
    }

    ~Stack(){
        while(!isEmpty()){pop();}
    }
};

int main(){
    Stack stack;
    cout<<"Yığın Boş mu : "<<stack.isEmpty()<<endl;

    stack.push("A");
    stack.push("B");
    stack.push("C");

    cout<<endl;

    stack.pop();
    cout<<"Peek: "<<stack.peek()<<endl;

}