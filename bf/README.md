# Brainfuck

<p align="center">
 <img src= "https://onestepcode.com/wp-content/uploads/2020/10/brainfuck_code.png">

## Definition
Brainfuck is an esoteric programming language created in 1993 by Urban Müller.

Notable for its extreme minimalism, the language consists of only eight simple commands, a data pointer and an instruction pointer. While it is fully Turing complete, it is not intended for practical use, but to challenge and amuse programmers. Brainfuck requires one to break commands into microscopic steps.

The language's name is a reference to the slang term brainfuck, which refers to things so complicated or unusual that they exceed the limits of one's understanding, as it was not meant or made for designing actual software but to challenge the boundaries of computer programming.

## How install the interpreter?
You can install the bf interpreter:
```
sudo apt-get install bf
```

## How use the interpreter?
**Example:**
```
julien@ubuntu:~/monty/bf$ bf 1000-school.bf 
School
julien@ubuntu:~/monty/bf$ 
```
## Usage
[1001-add.bf](./1001-add.bf): The total of the two digits with be one digit-long (<10)
```
julien@ubuntu:~/monty/bf$ bf ./1001-add.bf
81
9julien@ubuntu:~/monty/bf$
```

## Table of contents
Files | Description
----- | -----------
[1000-school.bf](./1000-school.bf) | A Brainf*ck script that prints School, followed by a new line.
[1001-add.bf](./1001-add.bf) | A Brainf*ck script that add two digits given by the user.

