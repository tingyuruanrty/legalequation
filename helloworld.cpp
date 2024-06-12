#include<iostream>
#include <stack>
#include <vector>

using namespace std;
int main()
{

    string str = "{7[6*(4+2)]}";
    //bool balanced = false;


    stack<char> new_stack;
    for(size_t i =0; i < str.size(); i++)
    {

        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            new_stack.push(str[i]);
        }

        if(str[i] == ')' && new_stack.top() == '(')
        {
            new_stack.pop();
        }

        if(str[i] == ']' && new_stack.top() == '[')
        {
            new_stack.pop();
        }

        if(str[i] == '}' && new_stack.top() == '{')
        {
            new_stack.pop();
        }
    }

    if (new_stack.empty()){
        cout<< "its balanced\n";
    }else{
        cout << "its not balanced\n";
    }


    cout<<"done\n";
}