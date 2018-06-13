#include<iostream>
#include<queue>
#include<stdlib.h>
#include<string>
using namespace std;

template <typename Type>
class Que
{
private :
    pthread_t thread1;
    pthread_t thread2;
    pthread_attr_t attr;
    
    pthread_mutex_t mutex;
    pthread_mutexattr_t m_attr;
    
    pthread_cond_t cond;

    void CreateTwoehreads();

    queue <Type> queue_;
    int ele;
    int rc;
    void *status;
public :
    Que() {
        pthread_cond_init(&cond, NULL);
        pthread_mutexattr_init(&m_attr);
        pthread_mutex_init(&mutex, &m_attr);
    }

    ~Que() {
        pthread_mutexattr_destroy(&m_attr);
    }

    void display() {
        while (!queue_.empty())
        {
            cout << queue_.front() << " ";
            queue_.pop();
        }
        cout << endl;
    }
    void push_()
    {
        Type ele;
        char ch;
        cout << "enter elements to push " << endl;
        do {
            cin >> ele;
            queue_.push(ele);
            cout << "Want to enter next element Y/N - ";
            cin >> ch;
        }while(ch == 'Y' || ch == 'y');
    }

    void pop_()
    {
        Type ele;
        if(!queue_.empty()) {
            ele = queue_.front();
            cout << "poped ele is" << " " << ele << endl;
            queue_.pop();
        }
    }

    static void* thread_fun1(void *t)
    {
        Que *q;
        q = (Que *)t;
        cout << endl <<  "in thread 1" << endl;
        q->push_();
        pthread_mutex_lock(&q->mutex);
        pthread_cond_signal(&q->cond);
        pthread_mutex_unlock(&q->mutex);
        pthread_exit((void *)t);
    }

    static void* thread_fun2(void *t)
    {
        Que *q1;
        q1 = (Que *)t;
        pthread_mutex_lock(&q1->mutex);
        pthread_cond_wait(&q1->cond, &q1->mutex);
        cout << endl << "in thread 2" << endl;
        q1->pop_();
        pthread_mutex_unlock(&q1->mutex);
        pthread_exit((void *)t);
    }

    void CreateTwoThreads()
    {
        pthread_attr_init(&attr);
        pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);


        //  cout << "creating 1st thread" << endl;
 //       while(1) {
            rc = pthread_create(&thread1, &attr, thread_fun1, (void *)this);
            if(rc) {
                cout << "Error return from 1st pthread create %d" << rc << endl;
                exit(-1);
            }

            //   cout << "creating 2nd thread" << endl;
            rc = pthread_create(&thread2, &attr, thread_fun2, (void *)this);
            if(rc) {
                cout << "Error return from 2nd pthread create %d" << rc << endl;
                exit(-1);
            }

            pthread_attr_destroy(&attr);
            rc = pthread_join(thread1, &status);
            if(rc) {
                cout << "Error return from 1st pthread join %d" << rc << endl;
                exit(-1);
            }
            rc = pthread_join(thread2, &status);
            if(rc) {
                cout << "Error return from 2nd pthread join %d" << rc << endl;
                exit(-1);
            }
     //   }
    }   
};
int main()
{
    Que<string> q;
    char ch;
    do {
        do {
            q.CreateTwoThreads();
            cout << "want to append elements - " << " " ;
            cin >> ch;
        }while(ch == 'Y' || ch == 'y');
        q.display();
        cout << "want to continue - " << " " ;
        cin >> ch;
    }while(ch == 'Y' || ch == 'y');
        
    pthread_exit(NULL);
    return 0;
}
