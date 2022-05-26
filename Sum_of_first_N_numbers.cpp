#include<iostream>
using namespace std;
//functional recursion
int find_sum(int n)
{
    if(n==0) return 0;
    return n + find_sum(n-1);
}
//parameterised resursion
void find_sum(int n,int sum)
{
    if(!n)
    {
        cout<<sum<<endl;
        return;
    }
    find_sum(n-1,sum+n);
}
int main()
{
    int n,sum=0;
    cin>>n;
    find_sum(n,sum);
    cout<<find_sum(n)<<endl;
    return 0;
}