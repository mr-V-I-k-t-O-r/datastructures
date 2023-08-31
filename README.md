# DATA STRUCTURES
---
this is a simple realization of some data strustures, which need only for training in coding this and for better understatndig it.

under header of every data structure has a name of file, where it places.

## array 
---
### static array
---
file array.cpp includes simple version of a static array. 

It can`t be expand, but it has the smallest time of access for every element it is O(1).

elements are located successively in the memory.

### dynamic array
---
file array.cpp includes simple version of a dynamic array.

It can be expand, by allocated memory for some elements but sometimes it need to relacate all array. Time of access for every element is  O(1), time of add element to end is O(1) or O(n) - relocate. Time of add element in begin or in center is also O(n).

elements are located successivly in the memory and there is alocated memory for some elements.

## linked_list
---
### doubly connected
---
file linked_list.cpp includes simple version of a doubly connected linked list, every element of which has two links (to the next element and to the previous).

It can be expand while you have free memory but time of access for elements is more than in array and it is different for every element, on the averrage it is O(n).

elements are located in different places in the memory and every element has links which gives ability to move between elements.

### singly connected
---
file linked_list.cpp includes simple version of a singly connected linked list, every element of which has one link (to the next element).

It can be expand while you have free memory but time of acces for elements is more than in array and it is different for every element, on averrage it is O(n) also you can\`t move to the previous element, because you don\`t now where is it places.

elements are located in different places in the memory and every element has link which gives ability to move to the next element.
