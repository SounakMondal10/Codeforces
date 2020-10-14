#include <iostream>
using namespace std;

int main() {

int n=0;
    cin>>n;
int agreement[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>agreement[i][j];
        }
    }
    int agreed=0;
    
    for(int i=0;i<n;i++)
    {   int agreesum=0;
        for(int j=0;j<3;j++)
        {
            agreesum +=agreement[i][j];
        }
        
        if(agreesum>=2)
        {
            agreed++;
        }
    }
    
    cout<<agreed;
    return 0;
}
