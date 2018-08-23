#include <iostream>
#include <map>
#include <string>
using namespace std;

map <string, int> phone;

int select(){
    int sel;
    cout << "Âåäèòå öèôðó äëÿ âûáîðà ôóíêöèè:" << endl;
    cout << "1 - Âûâåñòè ñïèñîê àáîíåíòîâ" << endl;
    cout << "2 - Äîáàâèòü àáîíåíòà" << endl;
    cout << "3 - Óäàëèòü àáîíåíòà" << endl;
    cout << "4 - Ïîèñê àáîíåíòà" << endl;
    cout << "0 - Âûõîä" << endl;
    cin >> sel;
    if (sel==1||sel==2||sel==3||sel==4||sel==0) return sel;
    else{
        cout << "Íåäîïóñòèìûé ñèìâîë" << endl;
        select();
    }
}
void output(){
    cout << "Âàø òåëåôîííûé ñïðàâî÷íèê:" << endl;
    cout << "ÔÈÎ  Òåëåôîí" << endl;
    for(auto elem: phone){
        cout << elem.first << " " << elem.second << endl;
    }
}

void ADD(){
    string name;
    int number;
    cout << "Ââåäèòå ÔÈÎ è íîìåð òåëåôîíà" << endl;
    cin >> name >> number;
    phone[name] = number;
}

void sear(){
    string name;
    cin >> name;
    cout << "Ââåäèòå ÔÈÎ äëÿ ïîèñêà" << endl;
    if(phone.find(name) != phone.end()) cout << "Íàøëîñü" <<   endl;
    else cout << "Ýëåìåíò íå íàéäåí" << endl;
}

void delet(){
    string name;
    cout <<"Ââåäèòå ÔÈÎ äëÿ óäàëåíèÿ"<< endl;
    cin >> name;
    phone.erase(name);///ñòèðàåì åãî â map
}

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Ïðèâåò" << endl;
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
    cout << "Äî ñâèäàíèÿ!" << endl;
    return 0;
}

