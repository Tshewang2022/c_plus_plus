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

// signed => can be both the positive and negative
// unsigned => only the postive, that is best for the wallet integrations;
// here the data type of all the language
// numbers, string, boolean

// operations=> basic math operations
// loops , there is only 1 loop in the go, that is for loop
//

// how to declare the variables in the go;
// var
// const
// := , this is the shorthand for declaring the variable in the go lang
// NOTE** the variable declaration can be implicit or explicit, if explicit, go will assign the type naturally;

// ALERT*** although, numbers belongs to the int, it itself have the different type, so it cannot be added, if of different type;
// in simple, there is no type coercion ;
// this will lead the memory overflow, if miscalculated;
// main function => entry point
// func main() {
// 	name := "tshewang gyaltshen"

// 	// const => it must be know at the compile time

// 	// go is more like kind of direct in terms of the type conversion
// 	// if you were to convert from

// 	// the most common datatypes in go
// 	// array, map, slice(dynamic arrays)
// 	age := 19.9
// 	var ages int = int(age)
// 	fmt.Println(ages)

// 	// declaring the arrays in go
// 	numbers := [4]int{1, 2, 3, 4}

// 	// print the numbers that is present inside the array
// 	for i := 0; i < len(numbers); i++ {
// 		fmt.Println(numbers[i])
// 	}

// 	// methods of array in go;
// 	// len(), checks length;
// 	// copy(), copy the arrays;
// 	// cap()=> checks the size of the array;

// 	fmt.Println(numbers)

// 	// how to create a slice in the go
// 	numbers2 := []int{1, 2, 3, 4, 5, 6}
// 	numbers2 = append(numbers2, 5)
// 	fmt.Println(numbers2)

// 	// map in go;
// 	heights := map[string]int{
// 		"apple":  5,
// 		"banana": 3,
// 	}
// 	fmt.Println(heights)

// 	// it is a beautiful language;
// 	if reflect.TypeOf(name).String() == "string" {
// 		fmt.Println("yo man , that is string")
// 	}
// 	fmt.Println("Hello, World!", name)

// 	// so now, it will work
// }

// different methods to print in go
// print=> use to print the output without new line
// println => use to print with the new line
// printf => use to print with verbs; to have the clearn outputs, and in readable format;
// from tomorrow onwards, get fully engaged into the production development;
