#include<stdio.h>
size_t myStrlen(  char *str );
int main(void)
{
	char s[] = "hello world";
	printf("%d\n", myStrlen(s));
	return 0;

}
size_t myStrlen(  char *str){
	char *s; // s ������ ���� 
	for( s = str; *s; s++ ); //  s�� ���� �迭�� �����ϵ��� ���� 
	return s - str; //���ּ� - �����ּ� char size�� 1 �̶� ���� 
}
