#include<iostream>
#include<vector>
using namespace std;
void print_subsequence(vector<int> v)
{
    for(auto it : v) cout<<it<<" ";
    cout<<endl;
}
void find_target_sum_subsequence(int index,vector<int> v,vector<int> sub_sequence,int sum,int target)
{
    if(index>=v.size())
    {
        if(sum==target)
            print_subsequence(sub_sequence);
        return;
    }
    sub_sequence.push_back(v[index]);
    sum = sum + v[index];
    find_target_sum_subsequence(index+1,v,sub_sequence,sum,target);
    sub_sequence.pop_back();
    sum = sum - v[index];
    find_target_sum_subsequence(index+1,v,sub_sequence,sum,target);
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<int> sub_sequence;
    find_target_sum_subsequence(0,v,sub_sequence,0,5);
    return 0;
}