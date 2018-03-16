n = int(input())
arr = list(map(int,input().split()))
ele = int(input())
flag =0
for i in range(len(arr)):
    if (arr[i]==ele):
        print(ele ," Found at :", i+1)
        flag = 1
        break

if(flag==0):
    print(ele, " Not Found")
