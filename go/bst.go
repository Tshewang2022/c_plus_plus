package main

// import "fmt"

// // create a node data type
// type Node struct {
// 	val   int
// 	left  *Node
// 	right *Node
// }

// // inhead tracing and visualization process

// func insert(root *Node, key int) *Node {
// 	// if the root is empty
// 	if root == nil {
// 		fmt.Printf("Inserted: %d\n", key)
// 		return &Node{val: key}
// 	}

// 	// if the key is less than the root value
// 	if key < root.val {
// 		root.left = insert(root.left, key)
// 	} else if key > root.val {
// 		root.right = insert(root.right, key)
// 	}
// 	// return the root
// 	return root
// }

// func search(root *Node, key int) *Node {
// 	// this is same like in all the search
// 	// the base case for the recursion
// 	if root == nil || root.val == key {
// 		return root
// 	}

// 	// if the key is less than the root value
// 	if key < root.val {
// 		return search(root.left, key)
// 	} else if key > root.val {
// 		return search(root.right, key)
// 	}
// 	return root
// }
// func findMin(root *Node) *Node {
// 	current := root
// 	for current.left != nil {
// 		current = current.left
// 	}
// 	return current
// }

// func deleteNode(root *Node, key int) *Node {
// 	if root == nil {
// 		return root
// 	}

// 	if key < root.val {
// 		root.left = deleteNode(root.left, key)
// 	} else if key > root.val {
// 		root.right = deleteNode(root.right, key)
// 	} else {
// 		// THIS IS THE NODE TO DELETE!
// 		fmt.Printf("  → FOUND IT! Node %d matches key %d\n", root.val, key)

// 		// Case 1: Leaf node
// 		if root.left == nil && root.right == nil {
// 			fmt.Printf("  → Case 1: Leaf node, returning nil\n")
// 			return nil
// 		}

// 		// Case 2a: Only right child
// 		if root.left == nil {
// 			fmt.Printf("  → Case 2: Only right child exists\n")
// 			return root.right
// 		}

// 		// Case 2b: Only left child
// 		if root.right == nil {
// 			fmt.Printf("  → Case 2: Only left child exists\n")
// 			return root.left
// 		}

// 		// Case 3: Two children
// 		fmt.Printf("  → Case 3: Two children exist\n")
// 		successor := findMin(root.right)
// 		fmt.Printf("  → Replacing %d with successor %d\n", root.val, successor.val)
// 		root.val = successor.val
// 		root.right = deleteNode(root.right, successor.val)
// 	}
// 	return root
// }
// func main() {
// 	// create the root node
// 	var root *Node

// 	// insert values into the BST
// 	values := []int{5, 30, 2, 40, 7, 60, 80}
// 	for _, v := range values {
// 		root = insert(root, v)
// 	}
// 	// search for a value in the BST
// 	key := 7
// 	result := search(root, key)
// 	if result != nil {
// 		fmt.Printf("Found: %d\n", result.val)
// 	} else {
// 		fmt.Printf("Not Found: %d\n", key)
// 	}
// 	// The BST is now created with the given values
// }
