#include "studentarray.h"
#include "student.h"
using namespace std;

StudentArray::StudentArray(const int &capacity_) {
  size = 0;
  array = new Student[capacity];
  capacity = 100;
}

StudentArray::~StudentArray() { delete[] array; }

void StudentArray::addStudent(Student student) {
  if (size < capacity) {
    array[size++] = student;
  }
}

void StudentArray::dropStudent(Student student) {
  bool flag = false;
  for (int i = 0; i < size; i++) {
    if (array[i].getId() == student.getId()) {
      flag = true;
      for (int j = i; j < size - 1; j++) {
        array[j] = array[j + 1];
      }
      size--;
      cout << "Removed student with ID " << student.getId() << " from Roster!"
           << endl;
      break;
    }
  }

  if (!flag) {
    cout << "Student Not Found" << endl;
  }
}

void StudentArray::print() {
  for (int i = 0; i < size; i++) {
    cout << "Student: " << array[i] << endl;
  }
  cout << endl;
}

void StudentArray::selectionSortLast() {
  for (int i = 0; i < size; i++) {
    Student min = array[i];
    int minIndex = i;
    for (int j = i + 1; j < size; j++) {
      if (min.getLast() > array[j].getLast()) {
        min = array[j];
        minIndex = j;
      }
    }
    if (minIndex != i) {
      Student temp = array[i];
      array[i] = array[minIndex];
      array[minIndex] = temp;
    }
  }
}

void StudentArray::selectionSortFirst() {
  for (int i = 0; i < size; i++) {
    Student min = array[i];
    int minIndex = i;
    for (int j = i + 1; j < size; j++) {
      if (min.getFirst() > array[j].getFirst()) {
        min = array[j];
        minIndex = j;
      }
    }
    if (minIndex != i) {
      Student temp = array[i];
      array[i] = array[minIndex];
      array[minIndex] = temp;
    }
  }
}

void StudentArray::selectionSortId() {
  for (int i = 0; i < size; i++) {
    Student min = array[i];
    int minIndex = i;
    for (int j = i + 1; j < size; j++) {
      if (min.getId() > array[j].getId()) {
        min = array[j];
        minIndex = j;
      }
    }
    if (minIndex != i) {
      Student temp = array[i];
      array[i] = array[minIndex];
      array[minIndex] = temp;
    }
  }
}
