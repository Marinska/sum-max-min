#include <iostream> //Nama Umar Ibnu ZM
using namespace std; //NIM 311810909

void menu()
{
	cout<<"Selamat datang\nSilahkan pilih operasi : \n";
	cout<<"1. Menghitung jumlah total\n2. Menghitung rata-rata\n3. Menghitung nilai maks\n4. Menghitung nilai min\n";
}

void array(int a[5])
{
	
	cout<<"\nSilahkan masukan data array terlebih dahulu\n";
	for(int i=1;i<=5;i++)
	{
		
		cout<<"Masukan nilai array indeks ke-"<<i-1<<" : ";
		cin>>a[i];
	}
}

void operasi()
{
	int operasi,a[5],x,y,y1,max,min;
	array(a);
	cout<<"\nSilahkan pilih mode operasi : ";
	cin>>operasi;
	x=0;
	if(operasi==1)
	{
		for(int i=1;i<=5;i++)
		{	
			x=x+a[i];
		}
		
			cout<<"Nilai jumlah total data array adalah "<<x;
	}else if(operasi==2)
	{
		y=0;
		y1=0;
		for(int j=1;j<=5;j++)
		{
			y=y+a[j];
			y1=y/j;
		}
		cout<<"Nilai rata rata data array adalah "<<y1;
	}else if(operasi==3)
	{
		max=0;
		for(int l=1;l<=5;l++)
		{
			if(a[l]>max)
			max=a[l];
		}
		cout<<"Nilai max dari data array adalah "<<max;
	}else if(operasi==4)
	{
		min=1000;
		for(int m=1;m<=5;m++)
		{
			if(a[m]<min)
			{
				min=a[m];
			}
		}
		cout<<"Nilai min dari data array adalah "<<min;
	}
	
}

int main()
{
	char yn;
	do {
	menu();
	operasi();
	cout<<"\nApa mau diulang? [y/n]";
	cin>>yn;
	}
	while (yn=='y');
	
}
