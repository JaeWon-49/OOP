#include "queue.h";

int main()
{
	srand((unsigned int)time(NULL));
	queue q1(20, 30, 120);
	queue q2(20, 40, 120);
	queue q3(10, 30, 120);
	queue q4(20, 30, 150);

	int itime = 0;
	int lost = 0;
	int k = 0;
	int n = 0;
	int Nofpackets[120];
	int sum = 0;
	ofstream out1("q1.txt");
	while (itime++ < 120)
	{
		Sleep(10);
		k = rand() % q1.NI;
		n = rand() % q1.NO;
		if (q1.NC < q1.size() + k)
		{
			lost += q1.size() + k - q1.NC;
			k = q1.NC - q1.size();
		}
		for (int i = 0; i < k; i++)
		{
			q1.push_back(rand() % 20);
		}
		for (int i = 0; i < n; i++)
		{
			if (q1.size() != 0)
			{
				q1.erase(q1.begin());
			}
		}
		Nofpackets[itime - 1] = q1.size();
		out1 << Nofpackets[itime - 1] << endl;
		sum += Nofpackets[itime - 1];
	}
	out1.close();

	cout << "fullness : " << q1.size()/q1.NC << endl;
	cout << "lost :  << q1.lost << endl;
	
}