//fgets�� ���� �������� ���Ͽ��� �ؽ�Ʈ�� �о�´�.
//fileTextGetArray�� ������ �������� 100*100 2���� char�迭�� ���ڿ��� ������ ��, 2�����迭 �����͸� ��ȯ�Ѵ�. 
 
#include <stdio.h>
#include <string.h>

void* fileTextGetArray(){
	

	static char strArray[1000][1000]={"ad","ap","dff"};
	
	return strArray;
	
}

int main(void){

	char (*ptr)[100];
	
	ptr = fileTextGetArray();
	

	

}
