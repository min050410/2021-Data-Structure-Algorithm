#include<stdio.h>
int main() {
//	char s3[] = { 'A', 'B', 'C' };
//	char s4[] = {'A', 'B', 'C', '\0'};
//	printf("%d", s3);
//	return 0;
// ����1
  char alpha[6] = { 'H', 'E', 'L', 'L', 'O', '!'} ;
  char c;
  int i;

  printf("ã�� ���� ���� : ");

  scanf("%c", &c);

  for(i = 0 ; i < sizeof(alpha)/sizeof(int) ; i ++ )
	  if( alpha[ i ]  == c ){
       printf("%d��°\n", i+1 ) ;
    }
}
