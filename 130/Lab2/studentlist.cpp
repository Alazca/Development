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
  string filepath = "/home/alazca/Development/130/Lab2/roster.txt";
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
      cout << "Which sort do you want to use: \n";
      cout << "1: Insertion Sort\n";
      cout << "2: Selection Sort\n";
      cout << "3: Quick Sort\n";
      cin >> userInput;
      if (userInput == 1) {
        this->insertionSortLast();
        this->print();
      } else if (userInput == 2) {
        this->selectionSortLast();
        this->print();
      } else if (userInput == 3) {
        this->qkSortLast();
        this->print();
      }
      break;
    }
    case 4: {
      cout << "Which sort do you want to use: \n";
      cout << "1: Insertion Sort\n";
      cout << "2: Selection Sort\n";
      cout << "3: Quick Sort\n";
      cin >> userInput;
      if (userInput == 1) {
        this->insertionSortFirst();
        this->print();
      } else if (userInput == 2) {
        this->selectionSortFirst();
        this->print();
      } else if (userInput == 3) {
        // this->qkSortFirst();
        this->print();
      }
      break;
    }
    case 5: {
      cout << "Which sort do you want to use: \n";
      cout << "1: Insertion Sort\n";
      cout << "2: Selection Sort\n";
      cout << "3: Quick Sort\n";
      cin >> userInput;
      if (userInput == 1) {
        this->insertionSortId();
        this->print();
      } else if (userInput == 2) {
        this->selectionSortId();
        this->print();
      } else if (userInput == 3) {
        // this->qkSortId();
        this->print();
      }
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

void StudentList::selectionSortLast() {
  if (!head || !head->next) {
    return;
  }
  Node* nodePtr = head;
  while (nodePtr) {
    Node* min = nodePtr;
    Node* nextPtr = nodePtr->next;

    while (nextPtr) {
      if (nextPtr->data.getLast() < min->data.getLast()) {
        min = nextPtr;
      }
      nextPtr = nextPtr->next;
    }
    if (min != nodePtr) {
      Student temp = nodePtr->data;
      nodePtr->data = min->data;
      min->data = temp;
    }
    nodePtr = nodePtr->next;
  }
};

void StudentList::selectionSortFirst() {
  if (!head || !head->next) {
    return;
  }
  Node* nodePtr = head;
  while (nodePtr) {
    Node* min = nodePtr;
    Node* nextPtr = nodePtr->next;

    while (nextPtr) {
      if (nextPtr->data.getFirst() < min->data.getFirst()) {
        min = nextPtr;
      }
      nextPtr = nextPtr->next;
    }
    if (min != nodePtr) {
      Student temp = nodePtr->data;
      nodePtr->data = min->data;
      min->data = temp;
    }
    nodePtr = nodePtr->next;
  }
};

void StudentList::selectionSortId() {
  if (!head || !head->next) {
    return;
  }
  Node* nodePtr = head;
  while (nodePtr) {
    Node* min = nodePtr;
    Node* nextPtr = nodePtr->next;

    while (nextPtr) {
      if (nextPtr->data.getId() < min->data.getId()) {
        min = nextPtr;
      }
      nextPtr = nextPtr->next;
    }
    if (min != nodePtr) {
      Student temp = nodePtr->data;
      nodePtr->data = min->data;
      min->data = temp;
    }
    nodePtr = nodePtr->next;
  }
};

void StudentList::insertionSortLast() {
  if (!head || !head->next) {
    return;
  }

  Node* sorted = nullptr;
  Node* nodePtr = head;

  while (nodePtr) {
    Node* nextPtr = nodePtr->next;

    if (!sorted || nodePtr->data.getLast() < sorted->data.getLast()) {
      nodePtr->next = sorted;
      sorted = nodePtr;
    } else {
      Node* sortedNode = sorted;
      while (sortedNode->next &&
             !(nodePtr->data.getLast() < sortedNode->next->data.getLast())) {
        sortedNode = sortedNode->next;
      }
      nodePtr->next = sortedNode->next;
      sortedNode->next = nodePtr;
    }

    nodePtr = nextPtr;
  }
  head = sorted;
};

void StudentList::insertionSortFirst() {
  if (!head || !head->next) {
    return;
  }

  Node* sorted = nullptr;
  Node* nodePtr = head;

  while (nodePtr) {
    Node* nextPtr = nodePtr->next;

    if (!sorted || nodePtr->data.getFirst() < sorted->data.getFirst()) {
      nodePtr->next = sorted;
      sorted = nodePtr;
    } else {
      Node* sortedNode = sorted;
      while (sortedNode->next &&
             !(nodePtr->data.getFirst() < sortedNode->next->data.getFirst())) {
        sortedNode = sortedNode->next;
      }
      nodePtr->next = sortedNode->next;
      sortedNode->next = nodePtr;
    }

    nodePtr = nextPtr;
  }
  head = sorted;
};

void StudentList::insertionSortId() {
  if (!head || !head->next) {
    return;
  }

  Node* sorted = nullptr;
  Node* nodePtr = head;

  while (nodePtr) {
    Node* nextPtr = nodePtr->next;

    if (!sorted || nodePtr->data.getId() < sorted->data.getId()) {
      nodePtr->next = sorted;
      sorted = nodePtr;
    } else {
      Node* sortedNode = sorted;
      while (sortedNode->next &&
             !(nodePtr->data.getId() < sortedNode->next->data.getId())) {
        sortedNode = sortedNode->next;
      }
      nodePtr->next = sortedNode->next;
      sortedNode->next = nodePtr;
    }

    nodePtr = nextPtr;
  }
  head = sorted;
};

StudentList::Node* StudentList::getTail() const {
  if (!head) {
    cout << "List is empty!" << endl;
    return nullptr;
  }
  Node* nodePtr = head;
  while (nodePtr->next != nullptr) {
    nodePtr = nodePtr->next;
  }
  return nodePtr;
};

StudentList::Node* StudentList::partitionLast(Node* head, Node* tail) {
  // Base Case
  if (head == nullptr || head == tail) {
    return head;
  }

  Node* left = head;
  Node* right = head;
  Node* pivot = tail;

  while (right != tail) {
    if (right->data.getLast() < pivot->data.getLast()) {
      // Hard Coded swap function
      Student temp = left->data;
      left->data = right->data;
      right->data = temp;

      left = left->next;
    }
    right = right->next;
  }
  Student temp = left->data;
  left->data = pivot->data;
  pivot->data = temp;

  return left;
}

void StudentList::qkSortLast(Node* head, Node* tail) {
  if (head == nullptr || head == tail || head->next == tail) {
    return;
  }
  Node* pivot = partitionLast(head, tail);
  if (pivot != head) {
    Node* prev = head;
    while (prev->next != pivot) {
      prev = prev->next;
    }
    qkSortLast(head, prev);
  }

  if (pivot->next != nullptr) {
    qkSortLast(pivot->next, tail); // Sort after the pivot
  }
}

void StudentList::qkSortLast() {
  Node* tail = this->getTail();
  qkSortLast(head, tail);
}

StudentList::Node* StudentList::partitionFirst(Node* head, Node* tail) {
  // Base Case
  if (head == nullptr || head == tail) {
    return head;
  }

  Node* left = head;
  Node* right = head;
  Node* pivot = tail;

  while (right != tail) {
    if (right->data.getFirst() < pivot->data.getFirst()) {
      // Hard Coded swap function
      Student temp = left->data;
      left->data = right->data;
      right->data = temp;

      left = left->next;
    }
    right = right->next;
  }
  Student temp = left->data;
  left->data = pivot->data;
  pivot->data = temp;

  return left;
}

void StudentList::qkSortFirst(Node* head, Node* tail) {
  if (head == nullptr || head == tail || head->next == tail) {
    return;
  }
  Node* pivot = partitionFirst(head, tail);
  if (pivot != head) {
    Node* prev = head;
    while (prev->next != pivot) {
      prev = prev->next;
    }
    qkSortFirst(head, prev);
  }

  if (pivot->next != nullptr) {
    qkSortFirst(pivot->next, tail); // Sort after the pivot
  }
}

void StudentList::qkSortFirst() {
  Node* tail = this->getTail();
  qkSortFirst(head, tail);
}

StudentList::Node* StudentList::partitionId(Node* head, Node* tail) {
  // Base Case
  if (head == nullptr || head == tail) {
    return head;
  }

  Node* left = head;
  Node* right = head;
  Node* pivot = tail;

  while (right != tail) {
    if (right->data.getId() < pivot->data.getId()) {
      // Hard Coded swap function
      Student temp = left->data;
      left->data = right->data;
      right->data = temp;

      left = left->next;
    }
    right = right->next;
  }
  Student temp = left->data;
  left->data = pivot->data;
  pivot->data = temp;

  return left;
}

void StudentList::qkSortId(Node* head, Node* tail) {
  if (head == nullptr || head == tail || head->next == tail) {
    return;
  }
  Node* pivot = partitionId(head, tail);
  if (pivot != head) {
    Node* prev = head;
    while (prev->next != pivot) {
      prev = prev->next;
    }
    qkSortId(head, prev);
  }

  if (pivot->next != nullptr) {
    qkSortId(pivot->next, tail); // Sort after the pivot
  }
}

void StudentList::qkSortId() {
  Node* tail = this->getTail();
  qkSortId(head, tail);
}
