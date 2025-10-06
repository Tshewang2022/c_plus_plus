// in double linked list, it will have following property
// 1. data
// 2. left pointer
// 3. right pointer

// analysing the code in 3d space, because mind is such a powerful one
class Node {
    constructor(value){
        this.value = value;
        this.next = null // right pointer
        this.prev = null // left pointer that points to the prevs node
    }
}

class DoublelinkedList {
    
    constructor(value){
        this.head = value;
        this.tail = null;
        this.size = 0;
    }

    // method to add at the end of the linked list
    append(value){
        const newNode = new Node(value);

        // check if the head is empty
        if(!this.head){
            this.head = newNode;
            this.tail = newNode;
        }else{
            // if not empty, need to make through the loop
            newNode.prev = this.tail;
            this.tail.next = newNode;
            this.tail = newNode;
        }
        this.size++;
    }

    // method to add to the beginning of the linked list
    prepend(value){
        // create a node
        const newNode = new Node(value);

        // check if the head is empty
        if(!this.head){
            this.head = newNode;
            this.tail = newNode;
        }else{
            // if not empty
            newNode.next = this.head;
            this.head.prev = newNode;
            this.head = newNode;
        }
        this.size++;
    }

    remove(value){
        // check if the head is empty
        if(!this.head) return;

        // need to make loop over it
        let current = this.head;

        while(current){
            if(current.value === value){
                // remove the node
                if(current.prev){
                    current.prev.next = current.next;
                }else{
                    this.head = current.next;
                }

                if(current.next){
                    current.next.prev = current.prev;
                }else{
                    this.tail = current.prev;
                }
                this.size--;
                return; // remove only first occurrence
            }
            current = current.next;
        }

    }

    printForward(){
        let current = this.head;
        let result = "";
        while(current){
            result += current.value + '<->';
            current = current.next;
        }
        result += "null";
        console.log(result);

    }

    printBackward(){

    }

}
const dll = new  DoublelinkedList();
dll.append(10);
dll.append(20);
dll.prepend(5);
dll.printForward();  // 5 <-> 10 <-> 20 <-> null
dll.printBackward(); // 20 <-> 10 <-> 5 <-> null

dll.remove(10);
dll.printForward();  // 5 <-> 20 <-> null
dll.printBackward(); // 20 <-> 5 <-> null
