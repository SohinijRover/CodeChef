'''In Olympics, the countries are ranked by the total number of medals won. You are given six integers G1, S1, B1, and G2, S2, B2, the number of gold, silver and bronze medals won by two different counties respectively. Determine which country is ranked better on the leaderboard. It is guaranteed that there will not be a tie between the two countries.
Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains six space-separated integers G1, S1, B1, and G2, S2, B2.
Output Format
For each test case, print "1" if the first country is ranked better or "2" otherwise. Output the answer without quotes.'''

t = int(input())
for i in range(t):
    l=list(map(int,input().split()))
    one=l[0]+l[1]+l[2]
    two=l[3]+l[4]+l[5]
    if(one>two):
        print("1")
    else:
        print("2")
            
