//
//  main.cpp
//  score ranking
//
//  Created by s20181102936 on 2019/9/3.
//  Copyright © 2019 s20181102936. All rights reserved.
//

#include <iostream>
#define number 10
using namespace std;
int main() {
    int a[number]={0};
    int *ptr,x;
    ptr=a;
    for(int i=0;i<number;i++){
        cin>>a[i];
    }
    for(int j=0;j<number;j++)
    {
        for(int i=1;i<number;i++){
            if(a[i]<a[i-1])
            {
                x=a[i-1];
                a[i-1]=a[i];
                a[i]=x;
            }
    }
    }
    for(int i=0;i<number;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
