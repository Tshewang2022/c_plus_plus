package main

import (
	"fmt"
	"math"
)

// will be working on the searching algorithm;
// linear search, binary search, and jump search;
// how to streamline and break into the smaller pieces in the code;

func main() {
	// BinarySeach()
	JumpSearch()
}

// implementation of binary search
func BinarySeach() int {
	sortedArr := []int{1, 2, 3, 4, 5, 6, 7, 8, 9}
	// binary search works, on the dividing into half;
	l := 0
	r := len(sortedArr) - 1

	const target = 4
	mid := (r + l) / 2
	fmt.Println(mid, "printing mid")

	for l <= r {
		if sortedArr[mid] == target {
			return mid
		} else if sortedArr[mid] < target {
			l = mid + 1
		} else {
			r = mid - 1
		}

	}
	return -1
}

// implementation of jump search
func JumpSearch() int {
	sortedArr := []int{1, 2, 3, 4, 5, 6, 7, 8}
	l := len(sortedArr) - 1 // the length of the sorted arrays
	prev := 0
	fmt.Print(prev, "prev")
	step := int(math.Sqrt(float64(sortedArr[l])))
	const target = 8

	for sortedArr[int(math.Min(float64(step), float64(l)))-1] < target {
		prev = step
		step += int(math.Sqrt(float64(l)))
		if prev >= l {
			return -1
		}
	}
	//  all is being played by this, logic, ==
	for i := prev; i < int(math.Min(float64(step), float64(l))); i++ {
		if sortedArr[i] == target {
			return i
		}
	}
	return -1
}

// never start something unless it has visible finish line;
