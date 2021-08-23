#include "SeqList.h"

//��ʼ��˳���
void SeqListInit(SL* s);

//β��βɾ
void SeqListPushBack(SL* ps, SLDateType x);
void SeqListPopBack(SL* ps);

//ͷ��ͷɾ
void SeqListPushFront(SL* ps, SLDateType x);
void SeqListPopFront(SL* ps);

//������λ�ò����ɾ��Ԫ��
void SeqListInsert(SL* ps, int pos, SLDateType x);
void SeqListErase(SL* ps, int pos);

//��ӡ����
void Print(SL* ps);

//typedef struct SeqList
//{
//	SLDateType* array;  //����ָ�룬����������
//	int size;			//��Ч���ݵĸ���
//	int capacity;		//����
//}SL;

//��ʼ��˳���
void SeqListInit(SL* c)
{
	c->array = (SLDateType*)malloc(sizeof(SL)*10);
	//�������ռ�ʧ��
	if (c->array == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}
	c->size = 0;
	c->capacity = 10;
}

//β�巨��ʵ��
void SeqListPushBack(SL* ps, SLDateType x)
{
	//ȷ����������ݲ�Ϊ��
	assert(ps);

	//��������ڴ�ռ���������ʱ
	SeqListCheckCapacity(ps);
	//��ֵ����������
	ps->array[ps->size] = x;
	//������ɺ󣬵�ַ+1��ָ����һ�������ַ
	ps->size++;
}

//βɾ
void SeqListPopBack(SL* ps)
{
	assert(ps);
	ps->array[ps->size - 1] = 0;
	ps->size--;
}

//ͷ�巨
void SeqListPushFront(SL* ps, SLDateType x)
{
	assert(ps);

	SeqListCheckCapacity(ps);

	SLDateType end = ps->size-1;

	while(end>=0)
	{
		ps->array[end + 1] = ps->array[end];
		end--;
	}
	ps->array[0] = x;
	ps->size++;
}

//ͷɾ��
void SeqListPopFront(SL* ps)
{
	assert(ps);
	SLDateType star = 0;

	while(star < ps->size-1)
	{
		ps->array[star] = ps->array[star+1];
		star++;
	}
	ps->size--;
}

//��ӡ����
void Print(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
		printf("%d ", ps->array[i]);
	printf("\n");
}
//���ݽӿ�
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size >= ps->capacity)
	{
		ps->capacity = ps->capacity * 2;
		ps->array = (SLDateType*)realloc(ps->array, sizeof(SL) * ps->capacity);
		
		//������ݿռ�ʧ��
		if (ps->array == NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
	}
}