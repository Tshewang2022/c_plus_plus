package main

// import "fmt"

// // is binary tree a tree? yes
// // for all the things that i have learned, its not starting to get connected;
// // that will helps builds confidence in the code

// // things that i have learned for the binary tree;
// // left is always smaller than the right, if it were to store in the array
// // it should be stored in the level-order method;
// // and there are four traversal methods in tree
// // 1. level order (BFS)
// // 2. DFS(where, it contains for methods to the traversal dependings on the root nodes)
// // 2.1 pre order traversal, root first
// // 2.2 in order traversal, root middle
// // 2.3 post order traversal, root last,
// // but most imporantly, it always travel from left to right

// // when i learn the dsa, its not meant for the interviews
// // i want to learn the art of transfering the art of ideas into the codes;
// // learn how to optimize the solution and how it talks to the hardware level
// // if i were to build the binary tree from the given array, i should use the following formula
// // left => 2i+1;
// // right => 2i+2;
// // given the root has the position at i;

// // constructing the binary tree
// type Node struct {
// 	val   int
// 	left  *Node
// 	right *Node
// }

// // node representation
// // implement the post order traversal of the this array;

// func buildBinaryTree(arr []int, i int) *Node {
// 	// check the length of the array
// 	if i >= len(arr) {
// 		return nil
// 	} // the baseline for the recursion

// 	//
// 	node := &Node{val: arr[i]}
// 	node.left = buildBinaryTree(arr, 2*i+1)
// 	node.right = buildBinaryTree(arr, 2*i+2)
// 	return node

// }

// // post traversal method
// func postTraversalMethod(root *Node) {
// 	// check if the root is nil
// 	if root == nil {
// 		return
// 	}

// 	// if the root is not nil
// 	// left-> right-> root;
// 	postTraversalMethod(root.left)
// 	postTraversalMethod(root.right)
// 	fmt.Print(root.val, " ")

// }
// func inorderTraversalMethod(root *Node) {
// 	if root == nil {
// 		return
// 	}

// 	inorderTraversalMethod(root.left)
// 	fmt.Print(root.val, " ")
// 	inorderTraversalMethod(root.right)
// }

// func preOrderTraversalMethod(root *Node) {
// 	if root == nil {
// 		return
// 	}
// 	fmt.Print(root.val, " ")
// 	preOrderTraversalMethod(root.left)
// 	preOrderTraversalMethod(root.right)
// }

// // its the time to learn about the binary search tree

// // binary search tree of go implementation
// // insert, delete, modify
// func main() {
// 	arr := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

// 	// Build the binary tree
// 	root := buildBinaryTree(arr, 0)
// 	fmt.Print(root, "root tree")

// 	// Post-order traversal
// 	fmt.Print("Post-order traversal: ")
// 	postTraversalMethod(root)
// 	preOrderTraversalMethod(root)
// 	inorderTraversalMethod(root)
// 	fmt.Println()
// }
