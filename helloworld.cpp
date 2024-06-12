#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<char> brackets;
    string input;

    cout<<"enter equition"<<endl;
    getline(cin,input);

    for(char& holder:input){
        if(holder=='('||holder=='['||holder =='{')
        {
            brackets.push(holder);
        }
        if (holder == ')' && brackets.top()=='(')
        {
            brackets.pop();
        }
        if (holder == ']' && brackets.top()=='[')
        {
            brackets.pop();
        }
        if (holder == '}' && brackets.top()=='{')
        {
            brackets.pop();
        }
        
    }

    if(brackets.empty()){
        cout<<"legal"<<endl;
    }else{
        cout<<"ilegal"<<endl;
    }
    
}