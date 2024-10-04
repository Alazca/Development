#ifndef STUDENTLIST_HPP_
#define STUDENTLIST_HPP_

#include "student.h"
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

public:
  StudentList();
  ~StudentList();
  void print() const;
  void add(Student&);
  void drop();
  void update();
  void load();
  void clearList();
  void display();
  Node* merge(Node*, Node*);
  void findMiddle(Node*, Node*&);
  void mergeSort(Node*&);
};

#endif
