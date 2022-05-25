#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
	string sodrzina;
	string adresa;
	vector<int> ascii;
	int golemina = 0;
	int broj = 0;

	cout<<"Vnesete sodrzina: ";
	cin>>sodrzina;
	cout<<"Vnesete validna adresa: ";
	cin>>adresa;
	cout<<"\n------------------------------------------------\n"<<sodrzina<<" "<<adresa<<"\n------------------------------------------------\n"<<endl;

	golemina = sodrzina.length(); //Vnesuvanje na sodrzinata kako ASCII kod vo vektor
	for(int i = 0; i < golemina; i++){
		broj = int(sodrzina.at(i));
		ascii.push_back(broj);
	}

	golemina = adresa.length(); //Vnesuvanje na adresata kako ASCII kod vo vektor
	for(int i = 0; i < golemina; i++){
		broj = int(adresa.at(i));
		ascii.push_back(broj);
	}   
    	cout<<"ASCII: "<<endl; //Pecatenje na vektorot
	cout<<"------------------------------------------------"<<endl;
	golemina = ascii.size();
	for(int i = 0; i < golemina; i++){
		cout<<ascii.at(i)<<" ";
	}
	cout<<"\n------------------------------------------------\n"<<endl;

}
    