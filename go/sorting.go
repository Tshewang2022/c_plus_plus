package main

import "fmt"

// sorting algorithm in go
// bubble sort, selection sort, insertion sort, and merge sort, and heap sort;
// the concept of the bubble sort;=> compare the element to the adjenct element, if it greater, swap the place;

// sorting => swaping
// searching => matching
func bubbleSort() {
	arr := []int{1, 29, 0, 7, 6, 2, 3}
	// compare the element from one to adject;
	l := len(arr) - 1
	for i := 0; i < l; i++ {
		for j := 0; j < l-i-1; j++ {

			if arr[j] > arr[j+1] {
				arr[j], arr[j+1] = arr[j+1], arr[j]
			}
		}
	}
	fmt.Println(arr)
}

// how does the insertion algo works;
func insertionSort() {
	arr := []int{1, 29, 0, 7, 6, 2, 3, 7}
	l := len(arr)

	for i := 1; i < l; i++ {
		// 1 is already consider as the sorted;
		key := arr[i] // element to be inserted
		j := i - 1

		for j >= 0 && arr[j] > key {
			arr[j+1] = arr[j]
			j--
		}
		arr[j+1] = key
	}

	fmt.Println(arr, "print the array")
}

func selectionSort() []int {
	// working on the selection sorting algo;
	// find the smallest in the array, and swap it the first element;
	arr := []int{1, 29, 0, 7, 6, 2, 3, 7}
	l := len(arr)

	for i := 0; i < l-1; i++ {
		minIndex := i

		for j := i + 1; j < l; j++ {
			if arr[j] < arr[minIndex] {
				minIndex = j
			}
		}
		arr[i], arr[minIndex] = arr[minIndex], arr[i]
	}
	fmt.Print(arr)
	return arr
}

func main() {
	// bubbleSort()
	// insertionSort()
	selectionSort()

}
