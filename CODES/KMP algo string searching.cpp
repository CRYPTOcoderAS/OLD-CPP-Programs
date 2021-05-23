#KMP Algorithm for string searching
int KMP(char *s, char *p)
{
	int i,j,m,n;
	n=strlen(s);
	m=strlen(p);
	for(i=0,j=0;i<n&& j<m;i++,j++)
	while((j>=0)&&(s[i]!=p[j]))
j+next [j];
if(j==m)
return i-m;
else
return -1;
}
//s=ababbaababababb
//p=abababb

#Boyer-Moore Algorithm (mismatching occurs if)
//s=xyxxyzxyyzyxyyxyxyy
//yxyxyy
//working of a right to left string searching algorithm with shifting the 
// pattern to the right after a mismatch
void shift (char*P)
{
	int i,j;
	char x;
	for each chr "x" in the set of the symbols
	{
		if"x" does not belong to "p"
		shift[index(x)]=m;
	}
	for(i=0;i<m;i++)
	shift[index(p[i])]=m-i-1;
}

	
	
	
	
}

