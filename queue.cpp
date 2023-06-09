#include <iostream>
#include <Windows.h>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;
int main() { // NI:10,20. NO:15,30. cap:100,120.
	int itime = 0, NI = 80, NO = 30, ni, no1, no2, capacity = 120, k, lost = 0, NofPackets[120];
	float sum = 0;
	vector <int> q;
	ofstream xx("2_out.txt");
	while (itime++ < 120) {
		Sleep(10);
		ni = rand() % NI;
		no1 = rand() % NO;
		no2 = rand() % NO;

		if (capacity < q.size() + ni) {
			lost += q.size() + ni - capacity;
			ni = capacity - q.size();
		}

		for (int i = 0; i < ni; i++) {
			q.push_back(rand() % NI);
		}

		// 1번 출구
		for (int i = 0; i < no1; i++) {
			if (q.size() != 0) {
				q.erase(q.begin());
			}
		}

		NofPackets[itime] = q.size();
		xx << NofPackets[itime] << "\n";
		sum += NofPackets[itime];
	}
	xx.close();
	cout << "손실:  " << lost << "\n";
	cout << "평균:  " << sum / 120. << "\n";
	sort(NofPackets, NofPackets + 120);
	cout << "최대값:  " << NofPackets[119];

	return 123;
}
