#include<iostream>
#include<list>
#include<iterator>

using namespace std;

void showlist(list<int> l) {
    list<int> ::iterator it;
    for (it = l.begin(); it != l.end(); it++) 
        cout << *it << " ";
    cout << endl;
}
int main()
{
    list<int> l;
    int i;
    for(i = 0; i < 10; i++) {
        l.push_front(i*2);
        l.push_back(i*3);
    }
    showlist(l);
    l.reverse();
    showlist(l);
    l.sort();
    showlist(l);
    return 0;
}
