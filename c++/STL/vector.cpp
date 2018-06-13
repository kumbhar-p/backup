#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

void show_vector(vector<int> l) {
    vector<int> ::iterator it;
    for (it = l.begin(); it != l.end(); it++) 
        cout << *it << " ";
    cout << endl;
}
int main()
{
    vector<int> l;
    int i;
    for(i = 0; i < 10; i++) {
        l.push_back(i*3);
    }
    cout << "max_size - "<< l.max_size() << endl;
    cout << "capacity - "<< l.capacity() << endl;
    cout << "size - "<< l.size()<< endl;
    show_vector(l);
    return 0;
}
