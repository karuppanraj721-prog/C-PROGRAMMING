#include<stdio.h> 
int main()
 {
 	char str[70];
 	printf("enter the line\n");
 	scanf("%[^\n]s",str);
 	printf("%s",str);
 	return 0;
}