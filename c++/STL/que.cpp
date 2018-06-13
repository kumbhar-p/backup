#include<iostream>
#include<list>
#include<queue>
#include<iterator>

using namespace std;

void showque(queue<int> l) {
    queue<int> ::iterator it;
    for (it = l.front(); it != l.back(); it++) 
        cout << *it << " ";
    cout << endl;
}
int main()
{
    queue<int> l;
    int i;
    for(i = 0; i < 10; i++) {
        l.push(i*2);
    }
    showque(l);
    return 0;
}
