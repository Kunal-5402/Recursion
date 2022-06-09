//Type : to print only one subsequence out of all
#include<iostream>
#include<vector>
using namespace std;
bool print_subsequence(int index,int sum,int target_sum,vector<int> &subsequence,vector<int> v){
    if(index==v.size()){
        if(sum==target_sum){
            for(auto it: subsequence) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }
    subsequence.push_back(v[index]);
    sum=sum+v[index];
    if(print_subsequence(index+1,sum,target_sum,subsequence,v)) return true;
    sum=sum-v[index];
    subsequence.pop_back();
    if(print_subsequence(index+1,sum,target_sum,subsequence,v)) return true;
    return false;
}
int main()
{
    vector<int> v={1,2,3};
    vector<int> subsequence;
    print_subsequence(0,0,2,subsequence,v);
    return 0;
}