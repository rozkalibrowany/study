/*
Author: Karol Siegieda

Binary Search is a method to find the required element in a sorted array by repeatedly halving the array and searching in the half.

This method is done by starting with the whole array. Then it is halved. If the required data value is greater than the element at the middle of the array,
then the upper half of the array is considered. Otherwise, the lower half is considered.
This is done continuously until either the required data value is obtained or the remaining array is empty.

A program that demonstrates binary search in C++ is given below. */

#include <iostream>

using namespace std;

int getIndex(int val, int arr[], int size) {
  int mid = arr[size / 2];

  if (first > second) {
    
  }
}

int main(void) {
  int arr[] = {0, 4, 5, 7, 14, 15, 19, 22, 45};
  int size = sizeof(arr) / sizeof(arr[0]);
  int val = -1;

  while (true) {
    cout << "Searching number:";
    cin >> val;
    cout << " " << val << endl;
    if (val == -1) {
      cout << "Wrong number! Type another" << endl;
      continue;
    }

    int ind = getIndex(val, arr, size);
    cout << "Found index: " << ind << endl;

    break;
  }

  return 0;
}