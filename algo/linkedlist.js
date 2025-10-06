// single linked 
class Node{
    constructor(value){
        this.value = value;
        this.next = null; // this will be the pointer at first which will be the null pointer
    }
}
// must be done till the advance topics in javascript only by today
// this will help me honed the basics and help me the road to mastery of the complex topics

class Linkedlist {
    // methods, adding the new element
    constructor(value){
        this.head = value;
        this.size = 0;
    }

    // create the node 
    // append=> this is the method
    // adding at the end of the node
    append(value){
        // create a new node 
        const newNode = new Node(value);
        // if newNode is the first node
        if(!this.head ){
            this.head = newNode
            // creat the node 
        }else{
            // already exit append the node to the existing node
            let current = this.head;
            while(current.next){
                current = current.next
            }
            current.next = newNode;
        }
        this.size++;
    }
    // prepend
    // adding the node at the beginning
    prepend(value){
        const newNode = new Node(value); // creating a new node
        newNode.next= this.head;
        this.head = newNode;
        this.size++;
    }

    // remove the element
    remove(value){
        // check if the head node is empty
        if(!this.head) return null;

      
        // check if the given value is head node, if yes remove
        if(this.head.value === value){
            // prepare to remove the node
            this.head = this.head.next;
            this.size--;
            return;
        }

        //loop through the linked list to find the right value to be removeds
        let current = this.head;
        while(current.next && current.next.value !== value){
            current = current.next;
        }

        if(current.next){
            current.next = current.next.next;
            this.size--;
        }

    }

    // print the element
    print() {
    let current = this.head;
    let result = "";
    while (current) {
      result += current.value + " -> ";
      current = current.next;
    }
    result += "null";
    console.log(result);
  }

}
const list = new Linkedlist();
list.append(10);
list.append(20);
list.prepend(5);
list.print(); // 5 -> 10 -> 20 -> null
list.remove(10);
list.print(); // 5 -> 20 -> null
