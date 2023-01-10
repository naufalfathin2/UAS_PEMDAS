#include <iostream>
#include <math.h>
using namespace std;


int main(){
	
	int n;
	float hasilx, hasily, kali, kuadratx, kuadraty, r, r1, r2, r3, r4, atas, bawah, koefisien;

	cout<< "input banyaknya data: "; cin>>n;
	
	float x[n], y[n];
	 
	for(int i=1; i<=n;i++){
		cout<<"input nilai x"<<i<<' '<<" :";cin>>x[i];
	}
	cout<<endl;
	
	for(int i=1; i<=n;i++){
		cout<<"input nilai y"<<i<<' '<<" :";cin>>y[i];
	}
	cout<<endl;
	
	hasilx = 0;
	
	for(int i=1; i<=n;i++){
		hasilx=hasilx+x[i];//nilai x
	}
	
	
	 hasily = 0;
	
	for(int i=1; i<=n;i++){
		hasily=hasily+y[i];//nilai y
	}
	
	kali = 0; 
	
	for(int i=1; i<=n;i++){
		kali=kali+x[i]*y[i];//nilai kali
	}
	
	kuadratx = 0;
	
	for(int i=1; i<=n;i++){
		kuadratx=kuadratx+pow(x[i], 2);//nilai x^2
	}
	
	kuadraty = 0;
	
	for(int i=1; i<=n;i++){
		kuadraty=kuadraty+pow(y[i], 2);//nilai y^2
	}
	
	
	//perhitungan atas
	atas=n*kali-hasilx*hasily; 
	
	
	//perhitungan bawah
	r1=kuadratx-pow(hasilx, 2);
	r2=kuadraty-pow(hasily, 2);

	
	bawah=sqrt(r1*r2);
		
	r=atas/bawah;
	
	koefisien=pow(r,2)*100;
	
	cout << "korelasi = "<< r << endl;
	cout << "koefisien determinasi = " << koefisien << endl;
	
	if (r < 0.10) {
		cout << "Hubungan korelasi diabaikan";
	} 
	else if (r >= 0.10){
		cout << "Hubungan korelasi rendah";
	}
	else if (r >= 0.50){
		cout << "Hubungan korelasi sedang";
	}
	else if (r >= 0.30){
		cout << "Hubungan korelasi moderat";
	}
	else if (r > 0.70){
		cout << "Hubungan korelasi sangat kuat";
	}
	
	cout << endl;
	
	
	if(r < 0){
		cout << "Hubungan antara variable x dan y adalah negatif, dimana jika nilai x bertambah, maka nilai y akan mengecil dan juga sebaliknya";
	} else if (r > 0){
		cout << "Hubungan antara variable x dan y adalah positif, dimana jika nilai x bertambah, maka nilai y pun akan bertambah dan juga sebaliknya";
	}
	else if (r = 0){
		cout << "Tidak ada hubungan antara variable x dan y";
	}
}
