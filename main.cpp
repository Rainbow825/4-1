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
		cout << "���ѧ��������Ϣ" << endl;
		cout << "������" << name << endl;
		cout << "�о�����" << research << endl;
		cout << "ָ����ʦ��" << tutor << endl;
		cout << "�ɼ���" << score << endl;
		cout << "ѧУ��" << university << endl;
	}
	void GetXxl()const {
		cout << "���ѧ��������Ϣ" << endl;
		cout << "������" << name << endl;
		cout << "�о�����" << research << endl;
		cout << "ָ����ʦ��" << tutor << endl;
		cout << "�ɼ���" << score << endl;
		cout << "ѧУ��" << university << endl;
	}
	void Gender() {
		if (gender == 1)
			cout << "�Ա���" << endl << endl;
		if (gender == 0)
			cout << "�Ա�Ů" << endl << endl;

	}
	void GetCj(Graduate* ab) {
		double Sum = 0;
		for (int i = 0; i < 3; i++) {
			Sum += ab[i].score;
		}
		double pingjun = Sum / 3;

		cout << "ƽ���ɼ���" << pingjun << endl;
	}
	Graduate();
	~Graduate() {
		cout << "��������" << endl;
	}

	friend void GetDj(Graduate* tr);
};
void GetDj(Graduate* tr) {
	for (int i = 0; i < 3; i++) {
		double t = tr[i].score;
		if (t >= 90)
			cout << "������" << tr[i].name << endl << "�ɼ��ȼ�:" << "A" << endl;
		else if (t>79&&t<= 89)
			cout << "������" << tr[i].name << endl << "�ɼ��ȼ�:" << "B" << endl;
		else if (t>69 &&t<= 79)
			cout << "������" << tr[i].name << endl << "�ɼ��ȼ�:" << "C" << endl;
		else if ( t>60 &&t<= 69)
			cout << "������" << tr[i].name << endl << "�ɼ��ȼ�:" << "D" << endl;
		else if (t <= 60)
			cout << "������" << tr[i].name << endl << "�ɼ��ȼ�:" << "E" << endl;
	}
};


int main() {
	cout << "��ͨ�о�������" << endl;
	Graduate putong("С��", 1, 990101, 86, "����ѧ����", "����ʦ");
	putong.GetXx();
	putong.Gender();
	cout << "���о�������" << endl;
	Graduate chang("С��", 0, 990102, 78, "��ѧ����", "����ʦ");
	chang.GetXxl();
	chang.Gender();
	cout << "�����������" << endl;
	Graduate ab[3]{
		Graduate("С��",1,990103,98,"����ѧ����","����ʦ"),
		Graduate("С��",0,990104,92,"����������","����ʦ"),
		Graduate("С��",1,2990105,87,"����ѧ����","����ʦ")
	};
	for (int i = 0; i < 3; i++)
		ab[i].GetXx(),
		ab[i].Gender();
	ab[3].GetCj(ab);
	GetDj(ab);
	return 0;




}