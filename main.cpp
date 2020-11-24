#include<iostream>
#include<string>
using namespace std;
class Graduate {
	string name;
	bool gender;
	double score;
	int id;
	const string university;
	int i;
	string research;
	string tutor;

public:
	Graduate(string _name, bool _gender, int _id, double _score, string _research, string _tutor) : university("ShanShi")
	{

		name = _name;
		gender = _gender;
		score = _score;
		research = _research;
		tutor = _tutor;
	}
	void graduate(string _name, bool _gender, int _id, double _score, string _research, string _tutor)
	{

		name = _name;
		gender = _gender;
		score = _score;
		research = _research;
		tutor = _tutor;
	}
	void GetXx() {
		cout << "输出学生基本信息" << endl;
		cout << "姓名：" << name << endl;
		cout << "研究领域：" << research << endl;
		cout << "指导老师：" << tutor << endl;
		cout << "成绩：" << score << endl;
		cout << "学校：" << university << endl;
	}
	void GetXxl()const {
		cout << "输出学生基本信息" << endl;
		cout << "姓名：" << name << endl;
		cout << "研究领域：" << research << endl;
		cout << "指导老师：" << tutor << endl;
		cout << "成绩：" << score << endl;
		cout << "学校：" << university << endl;
	}
	void Gender() {
		if (gender == 1)
			cout << "性别：男" << endl << endl;
		if (gender == 0)
			cout << "性别：女" << endl << endl;

	}
	void GetCj(Graduate* ab) {
		double Sum = 0;
		for (int i = 0; i < 3; i++) {
			Sum += ab[i].score;
		}
		double pingjun = Sum / 3;

		cout << "平均成绩：" << pingjun << endl;
	}
	Graduate();
	~Graduate() {
		cout << "析构函数" << endl;
	}

	friend void GetDj(Graduate* tr);
};
void GetDj(Graduate* tr) {
	for (int i = 0; i < 3; i++) {
		double t = tr[i].score;
		if (t >= 90)
			cout << "姓名：" << tr[i].name << endl << "成绩等级:" << "A" << endl;
		else if (t>79&&t<= 89)
			cout << "姓名：" << tr[i].name << endl << "成绩等级:" << "B" << endl;
		else if (t>69 &&t<= 79)
			cout << "姓名：" << tr[i].name << endl << "成绩等级:" << "C" << endl;
		else if ( t>60 &&t<= 69)
			cout << "姓名：" << tr[i].name << endl << "成绩等级:" << "D" << endl;
		else if (t <= 60)
			cout << "姓名：" << tr[i].name << endl << "成绩等级:" << "E" << endl;
	}
};


int main() {
	cout << "普通研究生对象" << endl;
	Graduate putong("小红", 1, 990101, 86, "物理学领域", "张老师");
	putong.GetXx();
	putong.Gender();
	cout << "常研究生对象" << endl;
	Graduate chang("小黄", 0, 990102, 78, "化学领域", "王老师");
	chang.GetXxl();
	chang.Gender();
	cout << "对象数组调用" << endl;
	Graduate ab[3]{
		Graduate("小绿",1,990103,98,"生物学领域","刘老师"),
		Graduate("小蓝",0,990104,92,"大数据领域","李老师"),
		Graduate("小紫",1,2990105,87,"密码学领域","赵老师")
	};
	for (int i = 0; i < 3; i++)
		ab[i].GetXx(),
		ab[i].Gender();
	ab[3].GetCj(ab);
	GetDj(ab);
	return 0;




}