#include<iostream>
using namespace std;

class cash_reg {
    int cash_on_hand;

    public:
        cash_reg() {
            cash_on_hand = 500;
        }
        cash_reg(int c) {
            cash_on_hand = c;
        }
        int getCurrentBalance();
        int acceptAmount(int);
        void show_selection();
        friend  class dispenserType;
};
        
int cash_reg::getCurrentBalance()
{
    return cash_on_hand;
}

int cash_reg::acceptAmount(int a) {
    cash_on_hand += a;
}

class dispenserType {
    int no_of_item;
    int cost;
    public :
        dispenserType() {
            cost = 50;
            no_of_item = 50;
        }    
        dispenserType (int cost, int no_of_item) {
            cost = cost;
            no_of_item = no_of_item;
        }
        int getNoOfItems();
        int getcost();
        void makeSale();
        void sell_product(cash_reg&);

};

int dispenserType::getNoOfItems() {
    return no_of_item;
}

int dispenserType::getcost()
{
    return cost;
}

void dispenserType::makeSale() {
    no_of_item -= 1;
}

void cash_reg::show_selection() {
    int ch;
    while(1) {
    cout << "WELCOME TO CANDY MACHINE" << endl;
    cout << "--Menu--" << endl;
    cout << "1. chocolate bars" << endl << "2. Milk Chocolate" << endl << "3. Special Dark" << endl << "4. Pure Dark Chocolate" << endl << "5. Kit Kat" << endl << "6. cookies" << endl;
    cout << "Please enter your choice" << endl;
    cin >> ch;

    if(ch > 6) {
        cout << "wrong choice" << endl;
        continue;
    }
    else
        break;
    }

}


void dispenserType::sell_product(cash_reg& c)
{
    int cost;
    int cst;
    cout << "enter no of items-"; 
    cin >> no_of_item;
    cst = getcost();
    cout << "cost per item - " << cst << endl;
    cout << "Total cost - " << (no_of_item * cst) << endl;
    cout << "Please deposit money" << endl;
    cin >> cost; 
    c.acceptAmount(cost);
    cout << "collect your item Thank you" << endl;
    makeSale();
}
int main()
{
    cash_reg c;
    dispenserType d;
    int cost;
    c.show_selection();
    d.sell_product(c);   
//  cout << "current balance is - " << c.getCurrentBalance() << endl;    
}
