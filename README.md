![get_next_linem](https://user-images.githubusercontent.com/63206471/159620377-66c0ca2a-3d22-46d6-9b92-11e3e02c51f8.png)

# Get Next Line
- [Introduction](#introduction)
- Notion
- [The Project](#the-project)

## Skills that I have improved
- Unix
- Rigor
- Algorithms & AI

## Introduction
This project will not only allow the student to add a very convenient function to your collection, but it will also make they learn a highly interesting new concept in C programming: static variable.

## The project
As the project's name suggests this is a function that will read a file descriptor and _get the next line_ from it. Each function's call will return one line at a time but if there is nothing else to read or if an error ocurred, it should return **NULL**.

### What I have learned during this project?
- Memory Allocation
- File Descriptors
- Read and Open functions
- Static and Global Variables

### What are my thoughts about this project?
In my opinion, this is one of the projects that truly gave me the foundation of programming in C. The reason is that, after finishing _get next line_ function is possible to see what is inside a file. Since you know what is inside a file it is also possible to delete it, update it or perform any action you want based on what is inside that file.
In addition to this, we have to learn about, read and open functions. These are the functions that opens a program to external resources. Through them and also file descriptors is possible to manipulate many things

### Application Flow

![gnl](https://user-images.githubusercontent.com/63206471/164132801-c4a0d3fa-306f-4f18-beb6-4ca9cbfe7bec.png)

### How to run It?

```
# Clone the repository
https://github.com/adrianofaus/Projects_42_School.git

# Access the folder
cd Projects_42_School/2.Get_next_line

# Compile your main with get_next_line files
clang get_next_line.c get_next_line_utils.c get_next_line.h main.c

# Run the binary
./a.out

```
### Example of a main.c
It will open the sample.txt file and read each line from this file until EOF.

```C
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
	char	*tmp;
	int	fd;

	fd = open("sample.txt", O_RDONLY);
	tmp = get_next_line(fd);
	while(tmp)
	{
		printf("%s", tmp);
		free(tmp);
		tmp = get_next_line(fd);
	}
	close(fd);
	return (0);
}
```
