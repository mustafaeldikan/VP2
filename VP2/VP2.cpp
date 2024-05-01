#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;



int const QueueSize = 100;
int �tems[QueueSize];
int front,rear;
int generateNumber()
{
	static bool first = true;
	if (first)
	{
		srand(time(NULL));
		first = false;
	}
	return 0 + rand() % (1001);
}
void �nsertNumber()
{
	int x=0;
	if (rear == QueueSize - 1)
		rear = 0;

	else
		rear++;
	
	if (rear == front)
	{
		cout << "Queue overflow" << endl;
		exit(1);
	}
	�tems[rear] = x;

}

int DeleteNumber()
{
	if (front==rear)
	{
		cout << "Queue underflow" << endl;
		exit(1);
	}
	if (front == QueueSize - 1)
		front = 0;
	else
		front++;
	return �tems[front];
}

void Print(int arr[])
{


	cout << "Element in the stack are: " << endl;
	for (int i = 0; i < QueueSize; i++)
	{
		cout << �tems[i] << endl;

	}
}

int main()
{
	int searchNumber, numberOrder;
	cout << "Element in the Queue are: " << endl;
	for (int i = 0; i < 100; i++)
	{
		�tems[i] = generateNumber();
	}
	Print(�tems);

	cout << "Enter thr number you want to search for..." << endl;
	cin >> searchNumber;
	for (int i = 0; i < QueueSize; i++)
	{
		if (searchNumber == �tems[i])
		{
			cout << "The number you entered is in the Queue and avaible in the order :" << i << endl;
		}
		else
			cout << "The number you entered is not in the Queue" << endl;
	}
	//�nsertNumber();
	//DeleteNumber();





	return 0;
}