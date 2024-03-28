#include <iostream>
using namespace std;
class employee {
    public: 
    int id;
    string name;
    float salary; 
    employee(int i, string n, float s )
        {
            id = i;
            name = n;
            salary = s; 
        }
    void display ()
    {
        cout<<id<<"  "<<name<<"  "<<salary<<endl;
    }
};
int main(void) {
    employee e1 = employee(101,"Orewa",543473);
    employee e2 = employee(102,"Yamar",546354); 
    e1.display (); 
    e2.display ();
return 0;

}