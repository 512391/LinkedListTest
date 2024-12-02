#include<iostream>
#include "Node.h"

using namespace std;
using namespace LinkedList;

int main()
{
  Student* s1 = new Student();
  Student* s2 = new Student();
  Node* n1 = new Node(s1);
    Node* n2 = new Node(s2);
  Student* s3 = n1->getStudent();

  if(s1 == s3)
    {
      cout << "making student works\n";
    }

  n1->setNext(n2);

  if(n1->getNext() == n2)
    {
      cout << "set and get next work\n";
    }
  
  return 0;
}
