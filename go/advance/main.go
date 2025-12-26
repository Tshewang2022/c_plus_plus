package main

import "fmt"

// create a type of stack & queue
type stack struct {
	items []string
}

// its like the double type data type, type inside the type;

type queue struct {
	items []int
}

func (S *stack) push(val string) {
	// the method of the slice remains same
	S.items = append(S.items, val)
}

// this is the implementation of queue;
func (S *stack) pop() (string, bool) {
	// check the length of the items
	if len(S.items) == 0 {
		return " ", false
	}
	// this implementation is called the stack
	top := S.items[len(S.items)-1]
	S.items = S.items[:len(S.items)-1]
	return top, true
}

// how does the queue works

func (q *queue) pushq(val int) {
	//pushing the value inside the queue
	q.items = append(q.items, val)
}

func (q *queue) dequeue() (int, bool) {
	// check if the queue is empty, if empty, return 0, and false
	if len(q.items) == 0 {
		return 0, false
	}

	// if the queue is not empty, find the front;
	front := q.items[0]
	q.items = q.items[:1]
	return front, true
}
func main() {
	var st stack

	var q queue

	st.push("tshewang")
	q.pushq(9)
	q.dequeue()

	// int of two type, signed and unsigned=> one that contains both the positive and negative one that contains onlu
	// the positive only
	// signed , contains both the positive and negative number

	names := []string{"tenzin", "rinchen", "nado", "kado", "purpa"}
	// methods of the
	// at the particular index

	// removing the element at the last index;

	// to remove the first element from the slice
	names = names[1:]

	// implementation of queue and stack in from the concepts of the slice

	fmt.Println(names)
}
