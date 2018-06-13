#include<iostream>

using namespace std;

struct Node 
{
    int data;
    Node *next;
};

class linked_list 
{
    Node *hptr;
    Node *tail;
public:
    linked_list()
    {
        hptr = NULL;
        tail = NULL;
    }
    void add_end(int num)
    {
        Node *new_node = new Node;
        new_node->data = num;
        new_node->next = NULL;
        if(hptr == NULL) {
            hptr = new_node;
        }
        else {
            tail->next = new_node;
        }
        tail = new_node;
    }
    
    void display()
    {
        Node *tmp = hptr;
        while(tmp != NULL) {
            cout << tmp->data << "-> " ;
            tmp = tmp->next;
        }
        cout << endl;
    }
};

int main()
{
    linked_list L1;
    int ele;
    char ch;
    do {
        cout << "enter the ele " << endl;
        cin >> ele;
        L1.add_end(ele);
        cout << "do u want to add more " << endl;
        cin >> ch;
    }while( ch == 'Y' || ch == 'y');
    L1.display();    
}





