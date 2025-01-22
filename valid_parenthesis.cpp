
// question from leetcode for valid parenthesis

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
        string s;
        cout<<"enter string = ";
        cin>>s;
        int i,k=0;
        bool c=true;
        stack <char>st;
        char x;
        for(i=0;i<s.size();i++)
        {
         if(s[i]=='(' || s[i]=='{' || s[i]=='[')
         {
            st.push(s[i]);
         } 
         else if(s[i]==')')
         {
          if(!st.empty() && st.top()=='(')
          {
          st.pop();
          }
          else{
            c=false;
            break;
          }
         }
         else if(s[i]=='}')
         {
          if(!st.empty() && st.top()=='{')
          {
          st.pop();
          }
          else{
            c=false;
            break;
          }
         }
         else if(s[i]==']')
         {
          if(!st.empty()  && st.top()=='[')
          {
          st.pop();
          }
          else{
            c=false;
            break;
          }
         }
         else{
          c=false;
          break;
         }
        }
        if(st.empty()!=true)
        {
          c=false;
        }
        cout<<"answer = "<<c;
        }
