

#include <iostream>
using namespace std;

int main()
{ 
	float nMat, nfisika, rerata;
	string status;

	cout << "Masukkan nilai Matematika ";
	cin >> nMat;
	cout << "Masukkan nilai Fisika ";
	cin >> nfisika;

	rerata = (nfisika + nMat) / 2;

	if (rerata >= 60) {
		status = "lulus jalur rerata";
	}
	else if (nMat >= 70) {
		status = "lulus jalur matematika";
	}
	else {
		status = "tidak lulus";
	}

	cout << "statusnya adalah  " << status << endl;
	system("pause");
}

