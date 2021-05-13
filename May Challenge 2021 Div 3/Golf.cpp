//Problem Code: LKDNGOLF

/*
It's a lockdown. You’re bored in your house and are playing golf in the hallway.
The hallway has N+2 tiles numbered from 0 to N+1 from left to right. There is a hole on tile number x. You hit the ball standing on tile 0. When you hit the ball, it bounces at lengths of k, i.e. the tiles covered by it are 0,k,2k,…, and so on until the ball passes tile N+1.
If the ball doesn't enter the hole in the first trial, you try again but this time standing on the tile N+1. When you hit the ball, it bounces at lengths of k, i.e. the tiles covered by it are (N+1),(N+1−k),(N+1−2k),…, and so on until the ball passes tile 0.
Find if the ball will enter the hole, either in its forward journey or backward journey.
Note: The input and output of this problem are large, so prefer using fast input/output methods.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
The only line of each test case contains three integers N,x,k.

Output
Output in a single line, the answer, which should be "YES" if the ball enters the hole either in the forward or backward journey and "NO" if not.
You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,X,Y;
        cin>>N>>X>>Y;
        if(X%Y==0||X%Y==((N+1)%Y))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
