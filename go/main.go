// six main points about go
/**
1. statically typed lan
2. strongly typed lan
3. go is compiled
4. fast compile time
5. build in concurrency support
6. simplicity
**/

// package => module
package main

import "fmt"
// signed => can be both the positive and negative
// unsigned => only the postive, that is best for the wallet integrations;
// here the data type of all the language
// numbers, string, boolean

// operations=> basic math operations
// loops 
// 

// how to declare the variables in the go;
// var
// const
// := , this is the shorthand for declaring the variable in the go lang
// NOTE** the variable declaration can be implicit or explicit, if explicit, go will assign the type naturally;


// ALERT*** although, numbers belongs to the int, it itself have the different type, so it cannot be added, if of different type;
// in simple, there is no type coercion ;
// this will lead the memory overflow, if miscaculated;
// main function => entry point
func main() {
	fmt.Println("Hello, World!")
}	