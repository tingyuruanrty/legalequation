#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<char> brackets;
    string input;

    cout<<"enter equition"<<endl;
    getline(cin,input);
    // cout<<"enter what are you looking for"<<endl;
    // cin>>lookingfor;

    for(char& holder:input){
        if(holder=='('||holder=='['||holder =='{')
        {
            brackets.push(holder);
        }
    }

    if(legal(equition)){cout<<"equition is legal";}
    else{cout<<"equition is ilegal";}

    // int result= getposition(equition,lookingfor);
    // cout<<result;
    
}