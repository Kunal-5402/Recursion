//Type : to count all the subsequences which met the condition
#include<iostream>
#include<vector>
using namespace std;
int print_subsequence(int index,int sum,int target_sum,vector<int> v){
    if(index==v.size()){
        if(sum==target_sum) return 1;
        else return 0;
    }
    sum=sum+v[index];
    int l = print_subsequence(index+1,sum,target_sum,v);
    sum=sum-v[index];
    int r = print_subsequence(index+1,sum,target_sum,v);
    return l+r; 
}
int main()
{
    vector<int> v={1,2,1};
    cout<<print_subsequence(0,0,2,v)<<endl;
    return 0;
}
