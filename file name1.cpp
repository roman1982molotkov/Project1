#include <iostream>
#include <vector>
#include <random>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;


float parallelepiped(float a, float b, float c)
{
  float s = 0;
  float v = 0;
  v = a * b * c;
  cout << "����� �������������� �������������� =" << " " << v << endl;
  s = 2*(a * b + b * c + a * c);
  cout << "������� ������ ����������� �������������� =" << " " << s << endl;
  return v, s;
}

int main() {
  setlocale(LC_ALL, "RUS");
  float d = 0;
  float f = 0;
  float g = 0;
  cout << "������� �����" << " ";
  cin >> d;
  cout << "������� ������" << " ";
  cin >> f;
  cout << "������� ������" << " ";
  cin >> g;
  parallelepiped(d, f, g);








  system("pause");
  return 0;
}