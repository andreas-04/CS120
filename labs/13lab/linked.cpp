#include<iostream>
using namespace std;
#include"linkedlist.h"
/*
   Add a getdata() function to the node class. This function should return the string that a node stores. This will be
   important in functions like the pop() function below.

   Add a pop() function to the linked list class that removes the first element from a linked list. It should return 
   a string the corresponds to the removed element. If the list is empty it should return an empty string. 
   (Don't forget to update the len of the list.) This propbably requires adding a public getnext() function to the node 
   class, similar to the getdata() function written above.
*/
int main(){
   linkedlist animals;
   node *p;
   p = new node();
   p->setdata("cat");
   animals.push(p);
   p = new node();
   p->setdata("dog");
   animals.push(p);
   p = new node();
   p->setdata("unicorn");
   animals.push(p);
   p = new node();
   p->setdata("dragon");
   animals.push(p);
   p = new node();
   p->setdata("warrior");
   animals.push(p);
   animals.print();
   cout<<endl<<"Popped element: "<<endl<<animals.pop()<<endl<<endl<<"Reverse Print:"<<endl;
   animals.reversePrint();
}