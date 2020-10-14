#include<iostream>
using namespace std;

int main()
{
    int h, n, w;
    h=0;
    n=0;
    w=0;
    cin>>n>>h;
    int heights[n];
    for(int i=0;i<n;i++)
    {
        cin>>heights[i];
    }
    for(int i=0;i<n;i++)
    {
        if(heights[i]>h){
            w+=2;
            cout<<heights[i]<<"w+=2"<<endl;
        }
        else{
            w+=1;
            cout<<heights[i]<<"w+=1"<<endl;
        }
    }
    cout<<w;
    return 0;
}
