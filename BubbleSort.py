def bubbleSort(n, arr):
    for i in range(n):
        for j in range(n-i-1):
            if (arr[j]>arr[j+1]):
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
    return  arr


n = int(input()) # Number of Elements in the Array
arr = list(map(int,input().split()))    # Array Input
print("Sorted List is  : ", bubbleSort(n, arr))

# I/O Format
"""
5 
6 5 4 3 2 
Sorted List is  :  [2, 3, 4, 5, 6]
"""