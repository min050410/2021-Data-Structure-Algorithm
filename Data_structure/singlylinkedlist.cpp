// Singly linked list Progrem

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct ListNode{
	char data[4];  
	struct ListNode* link;  
} listNode;  //listNode

typedef struct {
	listNode* head;
} linkedList_h;  //linkedList_h 

// function
linkedList_h* createLinkedList_h(void){
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L -> head = NULL;
	return L;
}

void insertFirstNode(linkedList_h *L, const char* x){
	ListNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode -> data, x);
	newNode -> link = L -> head; // ���� newNode�� head�� ����Ű���� ���� 
	L -> head = newNode; // newNode �� ListNode�� ������ ���� �̱� ������ L->head �� newNode�� ����Ű�� �ȴ�.  
}

void insertMiddleNode(linkedList_h* L,listNode* pre, const char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode -> data, x);
	
	if ( L == NULL){
		newNode -> link = NULL; //newNode�� link�� NULL���� �����ϰ� 
		L -> head = newNode; //L�� newNode�� ����Ŵ 
	}
	else if (pre == NULL){
		L -> head = newNode;
	}
	else{
		newNode -> link = pre -> link;  
		pre -> link = newNode; // pre �ڿ� newNode�� ���� newNode�� ���� pre�� ����Ű������ ����Ŵ 
	}
	
}

void insertLastNode(linkedList_h* L, const char* x){
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode -> data, x);
	
	newNode -> link = NULL;
	
	if( L -> head == NULL){
		L -> head = newNode;
		return;
	}
	temp = L -> head;
	while(temp -> link != NULL) temp = temp -> link; // temp�� ���� ������ ��带 ã�� ���� �� 
	temp -> link = newNode; 
	
}

void freeLinkedList_h(linkedList_h* L) { // ������ �ѹ��� ���� 
	listNode* p;
	while(L->head != NULL){
		p = L -> head;
		L -> head = L -> head -> link;
		free(p);
		p = NULL;
	}
}

void printList(linkedList_h* L){
	listNode* p;
	printf("L =(");
	p = L -> head;
	while (p != NULL){
		printf("%s", p -> data);
		p = p -> link;
		if( p != NULL){
			printf(", ");
		}
	}
	printf(") \n");
}


// main

int main(){
	linkedList_h* L; //L�� �� ó������ ����Ǿ� �־ insertMiddleNode�� if���� ���ư� 
	L = createLinkedList_h();  
	printf("(1)���鸮��Ʈ �����ϱ�");
	printList(L); getchar();
	
	printf("(2)����Ʈ�� [��] ��� �����ϱ�");
	insertFirstNode(L,"��");
	printList(L); getchar();
	
	printf("(3)����Ʈ �������� [��] ��� �����ϱ�");
	insertLastNode(L,"��");
	printList(L); getchar();
	
	printf("(4)����Ʈ ù ��°�� [��] ��� �����ϱ�");
	insertFirstNode(L,"��");
	printList(L); getchar();
	
	printf("(5)����Ʈ ������ �����Ͽ� ���� ����Ʈ�� �����");
	freeLinkedList_h(L);
	printList(L);
	getchar();
	return 0; 
}
	 
	
 


