#include <iostream>
#include <vector>
#include <fstream>
#include <Windows.h>
#include <algorithm>
using namespace std;

int main()
{
	int NI = 30, NO = 10;
	int capacity = 100;
	int lost = 0;
	int Nofpackets[120];
	int k = rand() % NI;
	int n = rand() % NO;
	int itime = 0;
	float sum = 0;
	vector<int> queue;
	ofstream out("sprint3.txt");

	while (itime++ < 120)
	{
		Sleep(1000);
		if (capacity < queue.size() + k)
		{
			lost += queue.size() + k - capacity;
			k = capacity - queue.size();
		}
		for (int i = 0; i < k; i++)
		{
			queue.push_back(rand() % 20);
		}
		for (int i = 0; i < n; i++)
		{
			if (queue.size() != 0)
			{
				std::cout << queue[0] << endl;
				queue.erase(queue.begin());
			}
		}
		Nofpackets[itime-1] = queue.size();
		out << Nofpackets[itime-1] << endl;
		sum += Nofpackets[itime-1];
	}

	out.close();
	std::cout << "lost : " << lost << endl;
	std::cout << "avg : " << sum / 120 << endl;
	std::sort(Nofpackets, Nofpackets + 120);
	std:: cout << "max : " << Nofpackets[119] << endl;

	return 0;
}
