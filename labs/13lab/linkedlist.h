// First Define a node class, then define a linked list class
class node{
   private:
     node *next;
     string name;
   public:
     void setnext(node *n){next = n;} // inline function
     void setdata(string n){name = n;}  // inline function
     void print(); // defined below
     void clear();
     void reversePrint();
     string getData();
     node* getNext(node*);
};
void node::clear(){
   if(next != NULL)
      next -> clear();
   delete this;
}
void node::print(){
   cout << name << endl;
   if(next != NULL)
      next -> print();
}
void node::reversePrint(){
   if(next != NULL)
      next -> reversePrint();
   cout << name << endl;
}
string node::getData(){
   return name;
}
node* node::getNext(node* h){
   return h -> next;
}
// Definition of the linked list class
class linkedlist{
   private:
     node *head;
     int len;
   public:
     linkedlist();
     void push(node *);
     void print();
     void clear();
     void reversePrint();
     string pop();
};
linkedlist::linkedlist(){ // constructor
   head = NULL;
   len = 0;
}
void linkedlist::push(node *n){
  n->setnext(head);
  head = n;
  len = len + 1;
}
void linkedlist::print(){
  if(head != NULL){
     head -> print();
  }
}
void linkedlist::clear(){
  if(head != NULL){
     head-> clear();
  }
  head = NULL;
  len = 0;
}
string linkedlist::pop(){
   node* popped = head -> getNext(head);
   string data = popped -> getData();
   head -> setnext(popped -> getNext(popped));
   len--;
   return data;
}