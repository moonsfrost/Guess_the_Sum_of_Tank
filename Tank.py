from cmath import inf


p=[1.0]*1100
n=int(input())
maxn=0

for i in range(1,n+1):
    x=int(input())
    if x>maxn:
        maxn=x

tot=0.0
limit=170

for i in range(maxn,limit):
    for j in range(1,i-n+1):
        p[i]*=j
    for j in range(n+1,i+1):
        p[i]/=j
    tot+=p[i]

for i in range(maxn,limit):
    p[i]/=tot
    p[i]*=i

ans=0.0

for i in range(maxn,limit):
    ans+=p[i]

print(int(round(ans)))