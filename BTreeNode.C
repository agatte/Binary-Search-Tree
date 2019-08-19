/*------------------------------------------------------------------
a class called BTreeNode which holds the characteristics and pointers of the node.
That points to BTree which is the binary tree class, that holds the 5 methods.
Then that points to the registry class which is our “book” to hold the people.
Then finally we have the driver and that is the tester program.

Key functions - Insert, search, traversial, count (trivial), remove/delete, min/max (dones't
make a whole lot of sense though)

Written by Anthony Gatte
------------------------------------------------------------------*/
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <set>

// ************************** Public Functions *********************
struct node {
  int data;
  struct node *rChild;
  struct node *lChild;
}


bool BTreeNode::search (int value, Node *start) {
  if (start == NULL) {
    return NULL;
  } if (val [start] == value) {
    return start;
  } if (value < val [start]) {
    return Search (value, start -> lChild);
  } else {
    return Search (value, start -> rChild);
  }
}

/*
Node *min (Node *start) {
  if (start == NULL) {
    return (NULL);
  } if (start -> lChild == NULL) {
    return (start);
  } else {
    return min (start -> lChild);
  }
}
*/

int x = name[1];

int insert (node *current, int x) {
  if (x > current -> value) {
    if (current -> rChild != NULL) {
      insert (current -> rChild, x)
    }
  } else {
    current -> rChild = new node (x);
  } else {
    if (current -> lChild != NULL) {
      insert (current -> lChild, x);
    } else {
      current -> lChild = new node (x);
    }
  }
}

int AddFamMember () {
  if (firstName.count(fName) == 0) {
    firstName.insert(fName);
    count ++;
  } else {
    return (false);
  }
}

int count(*Node) {
  if (node == NULL){
    return 0;
  } if (node -> lChild == NULL && node -> rChild == NULL) {
    return 1;
  } else {
    return getCount (node -> lChild) + getCount (node -> rChild);
  }



  int count = 1;
  if (lChild()) count += lChild() -> count(); {
  if (rChild()) count += rChild() -> count(); {
    }
  }
  return count;
}
