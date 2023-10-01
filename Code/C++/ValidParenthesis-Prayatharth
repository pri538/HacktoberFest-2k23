
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    std::cout << "Enter a parenthesis string to check \n" << std::endl;
    string s;
    cin>>s;

    stack<char> st;
    
    for(int i=0;i<s.length();i++)
    {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{' )
                st.push(s[i]);
            else if(st.empty()){
                cout<<"false";
                
                return 0;}
            else if(s[i]==')' && st.top()=='(')
                st.pop();
            else if(s[i]==']' && st.top()=='[')
                st.pop();
            else if(s[i]=='}' && st.top()=='{')
                st.pop();
            else{

                cout<<"false";
                break;
    }
}

if(st.empty()==true){
cout<<"true";

}else{
        cout<<"false";
    }
    
    return 0;
    

}
