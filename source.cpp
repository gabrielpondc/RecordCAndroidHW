//20161795 GUJIAKAI
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
struct Record {
	int Id;
	int midterm;
	int demo;
	int sum;
};
int main()
{
	int i;
	struct Record table[50],*pointer = 0;
	srand((unsigned)time(NULL));//Reset Random
	cout << "Student ID\t\tMid-Exam\t\tDemo\t\tSum" << endl;
	for (i = 0; i < 50; i++){
		    pointer = (table + i);
			pointer->Id = (i + 1);
			pointer->midterm = (rand() % 100) + 1;
			pointer->demo = (rand() % 100) + 1;
			pointer->sum = pointer->midterm + pointer->demo;
			cout << "    "<<pointer->Id <<"\t\t\t" << "   " <<pointer->midterm <<"\t\t\t" << " " <<pointer->demo <<"\t\t" <<pointer->sum <<"\t" << endl;
	}
	return 0;
}