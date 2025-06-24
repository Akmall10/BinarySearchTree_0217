#include <iostream>
using namespace std;

class Node
{
    public:
      int info;
      Node *leftchild;
      Node *rightchild;

      // constructor for the node class
      Node()
      {
        leftchild = nullptr; // initialized left child to null
        rightchild = nullptr; // initialized rightchild to null

      }
};

class BinaryTree
{
   public:
   Node *ROOT;
}