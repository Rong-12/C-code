#define _CRT_SECURE_NO_WARNINGS
//1-1�����ж�
//#include<stdio.h>
//int main(void)
//{
//	int no;
//	int ans = 7;
//
//	printf("���һ��0-9��������\n\n");
//
//	printf("�Ƕ����أ�");
//	scanf("%d", &no);
//
//	if (no > ans)
//		printf("\a��Сһ�㡣\n");
//	else if (no < ans)
//		printf("\a�ٴ�һ�㡣\n");
//	else
//		printf("�ش���ȷ��\n");
//	return 0;
//}

//���ʽ��ֵ�У������һ����������������double�ͣ���ô�������double�͡�


//1-2�ظ����¶�Ϊֹ
#include<stdio.h>

int main(void)
{
	int no;
	int ans = 7;

	printf("���һ��0-9��������\n\n");

	do {
		printf("�Ƕ����أ�");
		scanf("%d", &no);

		if (no > ans)
			printf("\a��Сһ�㡣\n");
		else if (no < ans)
			printf("\a�ٴ�һ�㡣\n");
	
	} while (no != ans);

	printf("�ش���ȷ��\n");
	return 0;
}
//���жϺ�ѭ����while����for��䣬�����һ��Ҳû�����е������
//��ѭ�����жϣ�do��䣬������������һ�Σ�

//1-3����趨Ŀ������
//��������������ĺ���rand����
//rand
//ͷ�ļ�  #include<stdlib.h>
//��ʽ    int rand(void)
//����    ����0-RAND_MAX��α����������С����⣬�����⺯��������ʱ�����ӱ������ĵ���
//����ֵ  �������ɵ�α���������

//#define RAND_MAX   RAND_MAX��ֵ�涨������32767
#include<stdio.h>