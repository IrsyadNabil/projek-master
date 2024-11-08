#include "function.h"
using namespace std;

int main() {
	int hasil, pilihan1;
	char pilihan2, data, kembali_anggota, kembali_anggota2, ulang, kembali_admin, kembali_admin2, logout, logout2, menu_edit, ulangi_buku, kembali_lihat, kembali_daftar, kembali_login, loginAs;
	string Nim, pass, username;

	do
	{
		ulang = 'n';
		system("cls");
		cout << "Selamat datang di Perpustakaan Kelas C for Cakep" << endl;
		cout << "1. Tampilkan Buku \n2. Login \n3. Daftar" << endl;
		cout << "Masukkan pilihan anda (isikan pilihan anda dengan memasukkan angka 1/2/3) : ";
		cin >> pilihan1;
		cin.ignore();
		switch (pilihan1)
		{
		case 1:
			do
			{
				kembali_lihat = 'y', 'Y';
				system("cls");
				/*cetakSemuaBuku();*/
				cout << "Apakah anda ingin kembali? y / n : ";
				cin >> kembali_lihat;
			} while (kembali_lihat == 'n' || kembali_lihat == 'N');
			if (kembali_lihat == 'y' || kembali_lihat == 'Y')
			{
				ulang = 'y';
			}
			break;
		case 2:
			system("cls");
			cout << "Login sebagai \n1. Mahasiswa \n2. Admin \nIsikan dengan angka : ";
			cin >> loginAs;
			switch (loginAs)
			{
			case '1':
			do
			{
				system("cls");
				int pengguna;
				bool login = false; // Menggunakan boolean untuk cek login berhasil atau tidak
				char kembali_login;
				cout << "Login" << endl;
				cout << "Masukkan NIM anda     : ";
				cin >> Nim;
				cout << "Masukkan password anda : ";
				cin >> pass;

				bool data_valid = false; // Cek validitas data
				for (int i = 0; i < 99; i++) {
					if (Nim == "admin" && pass == "123") {
						pengguna = i;
						login = 1;
						data_valid = true;
					}
				}

				if (!data_valid) {
					cout << "Nim atau Password Salah!!!\nAtau anda belum mendaftar" << endl;
					cout << "Apakah anda ingin login ulang? y / n : ";
					cin >> kembali_login;
				} else {
					kembali_login = 'n'; // Akhiri loop jika login berhasil
				}
			} while (kembali_login == 'y');
				break;
			case '2':
			do
			{
				int i = 100;
				kembali_login = 'y';
				cout << "Login : ";
				cout << "Masukkan NIM anda     : ";
				cin >> username;
				cout << "Masukkan password anda : ";
				cin >> pass;
				for (int i = 0; i < 2; i++)
				{
					if (username == user[i][0] && pass == user[i][1])
					{
						login = 2;
					} else {
						kembali_login = 'y';
					}
				}
			} while (kembali_login == 'y');
				break;
			}
			switch (login)
			{
			case 1:
				do
				{
					kembali_anggota = 'n','N';
					system("cls");
					cout << "Selamat datang" << endl;
					cout << "1. Tampilkan Buku \n2. Pinjam Buku \n3. Kembalikan Buku \n4. Keterangan anda \n5. Logout" << endl;
					cout << "Masukkan pilihan anda (isikan pilihan anda dengan memasukkan angka 1/2/3/4/5) : ";
					cin >> pilihan2;
					switch (pilihan2)
					{
					case '1':
						do
						{
							system("cls");
							cetakSemuaBuku();
							cout << "Apakah anda ingin kembali? y / n : ";
							cin >> kembali_anggota;
						} while (kembali_anggota == 'n' || kembali_anggota == 'N');
						break;
					case '2':
						do
						{
							system("cls");
							pinjam();
							cout << "Apakah anda ingin kembali? y / n : ";
							cin >> kembali_anggota;
						} while (kembali_anggota == 'n' || kembali_anggota == 'N');
						break;
					case '3':
						do
						{
							system("cls");
							cout << "kembalikan" << endl;
							cout << "Apakah anda ingin kembali? y / n : ";
							cin >> kembali_anggota;
						} while (kembali_anggota == 'n' || kembali_anggota == 'N');
						break;
					case '4':
						do
						{
							system("cls");
							cout << "keterangan" << endl;
							tampil();
							cout << "Apakah anda ingin kembali? y / n : ";
							cin >> kembali_anggota;
						} while (kembali_anggota == 'n' || kembali_anggota == 'N');
						break;
					case '5':
						logout2 = 'n';
						system("cls");
						cout << "Apakah anda yakin ingin logout? y / n : ";
						cin >> logout;
						if (logout == 'y' || logout == 'Y')
						{
							ulang = 'y';
						}
						else {
							kembali_anggota = 'y';
						}
						break;
					default:
						kembali_anggota = 'y';
						break;
					}
				} while (kembali_anggota == 'y' || kembali_anggota == 'Y');
				break;
			case 2:
				do
				{
					kembali_admin = 'n', 'N';
					system("cls");
					cout << "1. Edit Daftar Buku \n2. Tampilkan Data Peminjam \n3. Tambah Data Peminjam \n4. Ubah Data Peminjam \n5. Hapus Data Peminjam \n6. Log Out" << endl;
					cout << "Pilihan : ";
					cin >> pilihan2;

					switch (pilihan2) {
					case '1':
						do
						{
							system("cls");
							cout << "Menu Edit Buku " << endl;
							cout << "1. Tambah Buku \n2. Kurangi Buku \n3. Edit Buku \n4. Kembali \nMasukkan pilihan dengan mengisikan angka (1/2/3) : ";
							cin >> menu_edit;
							switch (menu_edit)
							{
							case '1':
								do
								{
									system("cls");
									cout << "Tambah buku" << endl;
									cout << "Apakah anda ingin kembali? y / n : ";
									cin >> ulangi_buku;
								} while (ulangi_buku == 'n' || ulangi_buku == 'N');
								break;
							case '2':
								do
								{
									system("cls");
									cout << "Kurangi buku" << endl;
									cout << "Apakah anda ingin kembali? y / n : ";
									cin >> ulangi_buku;
								} while (ulangi_buku == 'n' || ulangi_buku == 'N');
								break;
							case '3':
								do
								{
									system("cls");
									cout << "Edit buku" << endl;
									cout << "Apakah anda ingin kembali? y / n : ";
									cin >> ulangi_buku;
								} while (ulangi_buku == 'n' || ulangi_buku == 'N');
								break;
							case '4':
								kembali_admin = 'y';
								ulangi_buku = 'n';
								break;
							default:
								break;
							}
						} while (ulangi_buku == 'y' || ulangi_buku == 'Y');
						break;

					case '2':
						do
						{
							system("cls");
							cout << "Tampilkan Peminjam" << endl;
							cout << "Apakah anda ingin kembali? y / n : ";
							cin >> kembali_admin;
						} while (kembali_admin == 'n' || kembali_admin == 'N');
						break;

					case '3':
						do
						{
							system("cls");
							cout << "Tambah data peminjam" << endl;
							cout << "Apakah anda ingin kembali? y / n : ";
							cin >> kembali_admin;
						} while (kembali_admin == 'n' || kembali_admin == 'N');
						break;

					case '4':
						do
						{
							system("cls");
							cout << "Ubah data peminjam" << endl;
							cout << "Apakah anda ingin kembali? y / n : ";
							cin >> kembali_admin;
						} while (kembali_admin == 'n' || kembali_admin == 'N');
						break;

					case '5':
						system("cls");
						cout << "Hapus data peminjam" << endl;
						cout << "Apakah anda ingin kembali? y / n : ";
						cin >> kembali_admin;
						break;

					case '6':
						logout2 = 'n';
						system("cls");
						cout << "Apakah anda yakin ingin logout? y / n : ";
						cin >> logout;
						if (logout == 'y' || logout == 'Y')
						{
							ulang = 'y';
						}
						else
						{
							kembali_admin = 'y';
						}
						break;

					default:
						kembali_admin = 'y';
						break;
					}
				} while (kembali_admin == 'y');
				break;
			}
			break;

		case 3:
			do
			{
				kembali_daftar = 'y', 'Y';
				daftar();
				cout << "Apakah anda yakin ingin kembali? y / n : ";
				cin >> kembali_daftar;
			} while (kembali_daftar == 'n' || kembali_daftar == 'N');
			if (kembali_daftar != 'n' || kembali_daftar != 'N')
			{
				ulang = 'y';
			}
			break;
		default:
			cout << "Pilihan tidak valid. Silahkan coba lagi!" << endl;
			cout << "Apakah anda ingin memilih ulang? y / n : ";
			cin >> ulang;
			break;
		}
	} while (ulang == 'y');
}