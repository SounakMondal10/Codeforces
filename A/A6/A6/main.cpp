#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    vector<int> nums;
    
    for(int i=0;i<n;i++)
    {   int j;
        cin>>j;
        nums.push_back(j);
    }
    
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
return 0;
}
