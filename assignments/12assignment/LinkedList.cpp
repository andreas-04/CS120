/*
Andreas Neacsu
Section 2
Assignment 12
dec 4
*/
#include<iostream>
#include<string>
using namespace std;

class node{
   private:
     node *next;
     string name;
     int id;
     int age;
   public:
     void setnext(node *n){next = n;} // inline function
     void setData(string, int, int);  // inline function
     void print(); // defined below
     void append(node*);
     int length();
     void clear(node*);
};

int main(){
// pointers to node objects
  node *head, *temp;

// create a new node object, add data, make the next object Null, make head point to the beginning of the list
  temp = new node();  
  temp -> setData("Sally", 0, 15);
  temp -> setnext(NULL);
  head = temp;
// create a new node object, add data, make head point to the beginning of the list
  temp = new node();
  temp -> setData("Fred", 1, 29);
  temp -> setnext(head); 
  head = temp;

  temp = new node();
  temp -> setData("Anne", 2, 12);
  temp -> setnext(head);
  head = temp;

//print the length of the list
  cout << head -> length() << endl;

//print the list
  head->print();
  
  cout << endl;
//create a new node and append it to the end of the list
  temp = new node();
  temp -> setData("Jeff", 3, 100);
  head -> append(temp);

//print the length of the list again
  cout << head -> length() << endl << "Appended list:"<< endl;

//print the list with the appended node
  head->print();       // print the list

//clear the list
  head->clear(head);
}

//basic function that initializes private class variables
void node::setData(string myName, int myId, int myAge){
  name = myName;
  id = myId;
  age = myAge;
}
//print function
void node::print(){
//prints the current instances to the screen
  cout << endl <<"User #"<< id <<':'<< endl;
  cout << "Name: "<< name << endl << "Age: "<< age << endl;
//check to see if this instance was the last in the list, if not, call print on this -> next
  if(next != NULL)
    next -> print();
}
//append function, add a node to the tail end of a list
void node::append(node* appendedNode)
{
//first check to see if we are at the end of the list by checking if next is NULL
  if(next == NULL){
  //if we are at the end of the list, append the node, by setting head -> next, to the appended node,
  //and setting the appended nodes next to NULL
    setnext(appendedNode);
    appendedNode -> setnext(NULL);
  }else{
  //if we arent at the end of the list yet, recursivley call our function on the head -> next pointer
    next -> append(appendedNode);
  }
}
//function returning the length of a singley linked list
int node::length()
{
//an iterator variable we can increment for each new node we encounter
  int count = 0;
  //check current node is not last in list, then increment count, and recursively add count to the next 
    if(next != NULL){
      count++;
      count += next -> length();
    }else{
      count++;
    }
      return count;

}
//function that recursively deletes the linked list
void node::clear(node* h)
{
  if(h == NULL)
    return;
  //store the next node and delete current node
  //call clear on next node
  else{
    node* pNext = h -> next;
    delete h;
    clear(pNext);
  }
}