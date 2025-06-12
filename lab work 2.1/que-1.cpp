#include <iostream>
using namespace std;

class Car{
    public:
        int id;
        string car_company_name;
        void details(){
            cout<<"Enter car id :-";
            cin>>id;
            cout<<"Car id :- "<<id<<endl;
        }
};
int main() {
    Car c;
    c.details();
    
}
