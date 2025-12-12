package main

import "fmt"

func main() {
	age := 19
	ages := &age

	fmt.Println("Address:", ages) // prints address
	fmt.Println("Value:", *ages)  // prints 19 (dereference)
	fmt.Println("Original:", age) // prints 19
}

// to learn dsa in go,here is the following things that i need to know
// data types;
// string, int=> 8, 116, 32, 64 bits
// bool
// data struture, arrays, slice, and maps;
// it does not have the classes and objects;
// but firs moving into the algorithm, i need to know the basics methods in the arrays, slice and maps;
// pointers in go lang

/**
two symbols are being used in the pointers=> *(for dereferencing/will get the value, if you have given the address) and &(get address);

*/
