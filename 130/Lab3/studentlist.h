#ifndef STUDENTLIST_HPP_
#define STUDENTLIST_HPP_

#include "student.h"
#define MAX_SIZE 100
#include <iostream>

using namespace std;

class StudentList {
private:
  struct Node {
    Student data;
    Node* next;
  };

  Node* head;
  int size;
  // Lab 3 Heap Added
  void maxHeapify(int);
  int left(int&);
  int right(int&);
  int parent(int&);
  Student Heap[MAX_SIZE];
  int minIndex;

public:
  StudentList();
  ~StudentList();
  void print() const;
  Node* getTail() const;
  void add(Student&);
  void drop();
  void update();
  void load();
  void clearList();
  void display();
  void selectionSortLast();
  void selectionSortFirst();
  void selectionSortId();
  void insertionSortLast();
  void insertionSortFirst();
  void insertionSortId();
  void qkSortLast();
  void qkSortLast(Node*, Node*);
  Node* partitionLast(Node*, Node*);
  Node* partitionFirst(Node*, Node*);
  Node* partitionId(Node*, Node*);
  void qkSortFirst();
  void qkSortFirst(Node*, Node*);
  void qkSortId();
  void qkSortId(Node*, Node*);
  void buildMaxHeap();
  void heapSort();
};

#endif
