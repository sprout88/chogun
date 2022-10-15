#include <stdio.h>
#include <string.h>

int main(void){
	char a[3][10] ={
	"abcdef",
	"xyz",
	"hello",
	};
	//행이 3개고, 열이 10개라는 뜻.

	puts(a[0]); //a의 0번행을 선택한다는 뜻. 즉, abcdef
	puts(a[1]); //a의 1번행을 선택한다는 뜻. 즉, xyz
	puts(a[2]); //a의 2번행을 선택한다는 뜻. 즉, hello

	printf("%c\n",a[0][2]); //a의 0번행,2번열을 선택한다는 뜻. 즉, c
	printf("%c\n",a[1][2]); //a의 0번행,2번열을 선택한다는 뜻. 즉, z
	
}
