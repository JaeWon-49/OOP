#include <iostream>
#include <vector>
#include <fstream>
#include <chrono>
#include <algorithm>
using namespace std;

int main()
{
	int NI = 20, NO = 10;
	int capacity = 100;
	int lost = 0;
	int Nofpackets[120];
	int k = rand() % NI;
	int n = rand() % NO;
	auto startTime = std::chrono::system_clock::now();
	int sec = 0;
	int itime = 0;
	float sum = 0;
	vector<int> queue;
	ofstream out("sprint3.txt");

	while (true)
	{
		auto endTime = std::chrono::system_clock::now();
		auto sec = std::chrono::duration_cast<std::chrono::seconds>(endTime - startTime);
		if(sec.count() > itime)
		{
			if (capacity < queue.size() + k)
			{
				lost += queue.size() + k - capacity;
				k = capacity - queue.size();
			}
			for (int i = 0; i < k; i++)
			{
				queue.push_back(rand() % NI);
			}
			for (int i = 0; i < n; i++)
			{
				if (queue.size() != 0)
				{
					cout << queue[0] << endl;
					queue.erase(queue.begin());
				}
			}
			itime++;
		}


		
		if (itime > 120)
		{
			break;
		}
	}

	Nofpackets[itime] = queue.size();
	out << Nofpackets[itime] << endl;
	sum += Nofpackets[itime];

	out.close();
	cout << "lost : " << lost << endl;
	cout << "avg : " << sum / 120 << endl;
	sort(Nofpackets, Nofpackets+120);
	cout << "max : " << Nofpackets[119] << endl;

	return 0;
}