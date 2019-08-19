/*------------------------------------------------------------------
A test driver for the stack/bucket class.

Written by Mikeyg
------------------------------------------------------------------*/

#include <iostream>
#include "BTreeNode.h"
#include "BTree.h"

using namespace std;

enum EntryCode {SEARCH, INSERT, REMOVE, COUNT, PRINT, QUIT};
//enum ptrT {leftP, rightP, parentP, PRINT, QUIT};


int main () {
  registry;
  string lastName, firstName;
  ifStream myInputFile;
  myInputFile.open ("names.txt");
  myInputFile >> lastName >> firstName;
  while (!myInputFile.eof()) {
    myTree.Insert(lastName, firstName);
    myInputFile >> lastName >> firstName;
  }
  myInputFile.close;

  bool flag;

  // Instantiate/construct a bucket object
  Stack slop;

  // Get the user's intention
  cout << "\nEnter 0: Search\n 1: Insert\n 2: Remove\n 3: Count\n 4: print\n enter code: ";
  cin >> response;
  while ((response >= POP) && (response <= PRINT)) {
    switch (response) {
    case SEARCH:
      flag = slop.Search(int value, Node *start);
      if (flag) {
		  cout << "\nYou found: " << returnValue;
      } else {
		  cout << "\nThat person is not here.";
      }
      break;
    case INSERT:
      cout << "\nEnter the name of the survivor who was found: ";
      cin >>newValue;
      slop.Insert(node *current, x);
      break;
    case COUNT:
      cout << "\nThere are " << slop.NumOfStackEntries() << " people who have survived";
      break;
    /*
    case TOP:
      flag = slop.Top(returnValue);
      if (flag) {
		  cout << "\nThe stack contains " << returnValue << " at top position";
      } else {
		  cout << "\nThe stack is empty";
      break;
      */
	case PRINT:
	  cout << endl << slop << endl;
	  break;
      }
    }

    // Get the user's intention
    cout << "\n\n\nEnter 0: Search\n 1: Insert\n 2: Remove\n 3: Count\n 4: print: ";
    cin >> response;
  }

  cout << endl << endl;
  return(0);
}
