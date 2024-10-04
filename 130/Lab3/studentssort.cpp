#include "student.h"
#include "studentlist.h"

using namespace std;

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
