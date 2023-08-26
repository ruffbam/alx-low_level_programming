Toggle navigationMenu 
H
holbertonschool-low_level_programming
Project information
Repository
Files
Commits
Branches
Tags
Contributor statistics
Graph
Compare revisions
Issues
1
Merge requests
0
CI/CD
Deployments
Packages and registries
Monitor
Analytics
Wiki
Snippets

Close sidebar
Martin Smith
holbertonschool-low_level_programming
Repository
holbertonschool-low_level_programming
0x03-more_functions_nested_loops
9-fizz_buzz.c
9-fizz_buzz.c
494 B
#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int num;
	num = 0;
	while (num < 100)
	{
		num++;
		if ((num % 3) != 0 && (num % 5) != 0)
		{
			printf("%d", num);
		}
		else if ((num % 3)  == 0 && (num % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((num % 3) != 0 && (num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz");
		}
		if (num < 100)
			putchar(32);
	}
	putchar('\n');
	return (0);
}
