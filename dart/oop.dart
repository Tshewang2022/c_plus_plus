// oop concept in dart or any programming language
// class=> it the blue print of the any objects
// methods=> that describe the object
// constructor=> that init the class

// to really master the concept of flutter, i need to master the oop concepts
// abstraction
// inheritance
// polymorphism
// encapsulations

// class Node {
//   String name;
//   int age;

//   //constructor
//   Node(this.name, this.age);

//   void describe(){
//     print('my name is $name and i am $age years old');
//   }
// }
// // everything should be called inside the main

// main(){
//   var node = Node("Tshewang", 27);
//   node.describe();
// }

// each and every class has the, 1, property of the class, constructor, then methods
// class Person{
//   String name;
//   int age;

//   // constructor in dart
//   Person (this.name, this.age);
  
//   describe(){
//     print('my name is $name');
//   }
// }

// main(){
//   var tshewang = Person("Tshewang", 12);
//   tshewang.describe();
// }
// so its now the time to implement the 4 pillars of oop concept in the dart;

// abstraction, inheritance, and encapsulation and polymorphism;

// implementation of the abstractions=> hiding the detail of any implementations


// abstract class Vehicle {
//   void model(); // abstract methods;
  
//   startEngine(name){
//     print('my car is $name starting the engine'); // this is the concrete method;
//   }
// }

// class Car extends Vehicle{  
//   Car(String name);
//   @override
//   void model() {
//     print('made in year 3030');
//   }

// }

// main(){
//  var cars = Car('bwm');
//  cars.model();
//  cars.startEngine('tshewang');
// }


// this is the inheritance concepts;
abstract class Vehicle {
  String name;
  Vehicle(this.name);

  void model(); // abstract methods;
  void startEngine(){
    print('my vehicle name is $name');
  }
}

class Descriptions{
  Descriptions();
  describe(){
    print('my car is a luxury car');
  }
}

class Car extends Descriptions{
  @override
  void model() {
     print ('made in year 2030');
    }
}

main(){
  var car = Car();
  car.describe();
}

// inheritance in dart means=> ability to inherit property or the methods from the parent class;