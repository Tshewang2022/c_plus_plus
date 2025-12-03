// sorting algo, the methods of arranging the data from the small the bigger one
// list<int> arr = [0,9,6,1, 8, 6,4];
// if i want to sort this one, how can i sort it;
// types of sorting algo
// bubble sort, and binary sort
// the concept of recursion

// int recusion(int num){
//   // what is the base conditions of this recursion;
//   var count;
//   if(num<=0) return 1;
  
//   return num+recusion(num-1);
// }

// main(){
//   print(recusion(9));
// }
// everything that is fundemental, i must master it, because fundementals are the building blocks of the any development

// bubble sorting=> this is how the bubble sort works in code implementations

// jsut compare the adjacent element;
// there should be change in methods, this method of implementation is not working right now;

List<int> BubbleSort( List<int> arr){
  // will be using the for loop to loop over the array
  int n = arr.length;
  // print(n); // this will print length of the array
  for(int i =0; i<n; i++){

    // need to make the comparison between the two element;
    for(int j =0; j<n-i-1; j++){
      //compare the two element
      if(arr[j]>arr[j+1]){
       int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
return arr;
}

// the quick sort works in the concept of divide and conqure algo

// List<int> QuickSort(List<int> arr){

//   return 0;
// }

main(){
List<int> arr = [0,9,6,1, 8, 6,4];

  print(BubbleSort(arr));
}

