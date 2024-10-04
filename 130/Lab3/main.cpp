#include "student.h"
#include "studentlist.h"

int main() {
  int userInput = 0;
  StudentList Roster;
  StudentList sortedRoster;
  Roster.load();
  Roster.display();
  return 0;
}
