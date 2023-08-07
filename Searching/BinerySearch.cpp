#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;

    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right wala part if key is badi
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // left jana he to
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 3, 4, 5, 7, 8};
    int odd[5] = {2, 5, 7, 9, 12};

    int evenindex = binarySearch(even, 6, 5);
    cout << "Index of 12 is " << evenindex << endl;

    int oddindex = binarySearch(odd, 5, 5);
    cout << "Index of 2 is " << oddindex << endl;

    return 0;
}