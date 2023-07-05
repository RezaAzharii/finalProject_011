#include <iostream>

using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() {

		return 0; 
	}

	virtual void cekKelulusan() {
		return 0;
	}

	virtual void input() { 
		return 0;
	}

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}
	
	void setP(int p){
		this->presensi = p;
	}

	void setA(int a) {
		this->activity = a;
	}

	void setE(int e) {
		this->exercise = e;
	}

	void setUA(int ua){
		this->tugasAkhir = ua;
	}

	void getP(int p) {
		return;
	}
};

class Pemrograman : public MataKuliah {
	float hitungNilaiAkhir() {
		return 
	}

	void cekKelulusan(){

	}

	void input() {
		int p, a, e, ua;
		cout << "Program dibuat" << endl;
		cout << "Masukan nilai Presensi   : " << endl;
		cin >> p;
		cout << "Masukan nilai Activity   : " << endl;
		cin >> a;
		cout << "Masukan nilai Exercise   : " << endl;
		cin >> e;
		cout << "Masukan nilai TugasAkhir : " << endl;
		cin >> ua;
		if ( >= 75) {
			return "Selamat, Anda lulus mata kuliah Pemograman dengan nilai akhir ";
				
				
		}

		return 0;
	}
};

int main() { 
	MataKuliah* Mk;	Pemrograman pm;	Mk = &pm;	Mk->input();	pm.}