
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
#### 2. Doubly Linked List:-
Doubly linked list is a type of linked list in which each node apart from storing its data has two links. The first link points to the previous node in the list and the second link points to the next node in the list. The first node of the list has its previous link pointing to NULL similarly the last node of the list has its next node pointing to NULL. 
##### Worst Case Complexity
Access - O(n)

Insert - O(n)

Search - O(n)

Delete - O(n)
#### 3. Circular Linked List:-
Circular linked list is a linked list where all nodes are connected to form a circle. There is no NULL at the end. A circular linked list can be a singly circular linked list or doubly circular linked list.
##### Worst Case Complexity
Access - O(n)

Insert - O(n)

Search - O(n)

Delete - O(n)
