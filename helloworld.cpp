#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> put_brackets_in_stack(const string& input){
    stack<char> brackets;
    for(const char& holder:input)
    {
        if(holder=='('||holder=='['||holder =='{')
        {brackets.push(holder);}
    }
    return brackets;
}

bool not_match_or_empty (char a, char b){}


bool legal(const string& input)
{
    //the stack is used to hold the brackets
    //leverage late in first out
    stack<char> brackets= put_brackets_in_stack(input);


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

    
    return brackets.empty();
}

int main(){
    while(true){
    cout<<"enter equition"<<endl;

    string input;
    getline(cin,input);

    if(legal(input)){cout<<"legal"<<endl;}
    else{cout<<"illegal"<<endl;}}
}