#include<iostream>
using namespace std;

struct car{
	char name[50];
	int number;
	int model;
};
int main(){
	 car c1[3]={ {"revo",5086,065},{"haval",8006,057},{"brv",8367,037} };
	 int i=0;
      while(i!=3){
      	cout<<c1[i].name<<endl;
      	cout<<c1[i].number<<endl;
      	cout<<c1[i].model<<endl;
      	i++;
	  }
}
