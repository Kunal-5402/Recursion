#include<iostream>
#include<vector>
using namespace std;
void print_subsequence(vector<int> v)
{
    for(auto it : v) cout<<it<<" ";
    cout<<endl;
}
void find_subsequence(int index,vector<int> v,vector<int> &sub_sequence)
{
    if(index>=v.size())
    {
        print_subsequence(sub_sequence);
        return;
    }
    sub_sequence.push_back(v[index]);
    find_subsequence(index+1,v,sub_sequence);
    sub_sequence.pop_back();
    find_subsequence(index+1,v,sub_sequence);
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<int> sub_sequence;
    find_subsequence(0,v,sub_sequence);
    return 0;
}