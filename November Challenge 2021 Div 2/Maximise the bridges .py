#Contest Code:NOV21B Problem Code:MAXBRIDGE
#Python 3.6
#Chef is given two integers N and M. Please help Chef find any connected undirected graph G consisting of exactly N vertices and M edges, such that the number of bridges in 
#G is maximized (among all graphs with N vertices and M edges). G cannot have self-loops or multiple edges.
#If there is more than one connected undirected graph with the maximum number of bridges, you may print any one of them.

total_input=int(input())
for _ in range(total_input):
    n,e=map(int,input().split())
    g={n:[]}
    for i in range(1,n):
        g[i]=[i+1]
        print(i,i+1)
        e-=1
    end=3
    while e>0:
        for i in range(1,end):
            
            if g[i][-1]<end:
                g[i].append(end)
                print(i,end)
                e-=1
                if e==0:break

        end+=1
