#include<iostream>
#include<string>
using namespace std;
bool check_palindrome(string s,int i)
{
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return check_palindrome(s,i+1);
}
int main()
{
    string s;
    cin>>s;
    if(check_palindrome(s,0)) cout<<"The string is palindrome"<<endl;
    else cout<<"The string is not palindrome"<<endl;
    return 0;
}