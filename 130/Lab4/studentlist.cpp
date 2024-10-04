#include "studentlist.h"
#include "student.h"
#include <fstream>
#include <sstream>
using namespace std;

StudentList::StudentList() {
  size = 0;
  head = nullptr;
}

StudentList::~StudentList() {
  if (size >= 1) {
    clearList();
  }
}

void StudentList::print() const {
  Node* nodePtr = head;
  int i = 0;
  if (size == 0) {
    cout << "List is Empty!\n";
  }
  cout << endl;
  while (nodePtr) {
    cout << "Student: " << nodePtr->data.getFirst() << " "
         << nodePtr->data.getLast() << "\nID#: " << nodePtr->data.getId()
         << " | Class: " << nodePtr->data.getStatus() << endl;
    nodePtr = nodePtr->next;
    i++;
  }
  cout << endl;
}

void StudentList::add(Student& student) {
  Node* nodePtr = nullptr;
  Node* newNode = new Node;
  newNode->data = student;
  newNode->next = nullptr;

  // !head is the same as size == 0
  if (!head) {
    head = newNode;
    newNode->next = nullptr;
    return;
  }
  nodePtr = head;
  while (nodePtr->next) {
    nodePtr = nodePtr->next;
  }
  nodePtr->next = newNode;
  size++;
}

void StudentList::drop() {
  Node* nodePtr = nullptr;
  Node* prePtr = nullptr;
  if (!head) {
    cout << "List is empty. Please check roster." << endl;
    return;
  }
  nodePtr = head;
  int userInput = 0;
  cout << "Enter Student ID# of who is being dropped!" << endl;
  cin >> userInput;

  // Traverse list to find student ID from user
  while (nodePtr != nullptr && nodePtr->data.getId() != userInput) {
    prePtr = nodePtr;
    nodePtr = nodePtr->next;
  }
  // checks for student identified from previous search
  if (nodePtr == nullptr) {
    cout << "Student not found!" << endl;
    return;
  }

  if (prePtr == nullptr) {
    head = nodePtr->next;
  } else {
    prePtr->next = nodePtr->next;
  }
  cout << "Student: " << nodePtr->data.getLast() << " with ID# "
       << nodePtr->data.getId() << " was removed!" << endl;
  delete nodePtr;
  size--;
  if (size == 0) {
    head = nullptr;
  }
}

void StudentList::load() {
  string filepath = "../roster.txt";
  ifstream datafile;
  string lastname_, firstname_, status_, id_ = "";
  string token;
  stringstream ss;
  datafile.open(filepath, ios::in);
  if (!datafile.is_open()) {
    cout << "Error locating Roster! Please check for document!" << endl;
    exit(EXIT_FAILURE);
  }
  while (getline(datafile, token)) {
    Student temp;
    ss.clear();
    ss.str(token);
    getline(ss, id_, ',');
    getline(ss, lastname_, ',');
    getline(ss, firstname_, ',');
    getline(ss, status_, ',');
    temp.setLast(lastname_);
    temp.setFirst(firstname_);
    temp.setId(stoi(id_));
    temp.setStatus(status_);
    add(temp);
    size++;
  }
  datafile.close();
}

void StudentList::display() {
  int userInput = 0;
  while (userInput != 7) {
    cout << "\nClass Roster Menu:\n";
    cout << "1. Add Student\n";
    cout << "2. Drop Student\n";
    cout << "3. List Students (by last name)\n";
    cout << "4. List Students (by first name)\n";
    cout << "5. List Students (by ID)\n";
    cout << "6. Update Student\n";
    cout << "7. Exit\n";
    cout << "Enter your choice: \n";
    cin >> userInput;
    switch (userInput) {
    case 1: {
      // Add Student
      Student newStudent;
      string lastName, firstName, status;
      int id;
      cout << "Enter last name: ";
      cin >> lastName;
      cout << "Enter first name: ";
      cin >> firstName;
      cout << "Enter ID: ";
      cin >> id;
      cout << "Enter Class: ";
      cin >> status;
      newStudent.setLast(lastName);
      newStudent.setFirst(firstName);
      newStudent.setId(id);
      newStudent.setStatus(status);
      this->add(newStudent);
      break;
    }
    case 2: {
      // Drop Student
      this->drop();
      this->print();
      break;
    }
    case 3: {
      this->mergeSort(head);
      this->print();
      break;
    }
    case 4: {
      this->mergeSort(head);
      this->print();
      break;
    }
    case 5: {
      this->mergeSort(head);
      this->print();
      break;
    }
    case 6: {
      break;
    }
    case 7: {
      // Exit
      cout << "Exiting program.\n";
      break;
    }
    default: {
      cout << "Invalid userInput. Please try again.\n";
      break;
    }
    }
  }
}

void StudentList::clearList() {
  Node* nodePtr = head;
  Node* nextPtr = nullptr;
  while (nodePtr != nullptr) {
    nextPtr = nodePtr->next;
    delete nodePtr;
    nodePtr = nextPtr;
    size--;
  }
  head = nullptr;
}
