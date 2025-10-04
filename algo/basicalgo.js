// stack=> first in last out concept;
// can be applied using the array 
const stackAlgo = ()=>{
    const arr = []; // defined the empty array;
    // pop =>  remove the last element
    // push=>   add the element from the last element                                                                                                                  

    // this is the concept of the stack
    // so it modifies the data
    arr.push(10);
    arr.push(50);
    arr.push(90);
    console.log(arr);
    arr.pop(); // will remove the 90 from the array
    console.log(arr);
}
stackAlgo();


const queue = ()=>{

    const arr = [];
    // queue can be implemented using the push and shift
    arr.push(90);
    arr.push(98);
    arr.push(9);
    console.log(arr);

    arr.shift(); // remove the element from the index(0);
    console.log(arr);
}
queue();

// linked list, single and double
