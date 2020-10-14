//
//  main.cpp
//  A3
//
//  Created by Sounak Mondal on 04/10/20.
//  Copyright © 2020 Sounak Mondal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int a=0,b=0;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0;
    }
    else{
        for(int i=1;a<=b;i++)
        {
            a = a*3;
            b = b*2;
            if(a>b)
            {
                cout<<i;
                return 0;
            }
        }
    }

    
    return 0;
}
