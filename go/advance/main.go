package main

import "fmt"

// have to learn more about the how the short hand of : works;
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

// implementation of the linked list in go;
type Node struct {
	val  int
	next *Node
}

// this is the node creation;
type linkedList struct {
	head *Node
}

// we seems to write a code, but we dont seems to understand it fully the code,
// what it does and how its does, and why it does
// untill and unless you know that, you can never discover the full potential of the
// programming
func (n *linkedList) appendNode(val int) {
	// check if the node is empty or no
	newNode := &Node{val: val}
	if n.head == nil {
		n.head = newNode
		return
	}

	// if the given node is not empty;
	current := n.head
	// now loop over it
	for current.next != nil {
		current = current.next
	}
	current.next = newNode
}

// deleting the node at the given positions;
func (n *linkedList) deleteNode(val int) {
	// check if the head not is empty or not, if empty, return nothing;
	if n.head == nil {
		return
	}

	if n.head.val == val {
		n.head = n.head.next
		return
	}
	// if the head is not empty, loop over the node, and find the matches that matches the val
	current := n.head

	// it more of the searchin op than the delete;
	for current.next != nil && current.next.val != val {
		current = current.next
	}
	if current.next != nil {
		current.next = current.next.next
	}
}

func (n *linkedList) prependNode(val int) {
	// create a new node
	newNode := &Node{val: val}
	// it does not care if the node is empty or not;
	// even if the node is not empty;
	newNode.next = n.head
	n.head = newNode

}

// it will be fun to work on the double linked list;

func main() {
	var st stack
	var q queue
	st.push("tshewang")
	st.pop()
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
