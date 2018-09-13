#include <iostream>

int main()
{
	const int INITIAL_ALLOCATION_SIZE = 10;
	int *  pData = new int[INITIAL_ALLOCATION_SIZE];
	int nUsed = 0, nAllocated = INITIAL_ALLOCATION_SIZE;
	while (true)
	{
		int temp;
		std::cin >> temp;

		if (std::cin)
		{
			if (nUsed == nAllocated)
			{
				int nAllocatedNew = nAllocated * 2;
				int * pNewData = new int[nAllocatedNew];

				memcpy(pNewData, pData, sizeof(int)*nAllocated);


				delete[] pData;
				pData = pNewData;

				nAllocated = nAllocatedNew;
			}
			pData[nUsed++] = temp;

		}
		else
			break;
		
	}
	for (int i = nUsed - 1; i >= 0; i--)
	{
		std::cout << pData[i] << ' ';
	}
	delete[] pData;
	system("pause");
	return 0;
}