#include <stdio.h>
#include <string.h>
int main(){
	char str1[15], str2[15];
	strcpy(str1, "linguagem ");
	strcpy(str2, "C");
	strcat(str1, str2);
	
	printf("\nstr é: %s quantidade de caracteres %d\n", str1, strlen(str1));
}
