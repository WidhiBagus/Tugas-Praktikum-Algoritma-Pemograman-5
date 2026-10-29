#include<iostream>
#include<string>
using namespace std;
int main(){
	string nama,hadiah;
	float a, b, c, rata;
	cout<<"Program Hitung Nilai Rata-Rata\n\n";
	cout<<"Nama Siswa:";
	getline(cin,nama);
	
	cout<<"nilai pertandingan 1:";
	cin>>a;
	
	cout<<"nilai pertandingan 2:";
	cin>>b;
	
	cout<<"nilai pertandingan 3:";
	cin>>c;
	
	rata=(a+b+c)/3;
	
	if(rata>=85)hadiah="Seperangkat Mobil";
	else if (rata>=70)hadiah="Seperangkat Uang Sebesar Rp.500000";
	else hadiah="Hiburan";
	
	cout<<"\nSiswa yang bernama"<<nama<<"\n"<<"Memperoleh nilai rata-rata"<<rata<<"dari hasil\n"<<"perlombaan yang diikutinya.\n"<<"Hadiah yang didapat adalah"<<hadiah<<endl;
	
	return 0;
}
