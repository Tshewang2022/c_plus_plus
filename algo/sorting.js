// sorting algo 
// bubble sort, quick sort, merge sort, heap sort, // most the part using the divide and conqure algo
// after lunch will be full sorting algorithm

// let arr = [23,4,9,0,2,7]; // will do this bubble sort
// const bubbleSort =(arr)=>{
//     console.log(arr.length);
//     // just compare the two adjacent element in the array, if less, just swap
//     for(let i =0; i <arr.length;i++){
//        for(let j =0; j< arr.length-i-1; j++){
            
//             if(arr[j]>arr[j+1]){
//                 let temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//        }
//     }
// }
// console.log(bubbleSort(arr));

// quick sort algorithm;
// this is how the quick sort algorithm works
// you have to select the low, high and the pivot element
// then do the divide and conquer algo on the unsorted element inside the array



// insertion sort

// selection sort 

// merge sort algo

// heap sort

// working part of the quick sort algo;
// it works base on the selection of the pivot element, high and low element

// let array3 = [4,5,6,2,9,90,8]; // performing the quick sort algo;
// // the ability to block off all the noises;
// // NOTE *** general concept of the quick sort algo
// // sorted_left + pivot + sorted_right

// let recusiveSort =(array3)=>{
//     // base condition of the recusion
//     if(array3.length <=1) return array3;
//     let pivot = array3[0];
//     let LS = [];
//     let RS =[];

//     for(let i =1; i < array3.length; i++){
//         if(pivot>array3[i]){
//             LS.push(array3[i]);
//         }else{
//             RS.push(array3[i]);
//         }
//     }

//     return [...recusiveSort(LS),  pivot, ...recusiveSort(RS)];
// }

// console.log(recusiveSort(array3));

// this is how the quick sort algo works
// working machanism of the insertion sort;
let array4=[2,6,1,8,9,0,5];
const insertionSort =(array4)=>{
    for(let i =1; i<array4.length; i++){
        let temp = array4[i]; // 6
        let j;
        // the bug is in this code
        for(j = i-1; j >= 0 && array4[j] > temp;  j--){
            // compare the element and shift the element
                // shift happens
                array4[j+1]=array4[j] 
             
            }
            array4[j + 1] = temp;
    }
    return array4;

}

console.log(insertionSort(array4));