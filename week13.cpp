#include <iostream>
#include <fstream>
#include "queue.h"
#include <Windows.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//CO=CI
	cout << "NO = NI" << endl;
	queue m1(10, 10, 100);
	ofstream q0("queue.txt");
	int NofPackets[120];

	int k = 10, loss = 0;
	for (int t = 0; t < 120; t++) {
		if (m1.NC < m1.size() + k) {
			loss += m1.size() + k - m1.NC;
			k = m1.NC - m1.size();
		}
		m1.newin();
		cout << m1.size() << endl;
		q0 << m1.size() << endl;
		m1.newout();
		cout << m1.size() << endl;
		q0 << m1.size() << endl;
		Sleep(100);

		NofPackets[t] = m1.size();
	}

	sort(NofPackets, NofPackets + 120);
	cout << NofPackets[119] << endl;
	cout << m1.totalN << endl;
	cout << m1.totalN / 120 << endl;
	cout << loss;
	

	//CO>CI
	cout << "NO > NI" << endl;
	queue m2(40, 10, 100);
	ofstream q1("queue1.txt");
	int NofPackets[120];

	int k = 10, loss = 0;
	for (int t = 0; t < 120; t++) {
		if (m1.NC < m1.size() + k) {
			loss += m1.size() + k - m1.NC;
			k = m1.NC - m1.size();
		}
		m1.newin();
		cout << m1.size() << endl;
		q1.newout();
		cout << m1.size() << endl;
		q1 << m1.size() << endl;
		Sleep(100);

		NofPackets[t] = m1.size();
	}

	sort(NofPackets, NofPackets + 120);
	cout << NofPackets[119] << endl;
	cout << m1.totalN << endl;
	cout << m1.totalN / 120 << endl;
	cout << loss;


	queue m3(10, 40, 100);
	ofstream q2("queue2.txt");
	int NofPackets[120];

	int k = 10, loss = 0;
	for (int t = 0; t < 120; t++) {
		if (m1.NC < m1.size() + k) {
			loss += m1.size() + k - m1.NC;
			k = m1.NC - m1.size();
		}
		m1.newin();
		cout << m1.size() << endl;
		q2 << m1.size() << endl;
		m1.newout();
		cout << m1.size() << endl;
		q2 << m1.size() << endl;
		Sleep(100);

		NofPackets[t] = m1.size();
	}


	cout << "NO < NI" << endl;
	sort(NofPackets, NofPackets + 120);
	cout << NofPackets[119] << endl;
	cout << m1.totalN << endl;
	cout << m1.totalN / 120 << endl;
	cout << loss;

	return 123;
}