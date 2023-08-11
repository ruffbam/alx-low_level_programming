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
0x01-variables_if_else_while
102-print_comb5.c
102-print_comb5.c
551 B
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int tho;
	int hun;
	int ten;
	int bas;
for ( tho = 0 ; tho < 10 ; tho++)
{	
	for (hun = 0 ; hun <= 10 ; hun++)
	{
	
		for (ten = 0 ; ten < 10 ; ten++)
		{
			for ( bas = 0 ; bas < 10 ; bas++)
			{
				putchar('0' + tho);
				putchar('0' + hun);
				putchar(32);
				putchar('0' + ten);
				putchar('0' + bas);
				if (!(tho == 9 && hun == 8))
				{
					putchar(',');
					putchar(32);
				}
				bas++;
			}
		}
	}
}
	putchar('\n');
	return (0);

