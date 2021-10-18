#include <stdio.h>
void inputArray( int a[], int size);
void outputArray( int a[], int size);
int insertArray( int a[], int num, int index, int size);
int deleteArray( int a[], int index, int size);

int main(){
  int a[10], size=0 ;
	int num, index, c;
	while(1){
	printf("-----------------------------------------\n");
	printf("1. �迭 ����, 2. �迭 ���, 3. �迭 �ֱ�, 4.�迭 ��� ����, 5.���α׷� ����\n");
	scanf("%d", &c);
	switch(c) {
    case 1: inputArray(a, size);
        break;
    case 2: outputArray(a,size);
        break;
    case 3: printf("1. ���� �迭�� ���� �Է��ϼ���:");
		scanf("%d",&num);
		printf("2. ���� �迭�� ��ġ�� �Է��ϼ���(�⺻�� -> 0):");
		scanf("%d",&index);
		size = insertArray(a, num, index, size);
        break;
	case 4: printf("������ �迭�� ��ġ�� �Է��ϼ���(�⺻�� -> 0):");
		scanf("%d",&index);
		size = deleteArray(a, index, size);
        break;
	default: printf("���α׷� �����մϴ�.\n");
	}
		if (c==5){
			break;
		}
	}
	printf("-----------------------------------------\n");
  return 0;
}
void inputArray( int a[], int size){
    int i;
    for( i = 0 ; i < size ; i++ ){
        scanf( "%d", &a[i] ) ;
    }
}
void outputArray( int a[], int size){
    int i;
    for( i = 0; i < size ; i ++ ){  
			printf("%d ", a[i] ); 
    }
    printf("\n");
}
int insertArray( int a[], int num, int index, int size){
    if( index == size ){
        a[index] = num;
        size ++;
    } 
	else{    // ���⿡ �迭 �߰��� ���� ���� �ڵ�
		int i;
		for(i=size-1;i>=index;i--){
				a[i+1] = a[i];
		}
			a[index] = num;
			size++;
	}
  return size;
}
int deleteArray( int a[], int index, int size){
  if( index == size-1 ){
        a[index] = 0 ;
        size --;
    }
	else{ //���⿡ �迭 �߰��� ���� ���� �ڵ�
		int i;
		for(i=index+1;i<=size-1;i++)
		{
			a[i-1] = a[i];
		}
		size --;
		
	}
  return size;
}
