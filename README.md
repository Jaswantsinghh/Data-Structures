# Data-Structures
A data structure is a particular way of organizing data in a computer so that it can be used effectively. 
## 1. 1D ARRAY:-
Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an index.

All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.
### Worst Case Complexity 
Access - O(1)

Add - O(n)

Delete - O(n)

Search - O(n)

## 2. 2D ARRAY:-
The two-dimensional array can be defined as an array of arrays. The 2D array is organized as matrices which can be represented as the collection of rows and columns. However, 2D arrays are created to implement a relational database lookalike data structure. It provides ease of holding the bulk of data at once which can be passed to any number of functions wherever required.
### Worst Case Complexity
Access - O(1)

Add - O(n)

Delete - O(n)

Search - O(n)

## 3. LINKED LIST:-
Like arrays, Linked List is a linear data structure. Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers.
### Why to choose linked list over arrays?
When we declare an array, we also declare number of elements which get fixed for use but after that if we want to add some more elements i the array, then we have to declare a new array again and would copy elements from original array to new array or if we want to delete an element from an array then the space taken by that element will be not deleted and this will result in wastage of memory as well as inefficiency. So, if the data we are storing is not fixed and needed to be edited time by time, then linked list will work well as compared to an array.
### Types of Linked Lists:-
1. Singly Linked List.
1. Doubly Linked List.
1. Circular Linked List.
#### 1. Singly Linked List:-
In a singly linked list, each node stores a reference to an object that is an element of the sequence, as well as a reference to the next node of the list. It does not store any pointer or reference to the previous node.
To store a single linked list, only the reference or pointer to the first node in that list must be stored. The last node in a single linked list points to nothing.
##### Worst Case Complexity
Acess - O(n)

Insert - O(n)

Search - O(n)

Delete - O(n)

