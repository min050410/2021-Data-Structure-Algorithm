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
NODE * inputNode(NODE *ptr, int x, int index);
int main(){
		int value, index;	
	
    NODE *head;
		NODE *head2;
		NODE *head3;
	
		

    	head = createNode( 12 );
		head2 = createNode( 99 );
		head->next = head2;
		head->next->next = head2;
		head3 = createNode( 22 );
		head->next->next->next = head3;	
		
		//����
		// head->next = head2;
		// head2->next = head3;
		printf("���� ���� �ε����� �Է����ּ���: ");
		scanf("%d %d",&value, &index );
		head = inputNode( head, value, index);
	  	printAll( head );    
		return 0;
		
}
NODE *createNode( ELEMENT data ){
    NODE *new = (NODE *)malloc( sizeof(NODE) );  // ���� ����
    new->data = data;
    new->next = NULL;
	return new; // new �� head ������
}
void printAll( NODE *ptr ){
    while( ptr ){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

NODE * inputNode( NODE *head , int x, int index){
	int cnt = 1;
	NODE *temp ;
	NODE *new = (NODE *)malloc(sizeof(NODE));
	// temp = ptr->link;
	
	new -> data = x;
	temp = head; 
	if( index == 0 ){
		new -> next = head;
		head = new;
		return head;
	}
	
	while(temp -> next != NULL){  //temp -> next �� null�� �ƴҵ��� ����
		
		if(index == cnt) break;
		temp = temp->next;
		cnt ++;
		
	} 
	new -> next = temp -> next;
	temp -> next = new;
	return head;
}
// if(index == 0){
	// 	new -> next = temp;
	// 	return;
	// }
