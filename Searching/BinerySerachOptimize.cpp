#include <iostream>

using namespace std;

int firstOccrance(int arr[], int n, int key) {
  int start = 0;
  int end = n - 1;

  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end) {
    if (arr[mid] == key) {
      ans = mid;
      end = mid - 1;
    } else if (key >= arr[mid]) {
      start = mid + 1;
    } else if (key < arr[mid]) {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

int lastOccrance(int arr[], int n, int key) {
  int start = 0;
  int end = n - 1;

  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end) {
    if (arr[mid] == key) {
      // ans me midd store kr liya
      ans = mid;
      start = mid + 1;
    } else if (key >= arr[mid]) {
      start = mid + 1;
    } else if (key < arr[mid]) {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

int main() {
  int even[11] = {2, 3, 3, 3, 3, 3, 3, 3, 3, 45};

  cout << "the firstOccrance is " << firstOccrance(even, 11, 3);
  cout << "the lastOccrance is " << lastOccrance(even, 11, 3);

  return 0;
}