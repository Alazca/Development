#include "student.h"
#include "studentlist.h"

using namespace std;

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
