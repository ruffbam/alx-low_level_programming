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
0x06-pointers_arrays_strings
3-strspn.c
3-strspn.c
678 B
/**
 * _strspn - function  calculates  the  length (in bytes) of the initial
 * segment of s which consists entirely of bytes in accept.
 * @s: string to search in.
 * @accept: bytes in which to search for.
 *
 * Return: the number (U_INT) of bytes matching accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, z, count, checker;
	i = 0;
	z = 0;
	checker = 0;
	count = 0;
	while (s[i] != '\0')
	{
		z = 0;
		checker = 0;
		while (accept[z] != '\0')
		{
			if (accept[z] == s[i])
			{
				count++;
				checker = 1;
			/* Break to early increase efficiency */
				break;
			}
			z++;
		}
		if (checker == 0)
			return (count);
		i++;
	}
	return (count);
}
