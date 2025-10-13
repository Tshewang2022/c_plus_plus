// oop concepts in javascripts;
// class => blue print of the objects
// methods=> that describe the objects
// constructor=> that init the objects

// four pillars of writting the good oop code in javascript
// abstractions
// encapsulations
// polymorphism
// inheritence

// Ex: The is one Person called Tshewang, is thin and tall. And he is 30 years old, working in one of the IT farm
// in Bhutan. He graduated from RUB. His bank account number is 30384374;

// abstraction and encapsulation works around the private class and abstract


// now represent this in the form of oop concepts
// class Person{
//     // constructor functions=> in javascript is used to defined using the name constructor
//     // while in the other langauage we use the Class name as the function
//    constructor(name, age){
//     this.name = name;
//     this.age = age;
//    }

//    // this works same in all the different languages;
//    descibe(){
//         console.log(`my name is ${this.name} and i am ${this.age} years old` );
//    };
// }

// const tshewang = new Person("Tshewang", 30);
// tshewang.descibe();


// the concepts of abstractions
// to hide details, that user may not understand the complex working parts


// car is a vehicle, and we can write the abstract methods on the vehicle

// inheritance is about the sharing the code ,and abstraction is about the hiding the complexity;
// class Vehicle {
//     constructor(name){
//         if(new.target === Vehicle){
//             throw new Error("Cannot instantiate abstract class vehicle directly");
//         }
//         this.name = name;
//     }
//     model(){
//        throw new Error('Model must be implemented');
//     };

//     // methods, startEngine

//     startEngine(){
//         throw new Error("Abstract methods 'startEngine' must be implemented in subclass");
//     }
// }

// class Car extends Vehicle{
//     // the methods startEngine must be implemented if not it will throw the error, so it forces to implement
//     startEngine(){
//         console.log(`${this.name} engine started`);
//     }
//     super(model);
// }
// const myCar = new Car('Togota');
// myCar.startEngine();

class Vehicle{
    constructor(name){
        if(new.target === Vehicle){
            throw new Error("Cannot instantiate abstract class without vehicle directly")
        }
        this.name = name;
    }

    // abstract methods: must be implemented by the subclass
    model() {
        throw new Error("Error 'model' must be implemented in subclass")
    }

    // concrete methods: shared by all vehicles
    inof(){
        console.log(`This is a vehicle named ${this.name}`);
    }
}

// subclass
class Car extends Vehicle{
    constructor(name, carModel){
        super(name);
        this.carModel = carModel;
    }

    // model must be implemented because it is abstact class
    mode(){
        console.log(`car mode: ${this.carModel}`);
    }
}

class Bike extends Vehicle{
    constructor(name, bikeType){
        super(name);
        this.bikeType = bikeType;
    }
    // model(){
    //     console.log (`Bike type: ${this.bikeType}`);
    // }

}

const myCar = new Car('BMW', 'bmw');
myCar.inof();
const myBike = new Bike('ducati', 20);
// myBike.model();
myBike.inof();

//encapsulation hides the internal state of the objects, that means it hides the methods and the variable properties of the class
// encapsulation, getters and setters, where the variable and methods are made private instead of the public