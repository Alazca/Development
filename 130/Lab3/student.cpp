#include "student.h"
#include <iostream>
#include <string>

Student::Student() {
  lastName = " ";
  firstName = " ";
  id = 0;
  status = " ";
}

Student::Student(string lastName_, string firstName_, string status_, int id_) {
  this->lastName = lastName_;
  this->firstName = firstName_;
  this->status = status_;
  this->id = id_;
}

Student::~Student() {}

string Student::getFirst() const {
  return firstName;
}

string Student::getLast() const {
  return lastName;
}

int Student::getId() const {
  return id;
}

string Student::getStatus() const {
  return status;
}

void Student::setFirst(string& firstName) {
  this->firstName = firstName;
}

void Student::setLast(string& lastName) {
  this->lastName = lastName;
}

void Student::setId(int id) {
  this->id = id;
}

void Student::setStatus(string& status) {
  this->status = status;
}

ostream& operator<<(ostream& os, Student name) {
  os << "First Name: " << name.getFirst() << " Last Name: " << name.getLast()
     << "\nID#: " << name.getId() << endl;
  os << "\nClass Status: " << name.getStatus();
  return os;
}

bool Student::operator<(Student rhs) {
  if (this->lastName != rhs.getLast()) {
    return lastName < rhs.getLast();
  }

  if (this->firstName != rhs.getFirst()) {
    return firstName < rhs.getFirst();
  }

  return id < rhs.id;
}
