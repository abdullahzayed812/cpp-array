#include <iostream>
using namespace std;

void countIncreasingSubArray() {
  const int SIZE = 200;
  int arr[SIZE];
  int arrayLength;
  cout << "Enter the array length\n";
  cin >> arrayLength;
  for (int i = 0; i < arrayLength; i++) {
    cout << "Enter number " << i + 1 << " of array\n";
    cin >> arr[i];
  }
  int counter = 0;
  for (int i = 1; i <= arrayLength; i++) {
    for (int j = 0; j < arrayLength - i + 1; j++) {
      bool isOk = true;
      for (int k = 1; k < i && isOk; k++) {
        isOk = false;
      }
      counter += isOk;
    }
  }
  cout << counter;
}

void concaticatStrings() {
  string first, second;
  cin >> first >> second;
  int maxSize = first.size();
  if (maxSize < second.size()) {
    maxSize = second.size();
  }
  for (int i = 0; i < maxSize; i++) {
    if (i < first.size())
      cout << first[i];
    if (i < second.size())
      cout << second[i];
  }
  cout << "\n";
}

int main() {
  // countIncreasingSubArray();
  // concaticatStrings();
  cout << "Hello world";

  return 0;
}