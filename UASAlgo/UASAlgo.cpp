#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 100;

class Mahasiswa {
private:
	const int MAX_MAHASISWA = 100;
	string queue_array[100];
	int top;

public:
	Mahasiswa() {
		top = -1;
	}
};

int main() {
	 Mahasiswa;


}
void tambahMahasiswa() {
	int NIM[MAX_MAHASISWA];

}

void tampilkanSemuaMahasiswa() {
	int NIM[MAX_MAHASISWA];
}
void algorithmaMahasiswaByNIM() {

}
void algorithaSortByTahunMasuk() {

}

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			cout << "\nNama Mahasiswa: ";
			string element;
			getline(cin, element);
			Mahasiswa.push(element);
			break;
		case 2:
			
			break;
		case 3:
			//isi disini
			break;
		case 4:
			//isi disini
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


//2. Algorithma yang saya gunakan adalah
//3.Perbedaan antara algorithma stack and queue:
//  Stack : menyimpan data dengan ditumpuk seperti bola pada tenis lapangan, pintu masuk hanya ditop saja, penyimpanan menggunakan LIFO (Last in First Out),
//  Queue : menyimpan data dengan antrian yang lebih dulu datang akan diproses lebih dulu,penyimpanan memggunakan FIFO (First in First Out)
//4. Menggunakan algorithma stack pada saat data ditumpuk
//5. a.Kedalaman yang dimiliki struktur tersebut adalah 5
//	 b.Preorder traversal: 25, 20, 10, 5, 1, 8, 12, 15, 22, 36, 30, 28, 40, 38, 48, 45, 50