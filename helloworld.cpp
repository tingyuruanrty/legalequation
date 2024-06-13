
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool match_or_not(char character1, char character2) {
    if (character1 == '(' && character2 == ')') 
    {return true;}

    else if (character1 == '{' && character2 == '}') 
    {return true;}

    else if (character1 == '[' && character2 == ']') 
    {return true;}
    return false;
}

bool are_parentheses_balanced(const string& expression) 
{
    stack<char> my_stack;
    for (char c : expression) {
        if (c == '(' || c == '{' || c == '[') 
        {my_stack.push(c);} 
        
        else if (c == ')' || c == '}' || c == ']') {
            if (my_stack.empty() || !match_or_not(my_stack.top(), c)) 
            {return false;}

            else 
            {my_stack.pop();}
        }
    }
    return my_stack.empty();
}

int main() 
{
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;

    if (are_parentheses_balanced(expression)) {
        cout << "The parentheses are balanced." << endl;
    } 
    else {
        cout << "The parentheses are not balanced." << endl;
    }
    return 0;
}
