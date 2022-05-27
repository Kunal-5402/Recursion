#include<iostream>
using namespace std;
int find_reverse(int n,int reverse){
    if(!n) return reverse;
    return find_reverse(n/10,reverse*10+(n%10));
}
int main(){
    int n;
    cin>>n;
    cout<<find_reverse(n,0)<<endl;
    return 0;
}