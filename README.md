
<div align="center">
    <h1>Monty</h1>
    <img src="https://pbs.twimg.com/media/CFYYWy6UEAE9Ow-.png" width="600" height="350">
</div>


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
|[errors_file.c](./errors_file.c) | Contains all the posibles exits to the program |
|[executer.c](./executer.c) | Contains the functions to open and read the file to execute|
|[opcodes.c](./opcodes.c) | Contains the functions to call the functions to be execute|
|[helper_functions.c](./herlper_functions.c) | Contains the functions like _strcmp and others, to be called in another file|
|[Makefile](./Makefile) | Contains the compilation and clear functions |
|[generate_authors.sh](./generate_authors.sh) | a file with all the names and corresponding emails of individual contributors |


## Usage

<details open>
<summary> <strong> Compilation </strong> </summary>

<br>

To compile the program this command has to be executed:
```
$ make all
```
This will create a compilation file, its name is `montyfile`. You can run this file in your terminal with the next command:
```
$ ./montyfile <file>
```
</details>

<details open>
<summary> <strong> Format </strong> </summary>

<br>

Format for user to write in "testfile.m":
`opcode argument`

</details>

<details open>
<summary> <strong> Examples </strong> </summary>

<br>

```
$ cat opcodetestfile.m

push 1

push 2

push 3

pall

$ ./montyfile opcodetestfile.m

3

2

1
```
</details>

## Allowable opcodes and what they do
| Opcode | Functionality |
|---------------- | -----------|
| **push** | Add element to the 'top' of stack and 'end' of queue |
| **pop** | Remove element from 'top' of stack and 'end' of queue|
| **pall** | Print every member of the structure |
| **pint** | Prints the member value at the top of stack |
| **swap** | Swaps the order  of the 1st and 2nd elements in stack |
| **add** | Add top two member values |
| **sub** | Subtract the top element from the 2nd top element |
| **div** | Divide the 2nd element by the top element |
| **mul** | Multiply the top two elements of the stack |
| **mod** | The remainder when the 2nd element is divided by the top element |
| **comment** | There is the ability to parse comments found in bytecode ->'#'|
| **nop** | Opcode should do nothing |

## Bugs
If you find any bug, please, let us know.

## Styling
All files have been written in the [Betty Style](https://github.com/hs-hq/Betty).

## Authors
* **Obed Rayo** <a href="https://github.com/ObedRav" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
* **Camilo Zapata** <a href="https://github.com/ZapataCamilo" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
