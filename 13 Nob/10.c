#include <stdio.h> 
#include <string.h> 
int main() 
{ 
	char str[50]; 
	printf("Enter your name : "); 
	//scanf("%s",str);// Not abble to capture anything after space
	
	//Option 1 to print string
	//scanf("%[^\n]s",str);
	//printf("You entered: %s", str);
	
	//option 2 to print string
	gets(str); 
	puts(str);
	
	return(0); 
}