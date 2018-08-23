#include <iostream>
#include <map>
#include <string>�
using namespace std;

map <string, int> phone;

int select(){
    int sel;
    cout << "������ ����� ��� ������ �������:" << endl;
    cout << "1 - ������� ������ ���������" << endl;
    cout << "2 - �������� ��������" << endl;
    cout << "3 - ������� ��������" << endl;
    cout << "4 - ����� ��������" << endl;
    cout << "0 - �����" << endl;
    cin >> sel;
    if (sel==1||sel==2||sel==3||sel==4||sel==0) return sel;
    else{
        cout << "������������ ������" << endl;
        select();
    }
}
void output(){
    cout << "��� ���������� ����������:" << endl;
    cout << "���  �������" << endl;
    for(auto elem: phone){
        cout << elem.first << " " << elem.second << endl;
    }
}

void ADD(){
    string name;
    int number;
    cout << "������� ��� � ����� ��������" << endl;
    cin >> name >> number;
    phone[name] = number;
}

void sear(){
    string name;
    cin >> name;
    cout << "������� ��� ��� ������" << endl;
    if(phone.find(name) != phone.end()) cout << "�������" <<   endl;
    else cout << "������� �� ������" << endl;
}

void delet(){
    string name;
    cout <<"������� ��� ��� ��������"<< endl;
    cin >> name;
    phone.erase(name);///������� ��� � map
}

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "������" << endl;
    int ex=1;//exit in cycle
    while(ex!=0){
            switch(select()){
        case 1://output
            output();
            break;
        case 2://ADD
            ADD();
            break;
        case 3://delete
            delet();
            break;
        case 4://search
            sear();
            break;
        case 0:
            ex=0;
        }
    }
    cout << "�� ��������!" << endl;
    return 0;
}

