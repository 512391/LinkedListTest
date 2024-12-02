#include<iostream>
#include"Student.h"

using namespace LinkedList;
using namespace std;

Student::Student(int idNum, char firstInitial)
{
  Student::id = idNum;
  Student::name = firstInitial;
}
