#include <iostream>
#include <map>
#include <string>ы
using namespace std;

map <string, int> phone;

int select(){
    int sel;
    cout << "Ведите цифру для выбора функции:" << endl;
    cout << "1 - Вывести список абонентов" << endl;
    cout << "2 - Добавить абонента" << endl;
    cout << "3 - Удалить абонента" << endl;
    cout << "4 - Поиск абонента" << endl;
    cout << "0 - Выход" << endl;
    cin >> sel;
    if (sel==1||sel==2||sel==3||sel==4||sel==0) return sel;
    else{
        cout << "Недопустимый символ" << endl;
        select();
    }
}
void output(){
    cout << "Ваш телефонный справочник:" << endl;
    cout << "ФИО  Телефон" << endl;
    for(auto elem: phone){
        cout << elem.first << " " << elem.second << endl;
    }
}

void ADD(){
    string name;
    int number;
    cout << "Введите ФИО и номер телефона" << endl;
    cin >> name >> number;
    phone[name] = number;
}

void sear(){
    string name;
    cin >> name;
    cout << "Введите ФИО для поиска" << endl;
    if(phone.find(name) != phone.end()) cout << "Нашлось" <<   endl;
    else cout << "Элемент не найден" << endl;
}

void delet(){
    string name;
    cout <<"Введите ФИО для удаления"<< endl;
    cin >> name;
    phone.erase(name);///стираем его в map
}

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Привет" << endl;
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
    cout << "До свидания!" << endl;
    return 0;
}

