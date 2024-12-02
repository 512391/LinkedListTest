#include<iostream>
#include"Student.h"

namespace LinkedList
{
  class Node
  {
    public:
      Node(Student* student);
      ~Node();
      Node* getNext();
      void setNext(Node* node);
      Student* getStudent();
    private:
      Node* nextNode;
      Student* data;
  };
}
