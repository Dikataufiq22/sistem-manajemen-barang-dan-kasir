#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>
using namespace std;

int main(){
	string nama_barang [100], temp_nama, dicari;
	float harga_barang [100], temp_harga, total_harga=0;
	int stok_barang [100], temp_stok, i, cek, jumlah_barang, total_barang, total_stok=0;
	
	cout<<"=====================PROGRAM MANAGE STOK BARANG====================="<<endl;
	cout<<"Tentukan Jumlah Barang yang ingin di tambahkan: ";
	cin>>jumlah_barang;
	cout<<endl;
	
	for(i=0; i<jumlah_barang; i++)
	{
		cout<<"======================="<<i+1<<"======================="<<endl;
		cout<<"Masukan Nama Barang: ";
		cin>>nama_barang[i];
		cout<<"Masukan Harga Barang: ";
		cin>>harga_barang[i];
		cout<<"Masukkan Jumlah Stok: ";
		cin>>stok_barang[i];
		cout<<endl;
		
	 } 
	 system("cls");
	 cout<<"==========================================================="<<endl;
	 cout<< jumlah_barang<< " Barang Telah Ditambahkan!!"<<endl<<endl;
	 getch();
	 
	 total_barang=jumlah_barang;
	 for(int g=0; g<jumlah_barang; g++)
	 {
	 	total_harga=total_harga+harga_barang[g];
	 }
	 for(int g=0; g<jumlah_barang; g++)
	 {
	 	total_stok=total_stok+stok_barang[g];
	 }
	 
	 menu:
	 	system("cls");
	 	int pilih;
	 	cout<<"=====================MENU PROGRAM====================="<<endl;
	 	cout<<"1. Cari Barang"<<endl;
	 	cout<<"2. Cari Semua Barang"<<endl;
	 	cout<<"9. Keluar"<<endl;
	 	cout<<"Masukan pilihan (1/2): ";
	 	cin>>pilih;
	 	switch(pilih)
	 	{
	 		case 1:
	 			system("cls");
	 			cout<<"=====================Cek Stok Barang====================="<<endl;
	 			cek=0;
	 			cout<<"Masukan Nama Barang yang dicari: ";
	 			cin>>dicari;
	 			
	 			for(i=0; i<jumlah_barang; i++)
	 			{
	 				if(nama_barang[i]==dicari)
	 				{
	 					cek=1;
	 					break;
					 }
				 }
				if(cek==1)
				{
					cout<<"Data ditemukan di index ke: "<<i+1<<endl;
					cout<<"Nama Barang  :"<<nama_barang[i]<<endl;
					cout<<"Harga Barang :"<<harga_barang[i]<<endl;
					cout<<"Jumlah Stok  :"<<stok_barang[i]<<endl;
				}
				else
					cout<<"Barang Tidak Ditemukan!!"<<endl;
					
			break;
			case 2:
				int pilih2;
				system("cls");
				cout<<"=====================Lihat Semua Barang====================="<<endl;
				cout<<"1. Lihat Berdasarkan Index:"<<endl;
				cout<<"2. Lihat Berdasarkan Harga:"<<endl;
				cout<<"3. Lihat Berdasarkan Jumlah Stok:"<<endl;
				cout<<"9. Kembali"<<endl;
				cout<<"Masukan Pilihan (1-3): "<<endl;
				cin>>pilih2;
				switch(pilih2)
				{
					case 1:
						system("cls");
						cout<<"\t\t\t LIST BERDASARKAN INDEX"<<endl;
						cout<<"|======================================================|"<<endl;
						cout<<"| NO  |  Nama Barang  |  Harga Barang  |  Jumlah Stok  |"<<endl;
						cout<<"|======================================================|"<<endl;
						for(i=0; i<jumlah_barang; i++)
						{
							cout<<"| "<<i+1<<"   |\t        "<<nama_barang[i]<<"\t     |\t\t"<<harga_barang[i]<<"\t     |\t\t"<<stok_barang[i]<<"\t    |"<<endl;
						}
						cout<<"|======================================================|"<<endl;
						cout<<"|TOTAL|\t      "<<total_barang<<"\t      |\t\t"<<total_harga<<"\t      |\t\t" <<total_stok<<"\t     |"<<endl;
						cout<<"|======================================================|"<<endl;
					break;
					case 2:
					for(int x=0; x<jumlah_barang; x++)
					{
						for(int y=0; y<jumlah_barang; y++)
						{
							if (harga_barang[x]<harga_barang[y])
							{
							
							temp_harga=harga_barang[x]; 
							harga_barang [x]=harga_barang[y]; 
							harga_barang [y]=temp_harga;
							
							temp_nama=nama_barang[x]; 
							nama_barang[x]=nama_barang[y]; 
							nama_barang[y]=temp_nama;
							
							temp_stok=stok_barang [x]; 
							stok_barang[x]=stok_barang[y]; 
							stok_barang[y]=temp_stok;
							}
						}
					}
					
					system("cls");
					cout<<"\t\t\t LIST BERDASARKAN HARGA"<<endl;
						cout<<"|======================================================|"<<endl;
						cout<<"| NO  |  Nama Barang  |  Harga Barang  |  Jumlah Stok  |"<<endl;
						cout<<"|======================================================|"<<endl;
						for(i=0; i<jumlah_barang; i++)
						{
							cout<<"| "<<i+1<<"   |\t        "<<nama_barang[i]<<"\t     |\t\t"<<harga_barang[i]<<"\t     |\t\t"<<stok_barang[i]<<"\t    |"<<endl;
						}
						cout<<"|======================================================|"<<endl;
						cout<<"|TOTAL|\t         "<<total_barang<<"\t     |\t\t"<<total_harga<<"\t         |\t\t" <<total_stok<<"\t     |"<<endl;
						cout<<"|======================================================|"<<endl;
					break;
					case 3:
					for(int x=0; x<jumlah_barang; x++)
					{
						for(int y=0; y<jumlah_barang; y++)
						{
							if (stok_barang[x]<stok_barang[y])
							{
							
							temp_harga=harga_barang[x]; 
							harga_barang [x]=harga_barang[y]; 
							harga_barang [y]=temp_harga;
							
							temp_nama=nama_barang[x]; 
							nama_barang[x]=nama_barang[y]; 
							nama_barang[y]=temp_nama;
							
							temp_stok=stok_barang [x]; 
							stok_barang[x]=stok_barang[y]; 
							stok_barang[y]=temp_stok;
							}
						}
					}
						
					system("cls");
					cout<<"\t\t\t LIST BERDASARKAN HARGA"<<endl;
						cout<<"|======================================================|"<<endl;
						cout<<"| NO  |  Nama Barang  |  Harga Barang  |  Jumlah Stok  |"<<endl;
						cout<<"|======================================================|"<<endl;
						for(i=0; i<jumlah_barang; i++)
						{
							cout<<"| "<<i+1<<"   |\t        "<<nama_barang[i]<<"\t     |\t\t"<<harga_barang[i]<<"\t     |\t\t"<<stok_barang[i]<<"\t    |"<<endl;
						}
						cout<<"|======================================================|"<<endl;
						cout<<"|TOTAL|\t         "<<total_barang<<"\t     |\t\t"<<total_harga<<"\t         |\t\t" <<total_stok<<"\t     |"<<endl;
						cout<<"|======================================================|"<<endl;
					break;
					case 9:
						goto menu;
					break;
			}
			break;
			case 9:
				goto akhir;
			break;
			}
			char lagi;
			cout<<endl;
			cout<<"Lagi? (Y/N)";
			cin>>lagi;
			if(lagi=='y'||lagi=='y')
			{
				goto menu;
			}
			else if(lagi=='n'||lagi=='n')
			{
				akhir:
					system("cls");
					cout<<"\t\t\t KELOMPOK DIKA" << endl;
					cout<<"Radinka Taufiqul Haq"<<endl;
			}
			
		}

