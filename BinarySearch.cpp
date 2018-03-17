#include <iostream>

using namespace std;

int BinarySearch(int arr[10], int size, int el)
{
    int l = 0, r = size - 1, m;
    while (l <= r) {
        m = (r + l) / 2;
        if (el > arr[m])
            l = m + 1;
        else if (el < arr[m])
            r = m - 1;
        else
            return m;
    }
    return -1;
}

int main()
{
    int array[10], ele;
    for (int i = 0; i < 10; i++)
        cin >> array[i];
    cin >> ele;
    int sol = BinarySearch(array, 10, ele);
    (sol != -1) ? cout << "Element found at " << sol : cout << "Element not found.";
    return 0;
}

/* 
INPUT 1
1 2 3 4 5 6 7 8 9 10
14
OUTPUT 1
Element not found.
*/

/* 
INPUT 2
1 2 3 4 5 6 7 8 9 10
4
OUTPUT 2
Element found at 4
*/
