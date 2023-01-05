# MONTY

<p align="center">
 <img src= "https://pbs.twimg.com/media/CFYYWy6UEAE9Ow-.png" width="600" height="350" />

## Description
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

 <p align="center">
 <img src="https://github.com/ObedRav/holbertonschool-monty/blob/main/Stack_and_Queues.jpg" />

## List of Files

| File Name | Description |
|---------------- | -----------|
|[monty.h](./monty.h)    | Declaration of all functions to be used in the program, as well as libriaries and global variables|
|[main.c](./main.c) | Principal function|
|[operations.c](./operations.c) | Contains the functions to be used |
|[operations2.c](./operations2.c) | Contains the functions to be used |
|[errors_file.c](./errors_file.c) |Contains all the posibles exits to the program |
|[errors_file_2.c](./errors_file_2.c) |Contains all the posibles exits to the program |
|[executer.c](./executer.c) | Contains the functions to open and read the file to execute|
|[opcodes.c](./opcodes.c) | Contains the functions to call the functions to be execute|
|[helper_functions.c](./herlper_functions.c) | Contains the functions like _strcmp and others, to be called in another file|

## Formatting and Examples

Format for user to write in "testfile.m":
`opcode argument`

Examples:
`$ cat opcodetestfile.m`

`push 1`

`push 2`

`push 3`

`pall`

`$ ./montyfile opcodetestfile.m`

`3`

`2`

`1`

## Allowable opcodes and what they do
| opcode | functionality |
| --- | --- |
| push | add element to the 'top' of stack and 'end' of queue |
| pop | remove element from 'top' of stack and 'end' of queue|
| pall | print every member of the structure |
| pint | prints the member value at the top of stack |
| swap | swaps the order  of the 1st and 2nd elements in stack |
| add | add top two member values |
| sub | subtract the top element from the 2nd top element |
| div | divide the 2nd element by the top element |
| mul | multiply the top two elements of the stack |
| mod | the remainder when the 2nd element is divided by the top element |
| comment | there is the ability to parse comments found in bytecode ->'#'|
| nop | opcode should do nothing |

## Bugs
If you find any bug, please, let me know.

## Authors
* **Obed Rayo** [Github](https://github.com/ObedRav)
* **Camilo Zapata** [Github](https://github.com/ZapataCamilo)
