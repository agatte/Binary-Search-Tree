/*------------------------------------------------------------------
a class called BTreeNode which holds the characteristics and pointers of the node.
That points to BTree which is the binary tree class, that holds the 5 methods.
Then that points to the registry class which is our “book” to hold the people.
Then finally we have the driver and that is the tester program.

Written by Anthony Gatte
------------------------------------------------------------------*/
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <set>

// ************************** Public Functions *********************

/*
Search either returns null or goes down to the base of either the
left or right child
*/
bool search (int value) {
  if (root == NULL) {
    return false;
  } else {
    return root -> search (value);
  }
}




/*------------------------------------------------------------------
Main carries out an input entered by the user and converts it if required.
Then it will return an integer.

Preconditions: An infix or postfix expression.
Postconditions: An integer.
------------------------------------------------------------------*/
/*
int main() {
  string expression;
  LLQueue *inputQueue;
  expression = getUserInput();
  inputQueue = parseInput(expression);
  //Evaluates result
  int result = postfixEvaluation(inputQueue);
  cout << "Answer is: " << result;
}
*/
/*------------------------------------------------------------------
postFixEvaluation evaluates a postfix expression and returs a single integer
and returns it.

Preconditions: A postfix expression.
Postconditions: An integer.
------------------------------------------------------------------*/
/*
int postfixEvaluation(string op, LLQueue *inputQueue) {
  //Creates a stack called operatorsStack and queue called inputQueue.
  bool temp;

  string op1;
  string op2;
  int answer;
  string finalAnswer;

  while (inputQueue -> NumOfQueueEntries() > 0) {
    temp = inputQueue -> Dequeue(op);
    if (isAnOperator (op) == false) {
      operatorsStack.Push (op);
    } else {
      //pop, pop
      temp = operatorsStack.Pop(op1);
      temp = operatorsStack.Pop(op2);
      //Pops top two numbers
      int firstNumber = std::stoi(op1);
      int secondNumber = std::stoi(op2);
      //processes operation
      int answer = calculations (op, op1, op2);
      finalAnswer = to_string(result);
      operatorsStack.Push(finalAnswer);
    }
  }
  return (finalAnswer);
}

*/


/*
  for (int i = 0; i < expression.length(); i++) {
    //Looks for characters of operators
  if(isAnOperator (expression [i])) {
    inputQueue.Enqueue (expression [i]);
  }else if (isAnOperand (expression [i])){
      inputQueue.Enqueue (expression [i]);
    }
  }//else{
    higher precedence
}
  //Creates another stack called foo2 for the characters to go once processed
  LLStacks foo2;
    //processes the queue
    while (!inputQueue.IsEmpty()) {
      token() = inputQueue.Dequeue();
      //processes token;
      if (isAnOperand (token())){
        inputStack.Push (token());
      }else{
        int temp1 = inputStack.Pop();
        int temp2 = inputStack.Pop();
        last = process (temp1 (token()) temp2);
        inputStack.Push (last);
      }
    }
  }
*/

/*
//------------------------------------------------------------------
getUserInput will take the user input, their response telling them to enter
some expression and then take that line and return their response.

Preconditions: An expression.
Postconditions: The response that the user entered.
------------------------------------------------------------------//
/*
string getUserInput() {
  //creates empty string.
  string expression;
  cout << "Enter an infix expression \n";
  //returns user's expression.
  getline (cin, expression);
  return (expression);
}
*/

/*------------------------------------------------------------------
parseInput breaks down the users input into "tokens".

Preconditions: The users reponse.
Postconditions: Broken down values into specific pieces or tokens.
------------------------------------------------------------------*/
/*
Queue* parseInput (string expression) {
  LLQueue queue;
  while (queue.NumOfQueueEntries() > 0) {
    //Eliminate leading spaces
    expression.erase(" ");
    //Find the location of first space
    expression.find(" ");
    token() = expression.substr(1, " ");
    expression.Enqueue(token());
    //Enqueue token into queue
    token().erase(substr);
  }
}
*/
/*------------------------------------------------------------------
isAnOperator checks to make sure that the user is entering correct
expressions and determines what is valid and not.

Preconditions: None.
Postconditions: True or False depending on if operator or not.
------------------------------------------------------------------*/
/*
bool isAnOperator (string op) {
  //Checks to see if the entered value is a valid operator.
  if (op == "+" || "-" || "*" || "/" || "%")
  return true;
}
return false;
*/

/*------------------------------------------------------------------
calculations does the calculations on the two numbers from the queue.

Preconditions: None.
Postconditions: The evaluated expression.
------------------------------------------------------------------*/
/*
int calculations (string op, int op1, int op2) {
  if (op == "+") {
    return (op1 + op2);
  } else if (op == "-") {
    return (op1 - op2);
  } else if (op == "*") {
    return (op1 * op2);
  } else if (op == "/") {
    return (op1 / op2);
  } else if (op == "%") {
    return (op1 % op2);
  } else {
    return -1;
  }
}
*/
