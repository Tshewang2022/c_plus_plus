package main

import "fmt"

// will be working on the searching algorithm;
// linear search, binary search, and jump search;
// how to streamline and break into the smaller pieces in the code;

func main() {
	var search = []int{1, 4, 5, 6, 90, 9, 8}
	var value int
	// now do a linear search, how can i do that;
	fmt.Print("Enter the number you want to search")
	fmt.Scan(&value)

	found := false

	for i := 0; i < len(search); i++ {
		if search[i] == value {
			fmt.Print("Number found at index:", i)
			found = true
			break
		}
	}
	if !found {
		fmt.Print("No number found for your match")
	}
}

// implementation of binary search
func BinarySeach() {
	sortedArr := []int{1, 2, 3, 4, 5, 6, 7, 8, 9}
	fmt.Print("this is the array that i am working on", sortedArr)
	// binary search works, on the dividing into half;
}

// implementation of jump search
func JumpSearch() {
	sortedArr := []int{1, 2, 3, 4, 5, 6, 7, 8}
	fmt.Print(sortedArr, "sorted arrays")
}
