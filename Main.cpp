#include<iostream>
#include "Node.h"
/*
Author: Jay Williamson
Date: 12/3/2024
This class just tests the linked list and makes sure you can create nodes and access other nodes from a node
  */
using namespace std;
using namespace LinkedList;

int main()
{
  //creates all the neccessary objects
  Student* s1 = new Student();
  Student* s2 = new Student();
  Node* n1 = new Node(s1);
    Node* n2 = new Node(s2);
  ////accesses a student in a node
  Student* s3 = n1->getStudent();

  if(s1 == s3)
    {
      cout << "making student works\n";
    }

  //sets the next student
  n1->setNext(n2);

  //accesses the next student and checks if it is right
  if(n1->getNext() == n2)
    {
      cout << "set and get next work\n";
    }
  
  return 0;
}
