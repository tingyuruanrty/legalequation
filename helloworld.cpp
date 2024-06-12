#include <iostream>
#include <stack>
#include <string>
using namespace std;

int getposition(stack<char>& a, char lookingfor){
    if(a.top()==lookingfor){
        return 1;
    }
    else{
        a.pop();
        return 1+getposition(a,lookingfor);
    }
}

bool legal(stack<char>& a){
    if(getposition(a,'}')<getposition(a,']')&&
    getposition(a,']')<getposition(a,')')&&
    getposition(a,')')<getposition(a,'(')&&
    getposition(a,'(')<getposition(a,'[')&&
    getposition(a,'[')<getposition(a,'{')){return true;}
    else {return false;}
    
}

int main(){
    stack<char> equition;
    string input;
    char lookingfor;

    cout<<"enter equition"<<endl;
    getline(cin,input);
    // cout<<"enter what are you looking for"<<endl;
    // cin>>lookingfor;

    for(char& holder:input){
        equition.push(holder);
    }

    if(legal(equition)){cout<<"equition is legal";}
    else{cout<<"equition is ilegal";}

    // int result= getposition(equition,lookingfor);
    // cout<<result;
    
}