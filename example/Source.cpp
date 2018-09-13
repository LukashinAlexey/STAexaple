#include <iostream>

int main()
{
	int nombersCount = 0;
	int *  arr = new int[5];
	while (true)
	{
		int temp;
		std::cin >> temp;

		if (std::cin)
		{
			arr[nombersCount++] = temp;

		}
		else
			break;
		
	}
	for (int i = nombersCount - 1; i >= 0; i--)
	{
		std::cout << arr[i] << ' ';
	}
	delete[] arr;
	system("pause");
	return 0;
}