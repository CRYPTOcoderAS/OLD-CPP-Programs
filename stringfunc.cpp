 #include<stdio.h>
 #include<string.h>
 int main ()
 {
 	char s1[80],s2[80];
 	gets(s1);
 	gets(s2);
 	printf("length %s,%s",s1,s2);
 	if(strchr("hello",'e'))
 	printf("e is in the hello ");
 	
 	return 0 ;
 	
 }
