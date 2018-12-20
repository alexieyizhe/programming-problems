# Data Structures



# Algorithms

#### Binary Search

A more efficient way to search for a value inside a __sorted__ array of values. 

1. Start at the middle of the array. Check if value is equal to value we're searching for. If so, terminate and return the position.
2. If value is:
   - Larger, look at the middle of upper half of array. 
   - Smaller, look at the middle of lower half of array.
3. Repeat by halving array every time.

==Runtime:== __$O(log\ n)$__  

