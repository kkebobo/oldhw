#include <iostream>
using namespace std;


// 1 


//int main()
//{
//	int x1, x2, y1, y2;
//
//	cout << "Enter coordinats first dot" << endl;
//	cin >> x1 >> y1;
//
//	cout << "Enter coordinats second dot" << endl;
//	cin >> x2 >> y2;
//
//	cout << ((x1 == x2) ? "Line parallel the y-axis" : (y1 == y2) ? "Line parallel the x-axis" : "Non parralel x-axis or y-axis") << endl;
//
//	system("pause");
//}

//4

//int main()
//{ 
//	int digit;
//
//
//	cout << "Enter digit(6 numbers):";
//	cin >> digit;
//
//
//	int right = 0;
//	int left = 0;
//
//
//	int tmp;
//
//	tmp = digit % 10;
//
//	right += tmp;
//
//	digit /= 10;
//
//	tmp = digit % 10;
//
//	right += tmp;
//
//	digit /= 10;
//
//	tmp = digit % 10;
//
//	right += tmp;
//
//	digit /= 10;
//
//
//	tmp = digit % 10;
//
//	left += tmp;
//
//	digit /= 10;
//
//	tmp = digit % 10;
//
//	left += tmp;
//
//	digit /= 10;
//
//	tmp = digit % 10;
//
//	left += tmp;
//
//	cout << ((left == right) ? "You are lucky" : "You aren't lucky") << endl;
//
//	system("pause");
//}


//5

//int main()
//{
//
//	int h;
//
//
//	cout << "Enter hours pls" << endl;
//	cin >> h;
//
//
//	if (h >= 5 && h <= 11)
//		cout << "Good Morning" << endl;
//		else 
//			if (h >= 12 && h <= 16)
//			cout << "Good Afternoon" << endl;
//
//		else
//			if (h >= 17 && h <= 20)
//			cout << "Good Evening" << endl;
//
//		else
//			if (h >= 21 && h <= 4)
//			cout << "Good Night" << endl;
//
//
//	system("pause");
//
//}

//2

int main()
{

double digit;


cout << "Enter digit:";
cin >> digit;


cout << ((digit - (int)digit) == 0 ? "integer number" : "fractional number") << endl;

system("pause");
}