#include "student.h"
#include "studentlist.h"

using namespace std;

int StudentList::left(int& child) {
  return 2 * child + 1;
}

int StudentList::right(int& child) {
  return 2 * child + 2;
}

int StudentList::parent(int& x) {
  return (x - 1) / 2;
}

void StudentList::maxHeapify(int x) {
  int lc = left(x);
  int rc = right(x);
  int largest = x;

  if (lc < minIndex && Heap[lc].getId() > Heap[largest].getId()) {
    largest = lc;
  }

  if (rc < minIndex && Heap[rc].getId() > Heap[largest].getId()) {
    largest = rc;
  }

  if (largest != x) {
    Student temp = Heap[x];
    Heap[x] = Heap[largest];
    Heap[largest] = temp;
    maxHeapify(largest);
  }
}

void StudentList::buildMaxHeap() {
  int i = (minIndex / 2) - 1; // Initialize i correctly
  for (; i >= 0; i--) {       // Fix the loop declaration
    maxHeapify(i);
  }
}

void StudentList::heapSort() {
  buildMaxHeap();
  int root = 0;
  for (int i = minIndex - 1; i > root; i--) {
    // Swap root with the last element
    Student temp = Heap[root];
    Heap[root] = Heap[i];
    Heap[i] = temp;

    // Reduce the heap size
    minIndex--;

    // Restore the max-heap property
    maxHeapify(root);
  }

  // Reset the minIndex after sorting
  minIndex = MAX_SIZE;
}
