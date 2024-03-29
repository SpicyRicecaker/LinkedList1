#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

//Initiate a student with first name, last name, id, and gpa
Student::Student(char* newFNm, char* newLNm, char* newId, float* newGpa){
  fNm = newFNm;
  lNm = newLNm;
  id = newId;
  gpa = newGpa;
}

//Deallocates the information of a student
Student::~Student(){
  delete fNm;
  delete lNm;
  delete id;
  delete gpa;
}

//Return this student
Student* Student::getStudent(){
  return this;
}

//Return student info
char* Student::getFNm(){
  return fNm;
}

char* Student::getLNm(){
  return lNm;
}

char* Student::getId(){
  return id;
}

float* Student::getGpa(){
  return gpa;
}
