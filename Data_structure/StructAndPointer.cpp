#include<stdio.h>


typedef struct Person{ //typedef ���� ���� �ÿ��� 
	char name[10];
	int age;
	
}PERSON;

void inputData( PERSON *p);
void outputData( PERSON *p);

int main(){
	PERSON p; // typedef ���� ���ϸ� struct Person p; �̷��� �ؾ��� 
	
	inputData( &p ); //����ü p �� �ּҰ��� �Ѱ���  
	outputData( &p );	

	return 0;
	
}
void inputData( PERSON *p){
	scanf("%s" , p -> name);  // p->name�� �迭�̸��̱� ������ &���ص� ���X 
	scanf("%d", &(p -> age));
}
void outputData( PERSON *p) {
	printf("%s, %d\n", p-> name, p->age);
}
