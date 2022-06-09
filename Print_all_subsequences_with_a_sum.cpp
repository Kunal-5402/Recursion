#include <iostream>
#include <vector>
using namespace std;
void subsequence_sum(int index, int sum, int target_sum, vector<int> &subsequence, vector<int> v)
{
    if(index==v.size()){
        if(sum==target_sum){
            for(auto it : subsequence) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    subsequence.push_back(v[index]);
    sum=sum+v[index];
    subsequence_sum(index+1,sum,target_sum,subsequence,v);
    sum=sum-v[index];
    subsequence.pop_back();
    subsequence_sum(index+1,sum,target_sum,subsequence,v);
}
int main()
{
    vector<int> v = {1, 2, 1};
    vector<int> subsequence;
    subsequence_sum(0, 0, 2, subsequence, v);
    return 0;
}