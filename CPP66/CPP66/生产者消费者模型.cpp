//#include<pthread.h>
//#include<iostream>
//
//#define SIZE 4
//using namespace std;
//
////���建�����ṹ��
////buf����������
////pos����ǰ��д���±ꣻ
////mutex����дʱ�Ļ���������ǰ������һ���̶߳�д��
////notfull����������Ϊ����
////notempty����������Ϊ��
//struct product
//{
//	pthread_mutex_t mutex;
//	pthread_cond_t notfull;
//	pthread_cond_t notempty;
//	int pos;
//	int buf[SIZE];
//};
//
//struct product pdt;
//
////��ʼ����Ʒ
//void init(struct product *t)
//{
//	pthread_mutex_init(&t->mutex, NULL);
//	pthread_cond_init(&t->notfull, NULL);
//	pthread_cond_init(&t->notempty, NULL);
//	t->pos = -1;
//}
//
////�򻺳���д����
//void put(struct product *t, int data)
//{
//	pthread_mutex_lock(&t->mutex);
//	//�ж϶���Ϊ��
//	if (t->pos + 1 > SIZE - 1)
//	{
//		pthread_cond_wait(&t->notfull, &t->mutex);
//	}
//	t->pos = t->pos + 1;
//	t->buf[t->pos] = data;
//	pthread_cond_signal(&t->notempty);
//	pthread_mutex_unlock(&t->mutex);
//}
//
////�ӻ�����������
//void get(struct product *t)
//{
//	pthread_mutex_lock(t->mutex);
//	//�жϻ������Ƿ�Ϊ��
//	if (t->pos < 0)
//	{
//		pthread_cond_wait(&t->notfull, &t->mutex);
//	}
//	t->pos = t->pos - 1;
//	pthread_cond_signal(&t->notfull);
//	pthread_mutex_unlock(&t->mutex);
//}
//
//
//int main241033()
//{
//	pthread_t pt1, pt2;
//	void *retval;
//	pthread_create(&pt1, NULL, put, 0);
//	pthread_create(&pt2, NULL, get, 0);
//	pthread_join(pt1, &retval);
//	pthread_join(pt2, &retval);
//
//	return 0;
//}
//
