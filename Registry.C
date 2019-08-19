/*------------------------------------------------------------------
1 node/ family

Written by Anthony Gatte
------------------------------------------------------------------*/
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <set>

// ************************** Public Functions *********************
bool Registry::Remove() {
  if (ptr != NULL) {
    if (ptr -> removeFamily (fName)) {
      surviverCount--;
      //retString: ....
      //if (ptr -> getCount ()) {

    //}
    }
  }
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

int insert (node *current, x) {
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


/*------------------------------------------------------------------
Main carries out an input entered by the user and converts it if required.
Then it will return an integer.

Preconditions: An infix or postfix expression.
Postconditions: An integer.
------------------------------------------------------------------*/
