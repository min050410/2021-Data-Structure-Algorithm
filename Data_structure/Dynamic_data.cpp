// �Լ��� Ȱ���� node �������� �����ϱ�
#include<stdio.h>
#include<stdlib.h>
typedef int ELEMENT;
typedef struct node{
    ELEMENT data;
    struct node *next;
}NODE;
NODE *createNode( ELEMENT data );
void printAll( NODE *ptr );
int main(){
    NODE *head;
	NODE *head2;
	NODE *head3;
	
    head = createNode( 12 );
		head2 = createNode( 99 );
		head->next = head2;
		head2 = createNode( 37 );
		head->next->next = head2;
		
		//����
		// head->next = head2;
		// head2->next = head3;

    printAll( head );      
}
NODE *createNode( ELEMENT data ){
    NODE *newo = (NODE *)malloc( sizeof(NODE) ); // malloc �� ���� ������ ������ �Ҵ� 
    newo->data = data;
    newo->next = NULL;
	  return newo; // dev c ������ new �� ���������� �ȵǴ���  
}
void printAll( NODE *ptr ){
    while( ptr ){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
