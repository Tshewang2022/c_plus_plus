// searching algo 
// linear search and binary search,  
// it is the search from the array, linked list and hashtable
// somehow need frame my own arch

// linear search
// let array = [4,5,6,6,8,9];
// // search for the 9; if present return true, if not false;
// const linearSearch=(array, x)=>{
//     // linear search, using the for loop
//     for(let i =0; i<array.length; i++){
//       if(array[i]===x){
//         console.log(true);
//         return true
//       }
      
//     }
//     console.log(false);
// }
// linearSearch(array, 1);

// binary search=> it works it the divide and conqure algo, on the sorted array
// const array2 = [1,2,3,4,5,6,7,8,9,10];
// // it will be divided into the right, left and middle section

// const binarySearch = (array2, y) => {
//   let low = 0;
//   let high = array2.length - 1;

//   while (low <= high) {
//     let mid = Math.floor(low + (high - low) / 2);

//     if (array2[mid] === y) {
//        return { index: mid, value: array2[mid] };
//     } else if (array2[mid] > y) {
//       high = mid - 1; 
//     } else {
//       low = mid + 1;
//     }
//   }

//   return -1; 
// };

// console.log(binarySearch(array2, 5)); // ✅ Output: 8

// binarySearch(array2, 9);

// console.log(Math.min(3, 1));
