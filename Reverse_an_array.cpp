#include<iostream>
#include<array>
using namespace std;
void reverse_array(array<int,5> &a,int i)
{
    if(i>=a.size()/2) return;
    swap(a[i],a[a.size()-i-1]);
    return reverse_array(a,i+1);
}
void reverse_array(array<int,5> &a,int low,int high)
{
    if(low>=high) return;
    swap(a[low],a[high]);
    return reverse_array(a,low+1,high-1);
}
int main()
{
    array<int,5> a = {1,2,3,4,5};
    reverse_array(a,0);
    for(auto it : a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}