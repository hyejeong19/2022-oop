#ifndef MENU_H
#define MENU_H
#include <iostream>

using namespace std;


class Menu{
    public:
        int food_num =0;
        string food_name = "";
        int price = 0;

        void menu_list();
        void print_order();
};
void Menu::menu_list(){

    cout << "\n######### 메뉴 리스트 #########" << endl;

    cout << "# 번호" << "\t" << "이름" << "\t" << "가격 #" << endl;

    for (int i = 0; i < 4; i++)

        cout << "# " << this[i].food_num << "\t" << this[i].food_name << "\t" << this[i].price << " #" << endl;

    cout << "###############################\n" << endl;

}

 

void Menu::print_order(){

    cout << "**** 패밀리 레스토랑 ****" << endl;

    cout << "\t1.주문입력" << endl;

    cout << "\t5.주문결제" << endl;

    cout << "\t6.주문종료" << endl;

    cout << "******************************" << endl;

}

#endif