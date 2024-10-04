#include "student.h"
#include "studentlist.h"

using namespace std;

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
