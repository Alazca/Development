#include "student.h"

using namespace std;
const int MAX_SIZE = 100;

class StudentArray {
private:
  Student* array;
  int size;
  int capacity = MAX_SIZE;

public:
  StudentArray();
  StudentArray(const int&);
  ~StudentArray();
  void addStudent(Student);
  void dropStudent(Student);
  void updateStudent(Student);
  void print();
  void selectionSortLast();
  void selectionSortFirst();
  void selectionSortId();
};
