//#include <iostream>
//#include <string>
//#include <cstring>
//#include <cmath>
//#include<math.h>
//#include <cctype>
//#include <conio.h>
//#include<cstdio>
//#include<cstdlib>
//#include<ctime>
//#include <random>
//#include<utility>
//#include<vector>
//#include<Windows.h>
//using namespace std;
//template<typename T> T solt(T a, T b) {
  /*int c = 0;
  double v = 0;
  cout << "��� �����������: 1 ����������������, 2 �����������" << endl;
  cout << "�������� ��� �����������" << endl;
  cin >> c;
  switch (c) {
  case 1:
    v = a + b;
    cout << "�������� ������������ ������������� �����" << " " << v <<""<<"��"<< endl;
    return v;
  case 2:
    v = (a * b) /( a + b);
    cout << "�������� ����������������� ������������� �����" << " " << v <<""<<"��"<< endl;
    return v;
  default:
    if (c == 3 && c > 3)return -1;
    cout << "������ ���������� ���" << endl;
  }
}*/

//int fun( int n)
//{
//	if (n == 1) return 1;
//	return n * fun(n - 1);
//}

//template<typename T> T dohod(T s, T p, T m, T v)
//{
//	double sum = (s * p * m / v) / 100;
//	cout << "����� �� ������ ����������" << " " << sum << endl;
//	return sum;
//}

//void glas(char &a)
//{
//	char n[11] = {'�','�','�','�','�','�','�','�','�','�','\0'};
//	for (int i = 0; i < 10; i++) {
//		if (a == n[i])
//		{
//			cout<<"1";	
//		}
//		else 
//		{	
//			cout<<"0";	
//		}
//	}
//	cout << endl;
//}

//string str(string str1)
//{
//	return str1;
//}

//double func(double a, double b, double c)
//{
//  short int D = 0;
//  short int s = 2;
//  short int x1 = 0;
//  short int x2 = 0;
//  short int x = 0;
//  int i = 0;
//  if (a == 0 && b==0 && c==0) {
//    std::cout << "�� ����� �� ���������� ��������" << endl;
//    std::cout << "Error!" << endl;
//    exit(0);
//  }
//  D = pow(b,s) - 4 * a * c;
//  std::cout << "D =" << " "<< D << endl;
//    if (D > 0) {
//      x1 = (- b + sqrt(D) / 2 * a);
//      x2 = (- b - sqrt(D) / 2 * a);
//      std::cout << "� ����������� ��������� ��� �����" << endl;
//      std::cout << "������ ������ ����� �1 =" << " " << x1 << endl;
//      std::cout << "������ ������ ����� �2 =" << " " << x2 << endl;
//      return x1, x2;
//    }
//    if (D == 0) {
//      x = (- b / 2 * a);
//      std::cout << "� ����������� ��������� ���� ������" << endl;
//      std::cout << "������ ����� � =" << " " << x << endl;
//      return x;
//    }
//    if (D < 0) {
//      std::cout << "� ����������� ��������� ��� ������" << endl;
//      return -1;
//    }   
//}

//float parallelepiped(float a, float b, float c)
//{
//  float s = 0;
//  float v = 0;
//  v = a * b * c;
//  cout << "����� �������������� �������������� =" << " " << v << endl;
//  cout << endl;
//  s = 2 * (a * b + b * c + a * c);
//  cout << "������� ������ ����������� �������������� =" << " " << s << endl;
//  cout << endl;
//  return v, s;
//}

//void num(char a) {
//  int count = 4;
//  while (count > 0) {
//    if (isdigit(a)) {
//      std::cout << "You entered number,�ongratulations" << endl;
//      break;
//    }
//    else {
//      std::cout << "Error!!!" << " " << "You have entered lette" << endl;
//      std::cout << "Try again,do you have any left" 
//        << " " << count << " " << "attempts" << endl;
//      cin >> a;
//      count--;
//    }
//  }
//  
// 
//}

//int usermap = 0;
//int compmap = 0;
//int first_card_user = 0;
//int first_card_comp = 0;
//int new_card_user = 0;
//int new_card_comp = 0;
//static void main_menu(string line)
//{
//  if (line == "yes")
//  {
//    std::cout << "Welcome to the game 21" << endl;
//    std::cout << "---------------//-------------------" << endl;
//  }
//  else
//  {
//    std::cout << "Goodbye" << endl;
//    exit(0);
//  }
//  std::cout << endl;
//}
//static void maps()
//{
//  int i = 0;
//  const int valet = 2;
//  const int dama = 3;
//  const int karol = 4;
//  const int tuz = 11;
//  int array_card[10] = { 5,6,7,8,9,10,valet,dama,karol,tuz };
//  std::cout << "playing cards:" << endl;
//  std::cout << endl;
//  for (; i < 10; i++) {
//    std::cout << array_card[i] << " ";
//  }
//  std::cout << endl;
//  std::cout << "Valet = " << " " << valet << endl;
//  std::cout << "Dama = " << " " << dama << endl;
//  std::cout << "Karol = " << " " << karol << endl;
//  std::cout << "Tuz = " << " " << tuz << endl;
//  std::cout << endl;
//}
//static void card_distribution()
//{
//  srand(static_cast<unsigned int>(time(NULL)));
//  string decision;
//  bool f = true;
//  std::cout << "The game begins" << endl;
//  std::cout << "He goes first user" << endl;
//  std::cout << "He walks second comp" << endl;
//  first_card_user = rand() % 10 + 2;
//  first_card_comp = rand() % 10 + 2;
//  usermap = first_card_comp;
//  compmap = first_card_comp;
//  while (f)
//  {
//    std::cout << "Would you like to get another card?" <<
//      " " << "yes / now" << " ";
//    std::cin >> decision;
//    std::cout << endl;
//    if (decision == "yes") {
//      new_card_user = rand() % 10 + 2;
//      usermap += new_card_user;
//      std::cout << "usermap =" << " " << usermap;
//      std::cout << endl;
//    }
//    else if (decision == "now") {
//      new_card_comp = rand() % 10 + 2;
//      compmap += new_card_comp;
//      std::cout << "-----------------::-------------" << endl;
//      std::cout << "compmap =" << " " << compmap;
//      std::cout << endl;
//    }
//    else {
//      f = false;
//      break;
//    }
//  }
//}
//static void determining_the_winners()
//{
//  int card = 21;
//  if (usermap > card && compmap > card) {
//    std::cout << "Game over" << endl;
//    exit(0);
//  }
//  if (usermap > compmap) {
//    std::cout << "User =" << " " << usermap << endl;
//    std::cout << "Comp =" << " " << compmap << endl;
//    std::cout << "The User won" << " " << "Congratulate!" << endl;
//    exit(0);
//  }
//  else if (compmap > usermap) {
//    std::cout << "User =" << " " << usermap << endl;
//    std::cout << "Comp =" << " " << compmap << endl;
//    std::cout << "The Comp won" << " " << "Congratulate!" << endl;
//    exit(0);
//  }
//  else if (compmap == usermap) {
//    std::cout << "User =" << " " << usermap << endl;
//    std::cout << "Comp =" << " " << compmap << endl;
//    std::cout << "Congratulations, you don't have anyone" << endl;
//    exit(0);
//  }
//}

//int main() {
//  setlocale(LC_ALL, "RUS");
  /*double d = 0;
  double e = 0;
  cout << "������� �������� ������������� � ����" << endl;
  cin >> d;
  cin >> e;
  solt(d, e);*/

  /*int a = 0;
  cout << "������� ����� ���������� =" << " ";
  cin >> a;
  fun(a);
  cout << "��������� �����  " << a << " " << "�����" << " " << fun(a) << endl;*/

  /*float a = 0;
  float b = 0;
  float c = 0;
  float d = 0;
  cout << "������� �����" << " ";
  cin >> a;
  cout << "������� ���������� ������" << " ";
  cin >> b;
  cout << "������� ���� ������" << " ";
  cin >> c;
  cout << "������� ����� ���� � ����" << " ";
  cin >> d;
  dohod(a, b, c, d);*/

  /*char test = '�';
  glas(test);*/

  /*char a[] = "Hello Word";
  cout << a << endl;
  cout << endl;
  for (int i = 0; i < strlen(a); i++)
  {
    putchar(toupper(a[i]));
  }
  cout << endl;
  str(a);
  cout << endl;*/

  /*double f = 0;
  double b = 0;
  double c = 0;
  std::cout << "������� ������ ��������� =" << " ";
  std::cin >> f;
  std::cout << "������� ������ ��������� =" << " ";
  std::cin >> b;
  std::cout << "������� ������ ��������� =" << " ";
  std::cin >> c;
  func(f, b, c);*/

  /*float d = 0;
  float f = 0;
  float g = 0;
  cout << "������� �����" << " ";
  cin >> d;
  cout << endl;
  cout << "������� ������" << " ";
  cin >> f;
  cout << endl;
  cout << "������� ������" << " ";
  cin >> g;
  parallelepiped(d, f, g);*/

  /*char str[23]{};
  char str1[23]{};
  int a = 23;
  for (int i = 0; i < a; i++) {
    str[i] = 'A' + i;
    cout << str[i]<<" ";
  }
  cout <<endl;

  for (int x = 0; x < a; x++) {
    str1[x] = '�' + x;
    cout << str1[x] << " ";
  }*/

  /*char b = 0;
  std::cout << "Entered your number from 1 to 9" << endl;
  std::cin >> b;
  num(b);*/

  /*string flag;
  std::cout << "In game 21, the winner is the one who scores the most points." << endl;
  std::cout << "If a player has more than 21 points, he has lost" << endl;
  std::cout << "Start the game! (yes/no)" << " " << flag;
  std::cin >> flag;
  std::cout << endl;
  main_menu(flag);
  maps();
  card_distribution();
  determining_the_winners();*/



 /* system("pause");
  return 0;
}*/




