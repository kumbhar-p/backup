#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
using namespace std;

class data 
{
    pthread_t t1;
//    pthread_attr_t attr;
    void *status;
    int rc;

    int t_id;
    char msg[20];
public :
    data(int id, char *ms_g) : t_id(id)
    {
        strcpy(msg, ms_g);
    }

    void create_thread();
    static void *thread_fun(void *t);
};

void data::create_thread()
{
 //   pthread_attr_init(&attr);
  //  pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    cout << "creating Thread now " << endl;
    rc = pthread_create(&t1, NULL, thread_fun, (void *)this);
    if (rc) {
        cout << "Error return code from pthread create is %d " << rc << endl;
        exit(-1);
    }
//    pthread_attr_destroy(&attr);
    rc = pthread_join(t1, &status);
    if (rc) {
        cout << "Error return code from pthread join is %d " << rc << endl;
        exit(-1);
    }

}

void* data::thread_fun(void *t)
{
    data *mydata;
    mydata = (data *)t;
    int task_id = mydata -> t_id;
    char *hello_msg = mydata -> msg;

    cout << "From thread : " << task_id << " " << hello_msg << endl;
    pthread_exit((void *)t);
}

int main()
{
    char str[20] = "hello from ajay";
    data D(1, str);
    D.create_thread();
    pthread_exit(NULL);
    return 0;
}
