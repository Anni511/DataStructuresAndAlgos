def binarySearch(arr,n,ele):
    beg = 0
    end = n-1
    mid = (beg+end)//2
    while(beg<=end):
        mid = (beg+end)//2
        if(arr[mid]==ele):
            return mid +1
        elif(arr[mid]<ele):
            beg = mid + 1
        elif (arr[mid] > ele):
            end = mid - 1
    return -1

n = int(input())
arr = sorted(list(map(int,input().split())))
ele = int(input())
print("Position of ", ele, " in Sorted Array " ,arr, " is: " ,binarySearch(arr,n,ele))

# I/0 Format, -1 means that the element wasn't found
"""
5
4 5 3 6 7
6
Position of  6  in Sorted Array  [3, 4, 5, 6, 7]  is:  4
"""