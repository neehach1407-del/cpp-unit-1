// employee payroll register 
#include<iostream>
using namespace std;
class employee{
	string name;
	int empId;
	double salary;
	public:
		void setData(string n,int id,double s){
			name=n;empId=id;salary=s;
		}
		void dispaly(){
			cout<<empId<<"|"<<name<<"|Rs."<<salary<<endl;
		}
};
int main(){
employee staff[3];
staff[0].setData("ravi",101,45000);
staff[1].setData("priya",102,52000);
staff[2].setData("sruthi",103,39000);
for(int i=0;i<3;i++)
staff[i].dispaly();
return 0;
}
