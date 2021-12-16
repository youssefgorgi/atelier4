





#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> a;  //la liste
int x;
for(int i=1;i<=100;++i){ 
a.insert(i);    //inserer les entiers de 1 à 100 dans la liste    
}
for(set<int>::iterator it=a.begin();it!=a.end();it++){ 
	cout<<*it<<endl;
	
}


cout<<"saisir une valeur"<<endl;
cin>>x;
cout<<a.count(x)<<endl;



return 0;
}















