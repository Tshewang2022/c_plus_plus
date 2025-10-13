// basic algo implementation using the dart
// linked list
// sorting 
// searching

// impplementation of linked list in dart
// both the double linked list and circular linked list
// T refers to the generic type
import 'dart:ffi';

class Node<T> {
  T data;
  Node<T>? next;
  Node(this.data);

}

class LinkedList<T> {
  // head node;
  Node<T>? head; // this is the head node;

  // add node at the end;
  void append(T data){
    //create a node 
    Node<T> newNode = Node(data);
    if(head ==null){
      head = newNode;
      return;
    }
    
    // while if the head node is not empty
    Node<T>? current = head;
    while(current!.next !=null){
      current = current.next;
    }
    current.next = newNode;
  }

  // add the node at the begining
  prepend(T data){
    // create a node
    Node<T> newNode = Node(data);
    newNode.next = head;
    head = newNode;
  }

  // printing the node;

  void printNode(){
    Node<T>? currentNode = head;

    while(currentNode !=null){
      print(currentNode.data);
      currentNode = currentNode.next;
    }
  }
}



// how does the double linked list work

// giving the node generic type
class Node2<T>{
  T data;
  Node2<T>? prev;
  Node2<T>? next;

  Node2(this.data);
}

class DoubleLink<T>{
  Node2<T>? head; // head node
  Node2<T>? tail;

  // append method=> adding at the end of the node;
  append(T data){
    // create a new node
    Node2<T> newNode = Node2(data);
    // if head i empty, connect to the head;
    if(head == null){
      head = newNode;
      tail = newNode;
      return;
    }

    // if the node is not empty
    tail!.next = newNode;
    newNode.prev = tail;
    tail = newNode;
  
  }


  // prepend method=> adding at the beginning of the node;
  prepend(T data){
    // create a new node
    Node2<T> newNode = Node2(data);

    if(head == null){
      head = newNode;
      tail = newNode;
      return;
    }

    newNode.next = head;
    head!.prev = newNode;
    head = newNode;
  }

  //printing the node
  printNode(){
    Node2<T>? current = head;
    while(current!=null){
      print(current.data);
      current = current.next;
    }
  }
}


main(){
  // var node = Node();
  // using the list data structure;
  DoubleLink<int> list = DoubleLink<int>();
  
  list.append(10);
  list.append(20);
  list.prepend(5);

  list.printNode(); // Output: 5, 10, 20

}