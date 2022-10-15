//다차원 배열의 배열포인터를 반환값으로 가지는 함수를 선언하고, 접근하는 방법 
//2차원 배열부터는 문법이 괴상하다. 
 
#include <stdio.h>
#include <string.h>

//1차원 배열
char *arr1d(){
	static char a[10] = "abcdefg";
	return a;
}
//2차원 배열 
char (*arr2d())[10]{
	static char a[][10]={"abc","xyz","emt"};
	
	return a;
}
//3차원 배열 
char (*arr3d())[4][10]{
	static char a[][4][10]={
		{"abcd","efg","hijk","lmn"},
		{"abc","bbb","ccc","ddd"}
		};
		
		return a;	
	}
	


int main(void){
	
	char* ptr1 = arr1d();
	puts(ptr1);
	
	char (*ptr2)[10] = arr2d();
	puts(ptr2[0]);
	puts(ptr2[1]);
	puts(ptr2[2]);
	
	printf("%c\n",ptr2[0][0]);
	printf("%c\n",ptr2[0][1]);
	printf("%c\n",ptr2[0][2]);
	
	printf("%c\n",ptr2[1][0]);
	printf("%c\n",ptr2[1][1]);
	printf("%c\n",ptr2[1][2]);
	//printf("%c\n",ptr2[1][3]);//읽기 불가 
	
	printf("%c\n",ptr2[2][0]);
	printf("%c\n",ptr2[2][1]);
	printf("%c\n",ptr2[2][2]);
	//printf("%c\n",ptr2[2][3]);//읽기 불가
	
	char (*ptr3)[4][10] = arr3d();
	puts(ptr3[0][0]);
	puts(ptr3[1][3]);
	
	return 0;
}
