#include "student.h"
#include "studentlist.h"

void StudentList::findMiddle(Node* nodePtr, Node*& middle) {
  if (nodePtr == nullptr || nodePtr->next == nullptr) {
    middle = nullptr; // List is empty or has only one element, so no middle
    return;
  }
  // left is the slower pointer, right is the fastests pointer
  Node* left = nodePtr;
  Node* right = nodePtr->next;

  while (right != nullptr && right->next != nullptr) {
    left = left->next;
    right = right->next->next;
  }

  middle = left->next;
  left->next = nullptr;
}

StudentList::Node* StudentList::merge(Node* nodePtr, Node* nextPtr) {
  Node* prevPtr = nullptr;
  Node* newHead = nullptr;

  if (nodePtr == nullptr) {
    return nextPtr;
  }

  if (nextPtr == nullptr) {
    return nodePtr;
  }

  if (nodePtr->data < nextPtr->data) {
    newHead = nodePtr;
    nodePtr = nodePtr->next;
    prevPtr = newHead;
  } else {
    newHead = nextPtr;
    nextPtr = nextPtr->next;
    prevPtr = newHead;
  }
  while (nodePtr != nullptr && nextPtr != nullptr) {
    if (nodePtr->data < nextPtr->data) {
      prevPtr->next = nodePtr;
      prevPtr = prevPtr->next;
      nodePtr = nodePtr->next;
    } else {
      prevPtr->next = nextPtr;
      prevPtr = prevPtr->next;
      nextPtr = nextPtr->next;
    }
  }
  if (nodePtr == nullptr) {
    prevPtr->next = nextPtr;
  } else {
    prevPtr->next = nodePtr;
  }
  return newHead;
}

void StudentList::mergeSort(Node*& head) {
  if (head == nullptr || head->next == nullptr) {
    return;
  }
  Node* otherHead = nullptr;
  findMiddle(head, otherHead);
  mergeSort(head);
  mergeSort(otherHead);
  head = merge(head, otherHead);
}
