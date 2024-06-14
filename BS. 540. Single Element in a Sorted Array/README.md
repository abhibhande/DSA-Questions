**SO here i used to condition that is if mid is even then the similar element will be found on right side if previouslt no single element is present. if the element at mid is equal to the elemet left the single element is present on the left side. Same for odd mid position if element is found on the next index then single element is present on the back side and if it is equal to the previous element then single element is present on the right side. This is my Observation 

You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

 

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10