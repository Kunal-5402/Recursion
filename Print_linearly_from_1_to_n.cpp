/* 
this is backtracking

                print_n(3)
                /
            print_n(2)
            /
        print_n(1)
        /
    print_n(0)---base condition(resursion stops)
    
*/
#include<iostream>
using namespace std;
void print_n(int n)
{
    if(!n) return;
    print_n(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    print_n(n);
    return 0;
}