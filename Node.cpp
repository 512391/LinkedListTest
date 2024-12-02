#include<iostream>
#include "Node.h"

using namespace LinkedList;
using namespace std;

Node::Node(Student* student)
{
  Node::data = student;
}

Node* Node::getNext()
{
  return Node::nextNode;
}

void Node::setNext(Node* node)
{
  Node::nextNode = node;
}

Student* Node::getStudent()
{
  return Node::data;
}

Node::~Node()
{
  delete Node::nextNode;
  delete Node::data;
  cout << "destroyed node";
}
