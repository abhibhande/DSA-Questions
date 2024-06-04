// Given an array Arr, with indexes running from 0 to N-1, select any two indexes, i and j such that i<=j-1. From subarray Arr[i...j], find the two smallest numbers and add them, you will get score for that subarray. Your task is to return maximum score possible in the given array Arr.
 

// Example 1:

// Input : arr[] = [4, 3, 1, 5, 6]
// Output : 11
// Subarrays with smallest and 
// second smallest are,
// [4, 3]        
// smallest = 3    second smallest = 4
// [4, 3, 1]    
// smallest = 1    second smallest = 3
// [4, 3, 1, 5]    
// smallest = 1    second smallest = 3
// [4, 3, 1, 5, 6]    
// smallest = 1    second smallest = 3
// [3, 1]         
// smallest = 1    second smallest = 3
// [3, 1, 5]     
// smallest = 1    second smallest = 3
// [3, 1, 5, 6]    
// smallest = 1    second smallest = 3
// [1, 5]        
// smallest = 1    second smallest = 5
// [1, 5, 6]    
// smallest = 1    second smallest = 5
// [5, 6]         
// smallest = 5    second smallest = 6
// Maximum sum among all 
// above choices is, 5 + 6 = 11