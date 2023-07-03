#include <iostream>
using namespace std;
	
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int b) {
		this->y = b;
	}
	int getY() {
		return y;
	}
};
class Lingkaran :public bidangDatar {
private:
	int r;
public:
	void input() {
		cout << "Lingkaran dibuat \nMasukkan Jejari : ";
		cin >> r;
		setX(r);
	}
	float Luas(int a) {
		return 3.14 * r * r;
	}
	float Keliling(int a) {
		return 3.14 * r * 2;
	}
	void cekUkuran() {
		int keliling = Keliling(getX());
		cout << "Luas Lingkaran = " << Luas(getX()) << endl;
		cout << "Keliling Lingkaran = " << keliling << endl;
		if (keliling > 40) {
			cout << "Ukuran Lingkaran adalah Besar" << endl;
		}
		else if (keliling < 20) {
			cout << "Ukuran Lingkaran adalah Sedang" << endl;
		}
		else if (keliling < 10) {
			cout << "Ukuran Lingkaran adalah Kecil" << endl;
		}
	}
	/*void cekUkuran() {
		int keliling = Keliling(getX());
		cout << "Luas PersegiPanjang = " << Luas(getX()) << endl;
		cout << "Keliling PersegiPanjang = " << keliling << endl;
		if (keliling > 40) {
			cout << "Ukuran PersegiPanjang adalah Besar" << endl;
		}
		else if (keliling < 20) {
			cout << "Ukuran PersegiPanjang adalah Sedang" << endl;
		}
		else if (keliling < 10) {
			cout << "Ukuran PersegiPanjang adalah Kecil" << endl;
		}
	}*/

};

class Persegipanjang :public bidangDatar { 
public:
	void input() {
		int p, l;
		cout << "PersegiPanjang dibuat \nMasukkan panjang : ";
		cin >> p;
		cout << "Masukkan lebar : ";
		cin >> l;
		setX(p);
		setY(l);
	}

	float Luas(int p, int l) {
		return p * l;
	}

	float Keliling(int p, int l) {
		return 2 * (p + l);
	}
	void cekUkuran() {
		int keliling = Keliling(getX(), getY());
		cout << "Luas PersegiPanjang = " << Luas(getX(), getY()) << endl;
		cout << "Keliling PersegiPanjang = " << keliling << endl;
		if (keliling > 40) {
			cout << "Ukuran PersegiPanjang adalah Besar" << endl;
		}
		else if (keliling < 20) {
			cout << "Ukuran PersegiPanjang adalah Sedang" << endl;
		}
		else if (keliling < 10) {
			cout << "Ukuran PersegiPanjang adalah Kecil" << endl;
		}
	}
};

int main() 
{ 

	bidangDatar* b;
	Lingkaran lingkar;
	Persegipanjang pp;
	char ulang;

	do {
	
	b = &lingkar;
	b->input();
	b->cekUkuran();


	b = &pp;
	b->input();
	b->cekUkuran();

	cout << "\n";

	cout << "Apakah anda ingin mengulang pemrograman? Y/N \n";
	cin >> ulang;
	cout << endl;

	}while (ulang == 'y' || ulang == 'Y');

	return 0;

}
