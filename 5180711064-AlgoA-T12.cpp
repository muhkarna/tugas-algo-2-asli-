#include<stdlib.h>
#include<iostream>
#include<math.h>

using namespace std;
int nama[10],diedit, dihapus, cari;
double ketemu = 0,temp,j,k,a,r,m,n,u,s,w;
bool situasi=0;


void percobaan(){
cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
cout<<"\n\n====DATA SEK MBOK GOLEKI=====";
cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";

	cout << "\nLEBOKNO DATA SEK MBOK GOLEK ";
	cin >> cari;
	for (int k = 0; k<n; k++)
	{
		if (cari == nama[k])
        {
            situasi=true;
            situasi++;
            if(situasi==1)
            {
                cout << "\nNilai " << cari << " TERDAPAT PADA INDEX KE-- " << r+1 <<endl;
                ketemu = 1;
            }
		}
	}
	if (ketemu == 0) cout << "MAAF DATA SEK MBOK GOLEKI RA KETEMU";

	cout<<"\n======= DATA YANG DIHAPUS ======\n";

	cout << "\nMasukkan Nilai Data Yang Akan Dihapus = ";
	cin >> dihapus;
	for (int a = 0; a < n; a++)
	{
		if (dihapus == nama[a])
		{
			for (int r = a; r < n; r++)
			{
				nama[r]= nama[r + 1];
			}
			n-= 1;
		}
	}
	cout << "\n\nData Baru :";
	for (int m = 0; m<n; m++)
	{
		cout << "\nData Ke-" << m+1 << " = " << nama[m];
	}

	cout<<"\n\n======= EDIT DATA ======"<<endl;

	cout << "\nMasukkan Nilai Data Yang Diedit = "; cin >> diedit;
	for (int u = 0; u<n; u++)
	{
		if (nama[u] == diedit)
		{
			cout << "Masukka Nilai Baru = "; cin >> nama[u];
		}
	}
	for(int i=n-2;i>=0;i--)
    {
        for(int w=0;w<=i;w++)
        {
            if(nama[w]>nama[w+1])
            {
                temp=nama[w];
                nama[w]=nama[w+1];
                nama[w+1]=temp;
            }
        }
    }
    cout << "\nData Setelah Diedit = ";
    for(int s=0;s<n;s++){cout<<"\nData Ke-"<<s+1<<" ="<<nama[s];}
}


main()
{
        cout<<"\n=======DATA YANG INGIN DIMASUKAN======"<<endl;
	cout << "Masukkan jumlah data : ";
	cin >>n;
		if (n>=10)
	{
		cout << "\nMaaf,Batas Max adalah 10!\n\n";
		do
        {
            cout << "Masukkan Jumlah Data = ";
            cin >>n;
        }
        while(n>=10);
	}
	else
	{
        for(int i=0;i<n;i++)
        {
          cout<<"\nLEBOKNO DATA SEK KE-" << i + 1 << " : ";
          cin>>nama[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
              if(nama[j]>nama[j+1])
                {
                    temp=nama[j];
                    nama[j]=nama[j+1];
                    nama[j+1]=temp;
                }
            }
            system("CLS");
        }
        for(int i=0;i<n;i++){cout<<"\nData Ke-"<<i+1<<" = "<<nama[i];}
	}
	 percobaan(); }
