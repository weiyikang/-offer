//#include<pthread.h>
//#include<iostream>
//
//#define SIZE 4
//using namespace std;
//
////定义缓冲区结构体
////buf：缓冲区；
////pos：当前读写的下标；
////mutex：读写时的互斥量，当前仅允许一个线程读写；
////notfull：缓冲区不为满；
////notempty：缓冲区不为空
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
////初始化产品
//void init(struct product *t)
//{
//	pthread_mutex_init(&t->mutex, NULL);
//	pthread_cond_init(&t->notfull, NULL);
//	pthread_cond_init(&t->notempty, NULL);
//	t->pos = -1;
//}
//
////向缓冲区写数据
//void put(struct product *t, int data)
//{
//	pthread_mutex_lock(&t->mutex);
//	//判断队列为满
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
////从缓冲区读数据
//void get(struct product *t)
//{
//	pthread_mutex_lock(t->mutex);
//	//判断缓冲区是否为空
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
