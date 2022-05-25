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

	sort(ascii.begin(), ascii.end()); //Sortiranje na vektorot

	cout<<"Sortirana: "<<endl; //Pecatenje na vektorot vo sortirana verzija (od najmal do najgolem)
	cout<<"------------------------------------------------"<<endl;
	golemina = ascii.size();
	for(int i = 0; i < golemina; i++){
		cout<<ascii.at(i)<<" ";
	}
	cout<<"\n------------------------------------------------\n"<<endl;

	cout<<"Vnesete datum: "; //Vnes na datum na raganje vo vektorot
	for(int i = 0; i < 3; i++){
		cin>>broj;
		ascii.push_back(broj);
	}

	ofstream outFile("INKI869.Proekt3.txt"); //Otvoranje nov file INKI869.Proekt3.txt
	for (const auto &e : ascii) outFile << e << "\n"; //Pecatenje na vektorot vo file

	cout<<endl;
}
    