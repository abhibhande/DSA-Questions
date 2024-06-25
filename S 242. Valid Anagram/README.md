Problem Link : https://leetcode.com/problems/valid-anagram/description/

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Solution  1 : By sorting the both string and checking occurances of each character
    Time Complexity : O(NlogN + NlogN + N) {Sorting s1,s2 and searching}
    Space Complexity : O(1)

Solution  2 : By using map to store the occurance of each character
    Time Complexity : O(N + N)(storing then checking);
    Space Complexity : O(N)
 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false