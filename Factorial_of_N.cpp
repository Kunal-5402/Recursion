#include<iostream>
using namespace std;
int find_factorial(int n)
{
    if(!n) return 1;
    return n * find_factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<find_factorial(n)<<endl;
    return 0;
}