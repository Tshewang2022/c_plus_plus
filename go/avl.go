package main

// import "fmt"

// // AVLNode represents a node in the AVL tree
// type AVLNode struct {
// 	val    int
// 	height int
// 	left   *AVLNode
// 	right  *AVLNode
// }

// // AVLTree represents the tree structure
// type AVLTree struct {
// 	root *AVLNode
// }

// func getHeight(n *AVLNode) int {
// 	if n == nil {
// 		return 0
// 	}
// 	return n.height
// }

// func getBalance(n *AVLNode) int {
// 	if n == nil {
// 		return 0
// 	}
// 	return getHeight(n.left) - getHeight(n.right)
// }

// // rightRotate performs a right rotation on the given node
// func rightRotate(y *AVLNode) *AVLNode {
// 	x := y.left
// 	T2 := x.right

// 	// Perform rotation
// 	x.right = y
// 	y.left = T2

// 	// Update heights
// 	y.height = max(getHeight(y.left), getHeight(y.right)) + 1
// 	x.height = max(getHeight(x.left), getHeight(x.right)) + 1

// 	return x
// }

// // leftRotate performs a left rotation on the given node
// func leftRotate(x *AVLNode) *AVLNode {
// 	y := x.right
// 	T2 := y.left

// 	// Perform rotation
// 	y.left = x
// 	x.right = T2

// 	// Update heights
// 	x.height = max(getHeight(x.left), getHeight(x.right)) + 1
// 	y.height = max(getHeight(y.left), getHeight(y.right)) + 1

// 	return y
// }

// func insertAVL(root *AVLNode, key int) *AVLNode {
// 	// if the node is empty
// 	if root == nil {
// 		return &AVLNode{val: key, height: 1}
// 	}

// 	// if the key less than the root node val
// 	if key < root.val {
// 		root.left = insertAVL(root.left, key)
// 	} else if key > root.val {
// 		root.right = insertAVL(root.right, key)
// 	} else {
// 		return root // duplicate keys not allowed
// 	}

// 	// update the height of the node
// 	root.height = 1 + max(getHeight(root.left), getHeight(root.right))

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

// // Insert adds a key to the AVL tree
// func (t *AVLTree) Insert(key int) {
// 	t.root = insertAVL(t.root, key)
// }

// // Search finds a key in the AVL tree
// func (t *AVLTree) Search(key int) bool {
// 	return search(t.root, key)
// }

// func search(node *AVLNode, key int) bool {
// 	if node == nil {
// 		return false
// 	}
// 	if key == node.val {
// 		return true
// 	}
// 	if key < node.val {
// 		return search(node.left, key)
// 	}
// 	return search(node.right, key)
// }

// // InOrder performs in-order traversal
// func (t *AVLTree) InOrder() {
// 	inOrder(t.root)
// 	fmt.Println()
// }

// func inOrder(node *AVLNode) {
// 	if node != nil {
// 		inOrder(node.left)
// 		fmt.Printf("%d ", node.val)
// 		inOrder(node.right)
// 	}
// }

// // PreOrder performs pre-order traversal
// func (t *AVLTree) PreOrder() {
// 	preOrder(t.root)
// 	fmt.Println()
// }

// func preOrder(node *AVLNode) {
// 	if node != nil {
// 		fmt.Printf("%d ", node.val)
// 		preOrder(node.left)
// 		preOrder(node.right)
// 	}
// }

// // Delete removes a key from the AVL tree
// func (t *AVLTree) Delete(key int) {
// 	t.root = deleteAVL(t.root, key)
// }

// func minValueNode(node *AVLNode) *AVLNode {
// 	current := node
// 	for current.left != nil {
// 		current = current.left
// 	}
// 	return current
// }

// func deleteAVL(root *AVLNode, key int) *AVLNode {
// 	if root == nil {
// 		return root
// 	}

// 	// Standard BST delete
// 	if key < root.val {
// 		root.left = deleteAVL(root.left, key)
// 	} else if key > root.val {
// 		root.right = deleteAVL(root.right, key)
// 	} else {
// 		// Node with one child or no child
// 		if root.left == nil {
// 			return root.right
// 		} else if root.right == nil {
// 			return root.left
// 		}

// 		// Node with two children
// 		temp := minValueNode(root.right)
// 		root.val = temp.val
// 		root.right = deleteAVL(root.right, temp.val)
// 	}

// 	// Update height
// 	root.height = 1 + max(getHeight(root.left), getHeight(root.right))

// 	// Get balance factor
// 	balance := getBalance(root)

// 	// Left Left case
// 	if balance > 1 && getBalance(root.left) >= 0 {
// 		return rightRotate(root)
// 	}

// 	// Left Right case
// 	if balance > 1 && getBalance(root.left) < 0 {
// 		root.left = leftRotate(root.left)
// 		return rightRotate(root)
// 	}

// 	// Right Right case
// 	if balance < -1 && getBalance(root.right) <= 0 {
// 		return leftRotate(root)
// 	}

// 	// Right Left case
// 	if balance < -1 && getBalance(root.right) > 0 {
// 		root.right = rightRotate(root.right)
// 		return leftRotate(root)
// 	}

// 	return root
// }

// // GetHeight returns the height of the tree
// func (t *AVLTree) GetHeight() int {
// 	return getHeight(t.root)
// }

// func main() {
// 	tree := &AVLTree{}

// 	// Insert elements
// 	fmt.Println("Inserting: 10, 20, 30, 40, 50, 25")
// 	tree.Insert(10)
// 	tree.Insert(20)
// 	tree.Insert(30)
// 	tree.Insert(40)
// 	tree.Insert(50)
// 	tree.Insert(25)

// 	fmt.Print("In-order traversal: ")
// 	tree.InOrder()

// 	fmt.Print("Pre-order traversal: ")
// 	tree.PreOrder()

// 	fmt.Printf("Tree height: %d\n", tree.GetHeight())

// 	// Search
// 	fmt.Printf("Search 25: %v\n", tree.Search(25))
// 	fmt.Printf("Search 15: %v\n", tree.Search(15))

// 	// Delete
// 	fmt.Println("\nDeleting 20")
// 	tree.Delete(20)
// 	fmt.Print("In-order traversal: ")
// 	tree.InOrder()

// 	fmt.Printf("Tree height after deletion: %d\n", tree.GetHeight())
// }
