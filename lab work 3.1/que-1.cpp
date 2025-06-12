#include<iostream>
using namespace std;
class bank {
	public:
	static float roi;
    int acc;
    string name;
    void setdate(int acc,string name ){
    	this->acc =acc;
    	this->name=name;
		}
		void getdate (){
			cout<<"acc:-"<<this->acc <<endl;
			cout<<"name:-"<<this->name << endl;
			cout<<"rate of insterest :-"<<this->roi<<endl;
		}
};
float bank::roi = 7.65;
int main(){
	bank b,b1;
	b.setdate (1111,"amit");
	b.getdate();
	b1.setdate(1112,"ajay");
	b1.getdate();
}
