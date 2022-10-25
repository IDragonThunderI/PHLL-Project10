#include <iostream>
using namespace std;

void main()
{
	// ������� ����� � �++. ������ ���� string
	// ���������� ������� ����� ������� �������

	// 1. ���������� ����������
	string* AS; // ������ �����, ������� ����� �������������
	int count; // ���������� ��������� � �������
	string s; // �������������� ����������-������
	char buf[80]; // ����� ��� ����� �����

	// 2. ������ ���������� ��������� � �������
	cout << "count = ";
	cin >> count;

	// 3. ��������, ��������� �� �������� count
	if (count <= 0)
	{
		cout << "Incorrect input.";
		return;
	}

	// 4. �������� ������ ��� count �����
	AS = new string[count];

	// 5. ���� ����� ����� � ������
	cout << "Enter strings:\n";
	cin.ignore(4096, '\n');

	for (int i = 0; i < count; i++)
	{
		// ������ �������� � ���������
		cout << "=> ";
		cin.getline(buf, 80, '\n');
		AS[i] = buf; // ����������� ������
	}

	// 6. ����� ��������� ������� ��� ��������
	cout << "\nArray AS:" << endl;
	for (int i = 0; i < count; i++)
		cout << "A[" << i << "] = " << AS[i] << endl;

	// 7. ���������� ������� AS �� �����������
	for (int i = 0; i < count - 1; i++)
		for (int j = i; j >= 0; j--)
			if (AS[j] > AS[j + 1])
			{
				// �������� ������� ������
				s = AS[j];
				AS[j] = AS[j + 1];
				AS[j + 1] = s;
			}

	// 8. ����� ���������������� ������� AS
	cout << "\nSorted array AS:\n";
	for (int i = 0; i < count; i++)
		cout << "AS[" << i << "] = " << AS[i] << endl;

	// 9. ������������ ������, ���������� ��� ������� AS
	delete[] AS;
}
