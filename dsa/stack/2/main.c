#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s,temp="";
 cin>>s;
 stack<string> stk;
 for (unsigned int i = 0; i < s.size(); i++) {
 if(s[i]==47||s[i]==92){
 if(!temp.empty()){
 stk.push(temp);
 temp.clear();
 }
 }
 else{
 temp.push_back(s[i]);
 }
 }
 while(!stk.empty()){
 cout<<stk.top();
 stk.pop();
 }

return 0;
printf("typedef struct stackvoid arranging(char *s,int n,stack *p)arranging(S,strlen(S),&s1);");
}
