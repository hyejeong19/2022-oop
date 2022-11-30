#include "customer.hpp"
#include "cook.hpp"
#include "worker.hpp"
#include "server.hpp"
#include "owner.hpp"
#include "menu.hpp"

class Restaurant
{
    int table_num;
    string food_name[10];
    int food_cnt;
    int food_price[10];
    int food_cnt_price;
    bool isChecked;
public:
    static int food_total_price;
    Restaurant();
    void inputOrder(int num);
    void calculateOrder();
    void ShowTablenum();
    void ShowTablenum_list();
    void Table_payment(int t_num);
};

int Restaurant::food_total_price = 0;

Restaurant::Restaurant()
{
    isChecked = false;
    food_cnt_price = 0;
    food_total_price = 0;
}
void Restaurant::inputOrder(int num)
{
    cout << num << "손님 : " << "테이블번호 입력 : ";
    cin >> table_num;

    cout << "주문수 입력(10이하) : ";
    cin >> food_cnt;

    for (int i = 0; i < food_cnt; i++)
    {
        //system("cls");
        cout << "음식이름과 가격 입력 : ";
        cin >> food_name[i] >> food_price[i];
    }
    cout << endl;
}
void Restaurant::calculateOrder()
{
    for (int i = 0; i < food_cnt; i++)
        food_total_price += food_price[i];
}
void Restaurant::ShowTablenum()
{
    cout << "####### " << table_num << "번 테이블 #######" << endl;

    cout << "음식이름" << "\t" << "가격" << endl;
    for (int i = 0; i < food_cnt; i++)
    {
        cout << food_name[i] << "\t" << food_price[i] << endl;
    }
    cout << "총 합계 : " << food_total_price << endl;
}

void Restaurant::ShowTablenum_list()
{
    cout << "####### " << table_num << "번 테이블 #######" << endl;

    cout << "음식이름" << "\t" << "가격" << endl;
    for (int i = 0; i < food_cnt; i++)
    {
        cout << food_name[i] << "\t" << food_price[i] << endl;
    }   
    cout << "총 합계 : " << food_total_price << "\t" << "결제 : " << isChecked << endl;
}

void Restaurant::Table_payment(int t_num)
{
    char money;
    table_num = t_num;
    ShowTablenum_list();

    cout << "결제확인(Y/N) : ";
    cin >> money;
    if (money == 'Y' || money == 'y')
        isChecked = true;
    else
        return;

    ShowTablenum_list();
    system("PAUSE");
}




#include<iostream>
using namespace std;

int main() {
    Cook a("cooker1", 30);
    Customer b(1);
    server c("server1", 23);
    Owner d("owner1", 53);

    Menu menu[4] = {{ 1,"정식",5000 },{ 2,"특식",7000 },{ 3,"콜라",2000 },{ 4,"사이다",2000 }};
    Menu*menusu;
    menusu = menu;

    int i, selectMenu, num, tablenum, list_su;

    Restaurant current[100];

    i = 0;

    while (1)
    {
        b.order_food();

        system("cls");
        menusu->menu_list(); //메뉴보기
        menusu->print_order();
        cout << "번호 입력 : ";
        cin >> selectMenu;

        if (selectMenu == 1)
        {
            i++;
            while (1)
            {

                switch (selectMenu) {   
                case 1:
                    system("cls");
                    menusu->menu_list();
                    current[i].inputOrder(i);
                    current[i].calculateOrder();
                    break;
                case 2:
                    current[i].ShowTablenum();
                    break;
                }
               if (selectMenu == 3)
               {
                   cout << "주문이 완료";
                   break;
               }

               cout << "주문확인(2번)/주문환료(3번) 숫자입력 : ";
               cin >> selectMenu;
            }
        }
        else if (selectMenu == 5)
        {
            cout << "주문자 번호 : ";
            cin >> list_su;
            cout << "테이블 번호 : ";
            cin >> tablenum;
            current[list_su].Table_payment(tablenum);
        }
        else if (selectMenu == 6)
            break;
        else
            cout << "잘못입력하였습니다.!!!!!" << endl;
    }

    system("cls");
    cout << "일일 주문리스트 보기\n";
    for (int j = 1; j <= i; j++)
    {
        current[j].ShowTablenum_list();
        cout << "\n\n";
    }
    c.order_cook();
    a.cook();
    a.give_food();
    b.pay_food();
    c.give_money();
    d.pay_salary();
    a.receive_salay();
    c.receive_salay();

    cout << "오늘 주인장의 잔고" << Owner::money + Restaurant::food_total_price << endl;

    return 0;
}