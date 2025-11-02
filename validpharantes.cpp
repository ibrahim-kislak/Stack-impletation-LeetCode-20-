#include <iostream>
#include <string>
#include "stacks.h"
using namespace std;

bool isValid(string s ){
    Stack stack;
    for (char c: s){
        if (c=='(' || c=='[' || c=='{')
        {
            stack.push(c);
        }

        else if(c == ')' || c == '}' || c == ']'){if(stack.isEmpty())return false;}

        char topC=stack.peek();
        if((c == ')' && topC != '(') || (c == '}' && topC != '{') ||(c == ']' && topC != '[')){
            return false;
        }
        stack.pop();
        
    }
    return stack.isEmpty();
}

int main() {
    string sample1="()[]{}";
    string sample2= "([{}])";
    string sample3="(()";

    cout<<"Sample 1: "<<(isValid(sample1) ? "Valid": "Not Valid")<<endl;
    cout<<"Sample 2: "<<(isValid(sample2) ? "Valid": "Not Valid")<<endl;
    cout<<"Sample 3: "<<(isValid(sample3) ? "Valid": "Not Valid")<<endl;
    

    return 0;
}