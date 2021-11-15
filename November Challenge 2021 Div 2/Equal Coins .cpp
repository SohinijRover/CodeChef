// Contest Code:NOV21B Problem Code:EQUALCOIN
//C++14
/* Chef has X coins worth 1 rupee each and Y coins worth 2 rupees each. He wants to distribute all of these X+Y coins to his two sons so that the total value of coins received
by each of them is the same. Find out whether Chef will be able to do so.*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void fast_cin()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    fast_cin();
    int t,x,y;
    cin>>t;
    while(t--)
    {
        int x, y;
		cin >> x >> y;
		if (x == 0 and y % 2 != 0)
			cout << "NO";
		else if ((x + (y * 2)) % 2 == 0)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
    }

return 0;
}
