#include "display.h"
#include "student.h"
#include "studentarray.h"
#include <fstream>
#include <sstream>

using namespace std;

int main() {
  int numStudents = 0;
  string filepath = "/home/alazca/Development/130/Lab1/roster.txt";
  int userInput = 0;
  StudentArray Roster(MAX_SIZE);
  ifstream dataFile;
  string lastname_, firstname_, status_, id_ = "";
  string data; // acts as storage variable for parser
  stringstream ss;
  dataFile.open(filepath, ios::in);
  if (!dataFile.is_open()) {
    cout << "Error Opening Roster! Please check for document." << endl;
    exit(EXIT_FAILURE);
  }
  while (getline(dataFile, data)) {
    Student temp;
    ss.clear();
    ss.str(data);
    getline(ss, id_, ',');
    getline(ss, lastname_, ',');
    getline(ss, firstname_, ',');
    getline(ss, status_, ',');
    temp.setLast(lastname_);
    temp.setFirst(firstname_);
    temp.setId(stoi(id_));
    temp.setStatus(status_);
    Roster.addStudent(temp);
    numStudents++;
  };
  for (int i = 0; i < numStudents; i++) {
    Roster.print();
  }
  dataFile.close();
  while (userInput != 7) {
    displayMenu();
    cin >> userInput;
    switch (userInput) {
    case 1: {
      // Add Student
      Student newStudent;
      string lastName, firstName;
      int id;
      cout << "Enter last name: ";
      cin >> lastName;
      cout << "Enter first name: ";
      cin >> firstName;
      cout << "Enter ID: ";
      cin >> id;
      newStudent.setLast(lastName);
      newStudent.setFirst(firstName);
      newStudent.setId(id);
      Roster.addStudent(newStudent);
      Roster.print();
      break;
    }
    case 2: {
      // Drop Student
      int id;
      cout << "Enter ID of the student to drop: ";
      cin >> id;
      Student dropStudent;
      dropStudent.setId(id);
      Roster.dropStudent(dropStudent);
      Roster.print();
      break;
    }
    case 3: {
      // List Students by last name
      Roster.selectionSortLast();
      Roster.print();
      cout << "Sorted by LAST NAME!" << endl;
      break;
    }
    case 4: {
      // List Students by first name
      Roster.selectionSortFirst();
      Roster.print();
      cout << "Sorted by FIRST NAME!" << endl;
      break;
    }
    case 5: {
      // List Students by ID
      Roster.selectionSortId();
      Roster.print();
      cout << "Sorted by ID NUMBER!" << endl;
      break;
    }
      // case 6: {
      //  // Update Student
      //  int id;
      //  cout << "Enter ID of the student to update: ";
      //  cin >> id;
      //  Student updatedStudent;
      //  string lastName, firstName;
      //  cout << "Enter new last name: ";
      //  cin >> lastName;
      //  cout << "Enter new first name: ";
      //  cin >> firstName;
      //  updatedStudent.setLast(lastName);
      //  updatedStudent.setFirst(firstName);
      //  updatedStudent.setId(id);
      //  Roster.updateStudent(updatedStudent);
      //  cout << "UPDATED STUDENT!" << endl;
      //  break;
      //}
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
  return 0;
}
