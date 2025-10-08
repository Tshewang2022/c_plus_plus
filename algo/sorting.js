// sorting algo 
// bubble sort, quick sort, merge sort, heap sort, // most the part using the divide and conqure algo
// after lunch will be full sorting algorithm

let arr = [23,4,9,0,2,7]; // will do this bubble sort
const bubbleSort =(arr)=>{
    console.log(arr.length);
    // just compare the two adjacent element in the array, if less, just swap
    for(let i =0; i <arr.length;i++){
       for(let j =0; j< arr.length-i-1; j++){
            
            if(arr[j]>arr[j+1]){
                let temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
       }
    }
}
console.log(bubbleSort(arr));

// quick sort algorithm;
// this is how the quick sort algorithm works
// you have to select the low, high and the pivot element
// then do the divide and conquer algo on the unsorted element inside the array