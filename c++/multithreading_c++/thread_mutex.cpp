#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
using namespace std;

class MyCounter 
{
    pthread_t thread1;
    pthread_t thread2;
    pthread_attr_t attr;
    
    pthread_mutex_t mutex;
    pthread_mutexattr_t m_attr;

    int rc;
    void *status;

    int NumOfEvents;
public:
    MyCounter() : NumOfEvents(0) {
        pthread_mutexattr_init(&m_attr);
        pthread_mutex_init(&mutex, &m_attr);
    }
    
    ~MyCounter() {
        pthread_mutexattr_destroy(&m_attr);
    }
    int GetCount()
    {
        return NumOfEvents;
    }
    void CreateTwoThreads();
    static void *thread_fun(void *t); 
};

void MyCounter::CreateTwoThreads()
{
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    cout << "Creating 1st thread" << endl;
    rc = pthread_create(&thread1, &attr, thread_fun, (void *)this);
    if (rc) {
        cout << "Error return code from 1st pthread create is %d " << rc << endl;   
        exit(-1);
     }
    
    cout << "Creating 2nd thread" << endl;
    rc = pthread_create(&thread2, &attr, thread_fun, (void *)this);
    if (rc) {
        cout << "Error return code from 2nd pthread create is %d " << rc << endl;   
        exit(-1);
     }
    
    pthread_attr_destroy(&attr);
    rc = pthread_join(thread1, &status);
    if (rc) {
        cout << "Error return code from pthread join is %d " << rc << endl;   
        exit(-1);
     }
    rc = pthread_join(thread2, &status);
    if (rc) {
        cout << "Error return code from pthread join is %d " << rc << endl;   
        exit(-1);
     }
}


void* MyCounter::thread_fun(void *t){
    MyCounter *data;
    data = (MyCounter *)t;
    int i;
    pthread_mutex_lock(&data -> mutex);
    for(i = 0; i < 1000; i++) {
        ++data -> NumOfEvents;
    }
    pthread_mutex_unlock(&data -> mutex);
    pthread_exit((void *)t);
};

int main()
{
    MyCounter M;
    M.CreateTwoThreads();  
    cout << "Number of events after both the thread compliled " << M.GetCount() << endl;
    pthread_exit(NULL);
    return 0;
}
