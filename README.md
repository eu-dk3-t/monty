# monty
A collection of projects completed as part of the ALX Software Engineering program.

## Usage of opcode:

* **push**
  * Usage: `push <int>`
  * Pushes an element to the stack.

* **pall**
  * Prints all values in the stack/queue, starting from the top.

* **pint**
  * Prints the top value of the stack/queue.

* **pop**
  * Removes the top element of the stack/queue.

* **swap**
  * Swaps the top two elements of the stack/queue.

* **nop**
  * Does not do anything.

* **add**
  * Adds the top two elements of the stack/queue.

* **sub**
  * Subtracts the top element of the stack/queue from the second element from the top.

* **mul**
  * Multiplies the top two elements of the stack/queue.

* **div**
  * Divides the second element from the top of the stack/queue by the top element.

* **mod**
  * Computes the modulus of the second element from the top of the stack/queue divided by the top element.

* **pchar**
  * Prints the character value of the top element of the stack/queue.
  * The integer at the top is treated as an ASCII value.

* **pstr**
  * Prints the string contained in the stack/queue.
  * Prints characters element by element until the stack/queue is empty, a value is `0`, or an error occurs.

* **rotl**
  * Rotates the top element of the stack/queue to the bottom.

* **rotr**
  * Rotates the bottom element of the stack/queue to the top.

* **stack**
  * Switches a queue to stack mode.

* **queue**
  * Switches a stack to queue mode.

## Instance run:

	$ cat instance.m
queue
push 1
push 2
push 3
pall
stack
push 4
push 5
push 6
pall
add
pall
queue
push 11111
add
pall
	$ ./monty instance.m
1
2
3
6
5
4
1
2
3
11
4
1
2
3
15
1
2
3
11111
