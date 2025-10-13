// oop concept in dart or any programming language
// class=> it the blue print of the any objects
// methods=> that describe the object
// constructor=> that init the class

// to really master the concept of flutter, i need to master the oop concepts
// abstraction
// inheritance
// polymorphism
// encapsulations

class Node {
  String name;
  int age;

  //constructor
  Node(this.name, this.age);

  void describe(){
    print('my name is $name and i am $age years old');
  }
}
// everything should be called inside the main

main(){
  var node = Node("Tshewang", 27);
  node.describe();
}