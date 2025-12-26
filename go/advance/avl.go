package main

// import "fmt"

// // this is the avl tree implementation in go
// // checking the balance factor
// // rotations=> ll, rr, lr, rl rotations

// // creating the nodes
// type Node struct {
// 	val    int // the value to be inserted
// 	height int // height of the tree
// 	left   *Node
// 	right  *Node
// }

// func getHeight(root *Node) int {
// 	if root == nil {
// 		return 0
// 	}
// 	return root.height
// }

// func getBalance(root *Node) int {
// 	// what if root node is nill
// 	if root == nil {
// 		return 0
// 	}
// 	// if the root is not nil
// 	bf := getHeight(root.left) - getHeight(root.right)
// 	return bf
// }

// // right rotate
// func rightRotate(y *Node) *Node {
// 	x := y.left
// 	T2 := x.right

// 	// now perform the roations
// 	x.right = y
// 	y.left = T2

// 	// update the height of the tree
// 	y.height = max(getHeight(y.left), getHeight(y.right)) + 1
// 	x.height = max(getHeight(x.left), getHeight(x.right)) + 1
// 	return x
// }

// // left rotate

// func leftRotate(x *Node) *Node {
// 	y := x.right
// 	T2 := y.left

// 	// perform the rotations
// 	y.left = x
// 	x.right = T2

// 	x.height = max(getHeight(x.left), getHeight(x.right)) + 1
// 	y.height = max(getHeight(y.left), getHeight(y.right)) + 1

// 	return y
// }

// // the value to be inserted
// func insertNode(root *Node, key int) *Node {
// 	// what should i return from this function
// 	//1.check if the root node is empty, if it empty, just fill the gap
// 	if root == nil {
// 		return &Node{val: key, height: 1}
// 	}

// 	// if the root node is not empty
// 	//2. insert the node
// 	if key < root.val {
// 		root.left = insertNode(root.left, key)
// 	} else if key > root.val {
// 		root.right = insertNode(root.right, key)
// 	} else {
// 		return root // duplicates are not allowed
// 	}

// 	// get balance factor
// 	balance := getBalance(root)

// 	// Left Left case
// 	if balance > 1 && key < root.left.val {
// 		return rightRotate(root)
// 	}

// 	// Right Right case
// 	if balance < -1 && key > root.right.val {
// 		return leftRotate(root)
// 	}

// 	// Left Right case
// 	if balance > 1 && key > root.left.val {
// 		root.left = leftRotate(root.left)
// 		return rightRotate(root)
// 	}

// 	// Right Left case
// 	if balance < -1 && key < root.right.val {
// 		root.right = rightRotate(root.right)
// 		return leftRotate(root)
// 	}

// 	return root

// }

// // how does the delete works in the avl tree
// func deleteAvlTreeNode(root *Node, key int) int {
// 	// key, what to delete from the node;
// 	// if the node i empty
// 	if root == nil {
// 		return 0
// 	}

// 	// and return the deleted node;
// 	//1. search the node that you want to delete
// 	//2. delete the node and replace with the other node in his positions;
// 	return key

// }

// // traversal methods to diplay the nodes;
// func inorderTraversalMethod(root *Node) {
// 	if root != nil {
// 		inorderTraversalMethod(root.left)
// 		fmt.Print(root.val, " ")
// 		inorderTraversalMethod(root.right)
// 	}

// }
// func main() {
// 	var root *Node

// 	// insert nodes
// 	values := []int{10, 20, 30, 40, 50, 25}
// 	fmt.Println("Inserting values:", values)
// 	for _, val := range values {
// 		root = insertNode(root, val)
// 	}

// 	inorderTraversalMethod(root)
// }
