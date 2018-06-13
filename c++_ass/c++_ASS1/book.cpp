#include<iostream>
using namespace std;

class Book {
    int book_no;
    char book_title[20];
    float price;
    
    public:
        float total;
        void input();
        int purchase();
        float total_cost(int n);
};

void Book::input(){
    cout << "Enter book No. - ";
    cin >> book_no; 
    cout << "Title - ";
    cin >> book_title;
    cout << "price - ";
    cin >> price;
}

int Book::purchase() {
    int n;
    cout << endl << "Enter the No. of copies - ";
    cin >> n;
    return n;
}

float Book::total_cost(int n) {
    total = n * price;
    return total;
}    
int main()
{
    Book b;
    int n;
    b.input();
    n = b.purchase();
    cout << "Total cost is - " << b.total_cost(n) << endl;
}

