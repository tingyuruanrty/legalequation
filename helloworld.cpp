#include <iostream>
#include <stack>
#include <string>
using namespace std;

void put_brackets_in_stack(char holder,stack<char>& brackets){
    if(holder=='('||holder=='['||holder =='{')
    {brackets.push(holder);}
}

bool not_match_or_empty (char a, stack<char>& b){
    if(a==')'&&(b.empty()||b.top()!='('))
    {return true;}
    else if(a == ']' && (b.empty()||b.top()!='['))
    {return true;}
    else if(a == '}' && (b.empty()||b.top()!='{'))
    {return true;}
    else{return false;}
}

bool legal(const string& input)
{
    stack<char> brackets;
    for(const char& holder:input)
    {
        put_brackets_in_stack(holder,brackets);
        if(holder==')'||holder==']'||holder=='}')
        {
            if (not_match_or_empty(holder,brackets))
            {return false;}
            else 
            {brackets.pop();}
        }
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