//this will be the basic for learning the dart;
// fundemental data types; where it will be broken down into the premitive data type and abstract data types
// and all the data types will be given and its methods will be learning here

// fundemental data types
// int, double, String, bool, List<T>(array), Set, Map
// void main(){
//     print('hello world !');
// }
// the methods of declaring the variable in dart
/**
 * 1. using the explicite type=> specific data types
 * 2. using the var, once assigned using the var, you cannot change the data types 
 * 3. using dynamic, the change in the value is accepted
 * 4. using final variables can set only once, and but contents are mutable**/

 // what are the methods related to the data types?
 // string,
 // Number
 // List
 // Map
 // Set
 // type conversion
// import 'dart:io'; // reading the input streams; the methods of importing the lib
// *** dart is the static type and compiled type language ***
// *** compilations=> AOT,  Ahead Of Time and other one is JIT=> Just In Time

// every dart program starts with the main function
// void=> it does not return anything
//  main (){
//     stdout.writeln('what your name. ?');
//     String name = stdin.readLineSync()!;
//     print('my name is $name');
//  }
 // collecting the user inputs

 // for the strong type language, the variable is know at the compile time(for example like, c++, c , and java);
 // for dynamic type language, the variable is know at the run time(for example, javascript, python and dart);

// main(){
//    // there are 5 basics type in dart programming lang
//    // int
//    // double
//    // String
//    // bool
//    // dynamic
//    int amount1 =100;
//    print(amount1);
//    var amount2 =900;
//    print(amount2);

//    double amount=100.1;
//    print(amount);
//    var amount3 =200;

//    print(amount3);
//    String name1 ='tshewang';
//    print(name1);

//    dynamic weakprogramming ='gyaltshen';

//    print(weakprogramming);
// }
// the difference between the compile time and the run tim
// compile time, the code will be converted in the machine code, where it will check for the syntax error and the type errors and other satics issues
// in run time, the compiled code will be run by the computer and, all the logic and calculations will be performed with the memo management;
 
// data conversion 
// int.parse('1')=> will convert 1 int; so in general we use the .parse method;
// toString => to convert into the string from other data type;

// Null aware operator
// (?.), (??), (??=)


// Ternary operator

// void main(){
//    int x =100;
//    var result = x%2==0?"Event":"Odd";
//    print(result);
// }

// // Type test;
// // conditional statement=> works same like the javascript;

// // all the conditional statements works same like the javascript;

// // three build-in collection in dart
// // List, works same like the arrays in the javascript
// // Map, => key value pair, works same like the javascript map;
// // Set, => the unique collection of the element, can be defined using {'',''};

// // function in dart
// dynamic square(var num){
//    return num * num;
// }

// // the function that does not return anything
// void showOutPut(var msg){
//    print(msg);
// }

// list it its methods;
// main(){
//    List names = [4,2,9, 0, 8];
//    print(names[0]);
//    names.add(18);
//    names.insert(0, 4);
//    names.getRange(0, 3);
//    names.sort();
//    names.removeLast(); // remove the last element;
//    // names.clear();

//    print(names);
// }
// methods for the set

main(){
   // set=> only connect the unique set of elements inside it
   List num =[1,1,2,76, 90, 90]; // can add, remove, clear
   Set names ={...num};
   print(names);
}