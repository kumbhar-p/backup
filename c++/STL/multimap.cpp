#include<iostream>
#include<map>
using namespace std;

class Phonebook
{
private :
    multimap<string, string> phonebook;
public :
    void AddContact(string name, string number);
    void ShowAll();
    void Delete(string name);
    string Getnumber(string name);
};  

void Phonebook::AddContact(string name, string number){
    phonebook.insert(pair<string, string>(name, number));
}

void Phonebook::ShowAll(){
    multimap<string, string>::iterator it = phonebook.begin();
    for(; it != phonebook.end(); it++) 
        cout << it -> first << " " << it -> second << endl; 
}
    

void Phonebook::Delete(string name){
    multimap<string, string>::iterator it = phonebook.find(name);
    phonebook.erase(it);

}

string Phonebook::Getnumber(string name) {
    multimap<string, string>::iterator it = phonebook.find(name);
    if(it != phonebook.end())
        return it -> second;
    else
        return "Name is not present...";
    
}

int main()
{
    Phonebook p1;
    p1.AddContact("Ajay", "23618871");
    p1.AddContact("Vjay", "56879348");
    p1.AddContact("Amar", "89734857");

    cout << p1.Getnumber("Ajay") << endl;
    p1.ShowAll();
    p1.Delete("Amar");
    cout << "------------------------------------------" << endl;
    p1.ShowAll();
}


    
