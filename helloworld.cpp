#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool legal(const string& input)
{
    //the stack is used to hold the brackets
    stack<char> brackets;
    for(const char& holder:input)
    {
        //push the bracket founded in string in stack
        if(holder=='('||holder=='['||holder =='{')
        {brackets.push(holder);}
    }
    for(const char& holder:input)
    {
        if (holder == ')' && (brackets.empty()||brackets.top()!='('))
        {return false;}
        else if(holder == ')' && brackets.top()=='(')
        {brackets.pop();}

        if (holder == ']' && (brackets.empty()||brackets.top()!='['))
        {return false;}
        else if(holder == ']' && brackets.top()=='[')
        {brackets.pop();}

        if (holder == '}' && (brackets.empty()||brackets.top()!='{'))
        {return false;}
        else if (holder == '}' && brackets.top()=='{')
        {brackets.pop();}
    }
    if(!brackets.empty()){return false;}
    return true;
}

int main(){
    string input;
    cout<<"enter equition"<<endl;
    getline(cin,input);
    if(legal(input)){cout<<"legal"<<endl;}
    else{cout<<"illegal"<<endl;}
}