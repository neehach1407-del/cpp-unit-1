#include<iostream>
using namespace std;
class employee{
	int id;
	char name[30];
	public:
		void getdata();
		void putdata();
};
void employee::getdata(){
	cout<<"enter employee id:";
	cin>>id;
	cout<<"enter employee name:";
	cin>>name;
}
void employee::putdata(){
	cout<<"employee id:"<<id<<endl;
	cout<<"employee name:"<<name<<endl;
}
int main(){
	employee emp[30];
	int n;
	cout<<"enter number of employees:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"\nemployee"<<i+1<<endl;
		emp[i].getdata();
	}
	cout<<"\nemployee details\n";
	for(int i=0;i<n;i++)
	{
		emp[i].putdata();
		cout<<endl;
	}
	return 0;
}
