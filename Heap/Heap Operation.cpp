#include <iostream>
using namespace std;

class heap {
public:
  int arr[100];
  int size;
  heap() {
    arr[0] = -1;
    size = 0;
  }
  void insert(int val) {
    size = size + 1;
    int index = size;
    arr[index] = val;
    while (index > 1) {
      int parent = index / 2;
      if (arr[parent] < arr[index]) {
        swap(arr[parent], arr[index]);
        index = parent;
      } else {
        return;
      }
    }
  }

  void deleteheap() {
    if (size == 0) {
      return;
    }

    arr[1] = arr[size];
    size--;
    int i = 1;
    while (i < size) {
      int left = 2 * i;
      int right = 2 * i + 1;

      if (left < size && arr[i] < arr[left]) {
        swap(arr[i], arr[left]);
        i = left;
      } else if (right < size && arr[i] < arr[right]) {
        swap(arr[i], arr[right]);
        i = right;
      } else {
        return;
      }
    }
  }

  void print() {
    for (int i = 1; i <= size; i++) {
      cout << arr[i] << endl;
    }
  }
};

void heapify(int arr[], int n, int i) {
  int largest = i;
  int left = 2 * i;
  int right = 2 * i + 1;
  if (left <= n && arr[largest] < arr[left]) {
    largest = left;
  }
  if (right <= n && arr[largest] < arr[right]) {
    largest = right;
  }

  if (largest != i) {
    swap(arr[largest], arr[i]);
    heapify(arr, n, largest);
  }
}

void heapsort(int arr[], int n) {
  int size = n;
  while (size > 1) {
    // swap
    swap(arr[size], arr[1]);
    size--;

    // take it to right pos
    heapify(arr, size, 1);
  }
}

int main() {
  heap h;
  h.insert(55);
  h.insert(50);
  h.insert(59);
  h.insert(57);
  h.insert(56);
  h.insert(53);
  h.print();
  cout << "After Delete" << endl;
  h.deleteheap();
  h.print();

  int arr[6] = {-1, 55, 54, 52, 56, 53};
  int n = 5;
  // build heapify array
  for (int i = n / 2; i > 0; i--) {
    heapify(arr, n, i);
  }
  for (int i = 1; i <= n; i++) {
    cout << arr[i] << endl;
  }
  cout << "BREAK" << endl;
  // sorting the array
  heapsort(arr, n);
  for (int i = 1; i <= n; i++) {
    cout << arr[i] << endl;
  }
}
