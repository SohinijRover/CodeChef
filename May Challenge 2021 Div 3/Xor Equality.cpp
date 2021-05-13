//Problem Code: XOREQUAL

/*
For a given N, find the number of ways to choose an integer x from the range [0,2N−1] such that x⊕(x+1)=(x+2)⊕(x+3), where ⊕ denotes the bitwise XOR operator.
Since the number of valid x can be large, output it modulo 109+7.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
The only line of each test case contains a single integer N.

Output
For each test case, output in a single line the answer to the problem modulo 109+7.
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define M pow(10,9)+7
#define LL long long

int pow(LL X,unsigned int Y,int P){
    int R=1;
    X=X%P;
    if(X==0)
    return 0;
    while(Y>0){
        if(Y&1)
            R=(R*X)%P;
        Y=Y>>1;
        X=(X*X)%P;
    }
    return R;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int val=pow(2,N-1,M);
        cout<<val<<endl;;
    }
    return 0;
}
