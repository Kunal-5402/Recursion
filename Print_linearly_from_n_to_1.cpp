#include<iostream>
using namespace std;
void print_n(int n)
{
    if(!n) return;
    cout<<n<<endl;
    print_n(n-1);
}
int main()
{
    int n;
    cin>>n;
    print_n(n);
    return 0;
}