#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>
using namespace std;

struct Barang {
	string nama[20];
	int jumlah_barang[20];
	int harga_barang[20];
}barang;

struct Node {
	Barang barang[20];
	int Tail;
	int head;
}node;

bool empty() {
	if(node.Tail==0){
		return true;
	}else{
		return false;
	}
}

void init() {
	node.head=0;
	node.Tail=0;
}

void LoadBarangFromFile() {
	
}

bool TambahBarang(string nama,int jumlah_barang,int harga_barang) {
	barang.nama[node.Tail]=nama;
	barang.jumlah_barang[node.Tail]=jumlah_barang;
	barang.harga_barang[node.Tail]=harga_barang;
	node.Tail++;
	return true;
} 

bool HapusALLBarang() {
	node.head=node.Tail=-1;
	cout << "Data Telah Dikosongkan !" << endl;
}

void Tampil() {
	if(!empty()) {
		for(int i=node.head;i<node.Tail ;i++) {
			cout << "Barang : " << i +1 << endl;
			cout << "Nama Barang : " << barang.nama[i] << " |" << " Jumlah : " << barang.jumlah_barang[i] << " |" << " Total : " << barang.harga_barang[i] << endl;
		}
	}else{
	cout << "Data Kosong" << endl;
	}
}

int main () {
	string nama;
	int jumlah_barang, harga_barang, input_barang, total_harga,pilihan;
	
	
	do{
	cout << "1. Checkout Barang" << endl;
	cout << "2. Riwayat Penjulan Hari Ini" << endl;
	cout << "3. Hapus" << endl;
	cout << "Masukkan Pilihan Anda : ";
	cin >> pilihan;

	switch(pilihan) {
		case 1:{	
		char tambah;		
				do {
					cout << "Masukkan Barang Yang Mau Di Checkout !" << endl;
					cout << "Masukkan Nama Barang : ";
					cin >> nama;
					cout << "Masukkan Jumlah Barang : ";
					cin >> jumlah_barang;
					cout << "Masukkan Harga Barang : ";
					cin >> harga_barang;
					total_harga = harga_barang * jumlah_barang;
					TambahBarang(nama,jumlah_barang,total_harga);
					cout << "Nama Barang : " << nama << " |" << " Jumlah Barang : " << jumlah_barang << " |" << " Total Harga : " << "Rp." << total_harga <<endl;
					cin.ignore();
					cout << "Apakah Kamu Mau Checkout Barang Lagi ? : ";
					cin >> tambah;
					system("cls");
				}while(tambah == 'y');
			break;
		}
		case 2: {
			Tampil();
			break;
		}
		case 3: {
			HapusALLBarang(); 
			break;
		}	
		}
	}while(pilihan != 9);
}
	
