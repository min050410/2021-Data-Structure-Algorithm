#include<stdio.h>
void inputArray( int a[][4], int row );
int totArray( int *a, int size); // ���⿡ �ָ�

int main(){
	int score[3][4];
	int i, j;
	int tot;
	double avg;
	
	printf("�л� 3��, ���� �� ������ ������ �Է��ϼ���\n");
	
	inputArray( score, 3 );
	
	for( i = 0 ; i < 3 ; i++){
		tot = totArray( score[i] , 4); //1���� �迭���� ������ 
		avg = tot/4;
		printf("���� : %.d, ��� : %.2lf\n", tot, avg);
		
	}
	return 0;
	
}

void inputArray( int a[][4], int row){
	int i, j;
	for( i=0; i< row;i++)
		for( j=0; j<4; j++)
			scanf("%d", &a[i][j]);
}

void totArray( int *a, int size) { // 1���� �迭�� �޾Ƽ� a[]�� ����
	// �κй迭 ����   
	int i, tot = 0;
	for ( i=0; i< size; i++)
		tot += a[i];
	return tot;
}



 
