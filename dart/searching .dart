// different types of searching algo
// binary search
// linear search
// jump search
// DFS
// BFS
import 'dart:math';

// the example of the linear search;
int linearSearch(List<int> arr, int x){
  int n = arr.length;
  for(int i =0; i<n; i++){
    if(arr[i]==x){
      return x;
    }
  }
  return 0;
}

// the concepts of the binary search=> works on divide and conqure algo;, it should have the sorted element;
int BinarySearch(List<int> arr, int x){
  // on implementation of the binary search
  // here is the following concepts
  int n = arr.length;
  int low =0;
  int high = n;

  // performing the binary search
  while(low<=high){
    int mid =  low + ((high - low) ~/ 2);
    if(arr[mid]==x){
      return mid;
    }else if(arr[mid]<x){
      low = mid+1;
    }else{
      high = mid-1;
    }
  }
  return -1;
}

// jump search algorithm;
// here is how the jump search works, it jumps on the fix index

main(){
  List<int> arr = [1,2,3,4,5,6,7,8];
  print(BinarySearch(arr, 6));
}