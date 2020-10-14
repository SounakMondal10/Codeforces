#include<iostream>
using namespace std;

int main()
{
    int n=0;
    int na = 0;
    string g;
    
    cin>>n;
    cin>>g;
    
    for(int i=0;i<g.size();i++)
    {
            if(g[i]=='A')
            {
                na++;
            }

    }
    
    if(na>=n/2+1){
        cout<<"Anton";
    }
    else if((na==n/2)&&(n%2==0)){
        cout<<"Friendship";
    }
    else{
        cout<<"Danik";
    }
    
    return 0;
}
