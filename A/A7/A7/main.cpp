#include <iostream>
using namespace std;

int main() {
    string s1,s2;

        cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]<97)
        {
            s1[i]+=32;
        }
        if(s2[i]<97)
        {
            s2[i]+=32;
        }
    }
    
    cout<<s1<<" "<<s2<<"\n";
    int ans;
    (s1>=s2?(s1>s2?ans=1:ans=0):ans=-1);
    cout<<ans;
return 0;
}
