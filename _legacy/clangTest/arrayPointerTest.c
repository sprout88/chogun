//������ �迭�� �迭�����͸� ��ȯ������ ������ �Լ��� �����ϰ�, �����ϴ� ��� 
//2���� �迭���ʹ� ������ �����ϴ�. 
 
#include <stdio.h>
#include <string.h>

//1���� �迭
char *arr1d(){
	static char a[10] = "abcdefg";
	return a;
}
//2���� �迭 
char (*arr2d())[10]{
	static char a[][10]={"abc","xyz","emt"};
	
	return a;
}
//3���� �迭 
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
	//printf("%c\n",ptr2[1][3]);//�б� �Ұ� 
	
	printf("%c\n",ptr2[2][0]);
	printf("%c\n",ptr2[2][1]);
	printf("%c\n",ptr2[2][2]);
	//printf("%c\n",ptr2[2][3]);//�б� �Ұ�
	
	char (*ptr3)[4][10] = arr3d();
	puts(ptr3[0][0]);
	puts(ptr3[1][3]);
	
	return 0;
}
