#pragma once // Sadece bir kere dahil edilmesini sağlar

#include <iostream>
#include <stdexcept>

// Sadece char tutan Node yapısı
struct Node
{
    char val;
    Node *next;
    // Yapıcı (constructor) inline olarak burada tanımlı
    Node(char c) : val(c), next(nullptr) {}
};

class Stack
{
private:
    Node *top;

public:
    // Yapıcı
    Stack() : top(nullptr) {}

    // Metot Tanımları ve Kodları
    bool isEmpty() const { // const eklemek daha güvenlidir
        return top == nullptr;
    }

    void push(char c)
    {
        Node *newnode = new Node(c);
        newnode->next = top;
        top = newnode;
    }

    // pop işlemi artık döndürülecek bir değer olmadığı için void olabilir
    void pop()
    {
        if (isEmpty())
        {
            // cerr kullanmak yerine exception fırlatmak daha C++ usulü ve güvenlidir.
            // throw std::runtime_error("Stack is empty!"); 
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
            // throw std::runtime_error("Stack is empty!"); 
            std::cerr << "Yığın boş!" << std::endl;
            return '\0'; 
        }
        return top->val;
    }

    // Yıkıcı (Destructor)
    ~Stack()
    {
        while (!isEmpty())
            pop();
    }
};