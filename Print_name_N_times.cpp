#include<iostream>
using namespace std;
void print_name(int n)
{
    if(n==0) return;
    cout<<"KUNAL"<<endl;
    print_name(n-1);
}
int main()
{
    int n;
    cin>>n;
    print_name(n);
    return 0;
}