''' Chef is trying to invent the light bulb that can run at room temperature without electricity. So he has N gases numbered from 0 to N−1 that he can use and he doesn't know which one of the N gases will work but we do know it.

Now Chef has worked on multiple search algorithms to optimize search. For this project, he uses a modulo-based search algorithm that he invented himself. So first he chooses an integer K and selects all indices i in increasing order such that imodK=0 and test the gases on such indices, then all indices i in increasing order such that imodK=1, and test the gases on such indices, and so on.

Given N, the index of the gas p that will work, and K, find after how much time will he be able to give Chefland a new invention assuming that testing 1 gas takes 1 day.

For example, consider N=5,p=2 and K=3.

On the 1st day, Chef tests gas numbered 0 because 0mod3=0.
On the 2nd day, Chef tests gas numbered 3 because 3mod3=0.
On the 3rd day, Chef tests gas numbered 1 because 1mod3=1.
On the 4th day, Chef tests gas numbered 4 because 4mod3=1.
On the 5th day, Chef tests gas numbered 2 because 2mod3=2.
So after 5 days, Chef will be able to give Chefland a new invention

Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers N, p, and K.
Output Format
For each test case, print a single line containing one integer — after how much time Chef will be able to give Chefland a new invention assuming that testing 1 gas takes 1 day.'''

for _ in range(int(input())):
    N,P,K = input().split(' ')
    N=int(N)
    P=int(P)
    K=int(K)
    ans=0
    
    a=P%K -1
    b=((N-1)//K)*K
    b=N-1-b
    if(a>b):
        ans+= (b+1)*((N-1)//K+1)+(a-b)*((N-1)//K)
    else:
        ans+= ((N-1)//K+1)*(a+1)
    
    for i in range(a+1,N,K):
        ans+=1
        if(i==P):
            print(ans)
            break
        
    
