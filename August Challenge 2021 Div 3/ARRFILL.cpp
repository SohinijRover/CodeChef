/* You are given an array A of size N. Initially, the array is filled with 0-s.
There are M types of operations that you can perform on array A. The ith operation can be described by two integers (xi,yi). In this operation, you choose a set of indices S such that
1≤j≤N, (jmodyi)≠0, Aj=0, then you set Aj=xi for all j∈S.
You can perform the operations in any order, but one type of operation can't be done more than once. What is the maximum sum of integers of the array A you obtain if you perform the M operations optimally?
For example, consider the array A=[0,0,0,0].
Suppose x=3,y=2. Here you can choose indices 1 and 3 and set A1=A3=3. So the array A becomes [3,0,3,0]. In this operation you can't choose the indices 2 and 4 because (2mod2)=0, (4mod2)=0.
Suppose x=5,y=3 and you set A2=5. So the array A becomes [3,5,3,0]. Here you can't choose index 1 because A1>0 and index 3 because (3mod3)=0 and A3>0. However, you could also set A4=5.
Suppose x=4,y=4. Now you can't choose any index because Aj>0 for all 1≤j≤3 and (4mod4)=0. So the array remains same.
Note: Since input-output is large, prefer using fast input-output methods.
Input Format::
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
Each testcase contains M+1 lines of input.
The first line of each test case contains two space-separated integers N,M.
M lines follow. For each valid i, the ith of these lines contains two space-separated integers xi,yi - parameters of the ith operation.
Output Format::
For each test case, output in a single line the maximum sum of integers of the array A after M operations.*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int t;
  cin >> t;
  while(t--) {
    ll n, m;
    cin>>n>>m;

    vector<pair<int,int>>vp;
    for (int i=0; i < m; i++)
    {
      ll x, y;
      cin>>x>>y;
      vp.push_back({x,y});
    }

    sort(vp.begin(), vp.end(), greater<pair<int,int>>());
    
    ll lcm=1;
    ll rem=n;
    ll res=0;
    

    for (int i=0; i<m && rem>0; i++){
        ll a= vp[i].first,b=vp[i].second;
        lcm = lcm*b/__gcd(lcm,b);
        res += (rem-n/lcm)*a;
        rem= n/lcm;
    }

    cout <<res<<endl;
  }
  return 0;
}
