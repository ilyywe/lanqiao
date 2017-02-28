算法训练 P1102  
　定义一个学生结构体类型student，包括4个字段，姓名、性别、年龄和成绩。然后在主函数中定义一个结构体数组（长度不超过1000），并输入每个元素的值，程序使用冒泡排序法将学生按照成绩从小到大的顺序排序，然后输出排序的结果。
　　输入格式：第一行是一个整数N（N<1000），表示元素个数；接下来N行每行描述一个元素，姓名、性别都是长度不超过20的字符串，年龄和成绩都是整型。
　　输出格式：按成绩从小到大输出所有元素，若多个学生成绩相同则成绩相同的同学之间保留原来的输入顺序。
输入：
　　3
　　Alice female 18 98
　　Bob male 19 90
　　Miller male 17 92

输出：
　　Bob male 19 90
　　Miller male 17 92
　　Alice female 18 98

#include <iostream>
using namespace std;
struct student {
	string name;
	string sex;
	int age;
	int score;
};

int main() {
	int n;
	cin >> n;
	struct student *a = new struct student [n];
	for(int i = 0; i < n; i++) {
		cin >> a[i].name >> a[i].sex >> a[i].age >> a[i].score;
	}
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - 1 - i; j++) {
			if(a[j].score > a[j+1].score) {
				swap(a[j], a[j+1]);
			}
		}
	}
	for(int i = 0; i < n; i++) {
		cout << a[i].name << " " << a[i].sex << " " << a[i].age << " " << a[i].score << endl;
	}
	return 0;
}