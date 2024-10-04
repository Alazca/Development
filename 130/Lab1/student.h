#ifndef STUDENT_HPP_
#define STUDENT_HPP_
#include <iostream>
using namespace std;
class Student {
private:
  string firstName;
  string lastName;
  int id;
  string status;

public:
  Student();
  ~Student();
  Student(string, string, string, int);
  string getFirst() const;
  string getLast() const;
  int getId() const;
  string getStatus() const;
  void setFirst(string &);
  void setLast(string &);
  void setId(int);
  void setStatus(string &);
  friend ostream &operator<<(ostream &, Student);
};
#endif
