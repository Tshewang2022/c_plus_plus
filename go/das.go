package main

import "fmt"

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
// implementation of the stack, queue, and linked list in go; using the slice;
// taking the user input from the terminal

// implementation of stack , queue, and linked list;

// func main() {
// 	age := 19
// 	ages := &age

// 	fmt.Println("Address:", ages) // prints address
// 	fmt.Println("Value:", *ages)  // prints 19 (dereference)
// 	fmt.Println("Original:", age) // prints 19
// 	stack()
// }

// type Stack struct {
// 	items []int //slice; that we can use
// }

// // push func
// func (s *Stack) push(vaule int) {
// 	s.items = append(s.items, vaule)
// }

// func (s *Stack) pop() (int, bool) {
// 	//check if the stack is empty;
// 	if len(s.items) == 0 {
// 		return 0, false
// 	}

// 	top := s.items[len(s.items)-1]
// 	s.items = s.items[:len(s.items)-1]
// 	return top, true
// }

// pop func
// peek func

// func (s *Stack) Peek() (int, bool) {
// 	if len(s.items) == 0 {
// 		return 0, false
// 	}
// 	return s.items[len(s.items)-1], true
// }

// this will add at the end of it
// implementation of the queue and dequeued;
// func (s *Stack) Qeueue(value int) {
// 	s.items = append(s.items, value)
// }

// func (s *Stack) Dequeued() (int, bool) {
// 	if len(s.items) == 0 {
// 		return 0, false
// 	}

// 	front := s.items[0]
// 	s.items = s.items[1:]
// 	return front, true
// }

// func stack() {
// 	var st Stack
// 	st.push(90)
// 	st.push(89)
// 	st.push(78)
// 	st.push(67)
// 	st.pop()
// 	fmt.Println((st.items))
//pop=> to remove the first ele
//push=> to add the new ele
//peek;=> to check the first ele;
// implementation of stack in go;
// first in, first out;
// here is what i wanted to do;
// will insert the numbers in the slice and print out in the terminal
// from what i have typed out;

// combining the knowledge that you have to create something that is new
// you call it whatever you want;
// task that i want to master after lunch;
// stack, queue, linked list
// searching and sorting algo;
// trees and map;

// 	var age []int
// 	fmt.Println("What number you want to print inside the array")

// 	// this is the infinite loop
// 	for {
// 		var x int
// 		fmt.Print("Number ?")
// 		fmt.Scan(&x)

// 		if x == -1 {
// 			break
// 		}

//			age = append(age, x)
//		}
//		fmt.Println("Numbers you entered:", age)
//	}
//
// how to create a linked list
// insertion at linked list
// deletion at linked list
// calculation the O(n) complexity;

type Node struct {
	value int
	next  *Node
}

type LinkedList struct {
	head *Node
}

// add the node at the end;
func (n *LinkedList) Append(value int) {
	// create a new node;
	newNode := &Node{value: value}

	// check if the head node is null or not
	if n.head == nil {
		n.head = newNode
		return
	}

	// walk to the end;
	current := n.head
	for current.next != nil {
		current = current.next
	}
	current.next = newNode
}

// now how does the prepend works;
func (n *LinkedList) Prepend(value int) {
	// create a new node;
	newNode := &Node{value: value}

	newNode.next = n.head
	n.head = newNode
	// if the node is not empty;

}

// delete the value from the node;

func (n *LinkedList) Delete(value int) {
	// check if the node is empty or not
	if n.head == nil {
		return
	}

	// if it is not empty;
	if n.head.value == value {
		n.head = n.head.next
		return
	}

	current := n.head
	for current.next != nil && current.next.value != value {
		current = current.next
	}
	if current.next != nil {
		current.next = current.next.next
	}
}
func (ll *LinkedList) Print() {
	current := ll.head
	for current != nil {
		fmt.Print(current.value, " -> ")
		current = current.next
	}
	fmt.Println("nil")
}
func main() {
	fmt.Println("Linked list mastery")
}
