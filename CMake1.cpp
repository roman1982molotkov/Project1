//#include<iostream>
//#include<vector>
//#include<string>
//#include <map>
//#include<cmath>
//#include<math.h>
//#include<cstring>
//#include<cstdlib>
//#include<cstdio>
//#include <set>
//#include<ctime>
//using namespace std;
//
//
//
//
//
//struct Student {
//  string name = "";
//  int grup = 0;
//  int performance = 0;
//  double average_ball = 0;
//  double sum_srednee = 0;
//};
//
//static void sum(Student str) {
//  cout << "Name student:" << " " << str.name << endl;
//  cout << "Grup:" << " " << str.grup << endl;
//  cout << "Sum_srednee:" << " " << str.sum_srednee << endl;
//}
//
//
//int main() {
//  setlocale(LC_ALL, "rus");
//
//
//  Student student;
//  Student* p = nullptr;
//  p = &student;
//  const int n = 5;
//  int count = 0;
//  std::cout << "---------||------------" << endl;
//  std::cout << "Enter name student:" << " ";
//  cin >> p->name;
//  std::cout << "Enter number grup:" << " ";
//  cin >> p->grup;
//  if (p->grup == 0) {
//    exit(0);
//  }
//  std::cout << "Enter grades:" << endl;
//  std::cout << endl;
//  for (int i = 0; i < n; i++) {
//    std::cout << "Student assessment:";
//    p->performance = 2 + rand() % 4;
//    std::cout << p->performance << endl;
//    std::cout << endl;
//    p->average_ball += p->performance;
//    p->sum_srednee = p->average_ball / 5;
//  }
//
//  if (p->sum_srednee > 4) {
//    std::cout << "Students with an average ball above 4:" << endl;
//  }
//  else if (p->sum_srednee < 4 || p->sum_srednee == 4) {
//    std::cout << "Students with an average ball above 4 no" << endl;
//  }
//  sum(*p); count++;
//  std::cout << "------------------------" << endl;
//  std::cout << endl;
//
//  system("pause");
//  return 0;
//}