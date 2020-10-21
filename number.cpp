#include <iostream>
using namespace std;
main()
{
	int bil;
	cout<<"Number"<<endl;
	cout<<"Masukkan Angka : ";
	cin>>bil;
	cout<<"Merupakan Angka ";
	if (bil<0){
		if (bil%2==0){
			cout<<"Genap Negatif";
		}
		else{
			cout<<"Ganjil Negatif";
		}
	}
	else if (bil>0){
		if (bil%2==0){
			cout<<"Genap Positif";
		}
		else{
			cout<<"Ganjil Positif";
		}
	}
	cout<<endl;
	return 0;
}
