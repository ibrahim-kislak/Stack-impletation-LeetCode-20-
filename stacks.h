#pragma once

#include <iostream>
#include <stdexcept>


struct Node
{
    char val;
    Node *next;
   
    Node(char c) : val(c), next(nullptr) {}
};

class Stack
{
private:
    Node *top;

public:
   
    Stack() : top(nullptr) {}

 
    bool isEmpty() const { 
        return top == nullptr;
    }

    void push(char c)
    {
        Node *newnode = new Node(c);
        newnode->next = top;
        top = newnode;
    }

   
    void pop()
    {
        if (isEmpty())
        {
           
            std::cerr << "Yığın boş!" << std::endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    char peek() const
    {
        if (isEmpty())
        {
            
            std::cerr << "Yığın boş!" << std::endl;
            return '\0'; 
        }
        return top->val;
    }


    ~Stack()
    {
        while (!isEmpty())
            pop();
    }
};
