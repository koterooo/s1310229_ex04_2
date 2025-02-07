#include <iostream>
#include <ctime>
using namespace std;

bool g_flag = false;
char g_name[16];

void rollDice(int x){
    int m_total = 0, m_dice, m_max = 0;
    for(int i=0; i<x; i++){
        m_dice = rand()%6 + 1;
        m_total += m_dice;
        if(m_dice > m_max) m_max = m_dice;
        cout << "Die " << i+1 << ": " << m_dice << endl; 
    }
    if(m_max != m_dice) g_flag = true;
    cout << "Total value: " << m_total << endl;
    cout << g_name << " ";
    if(g_flag){
        cout << "won!";
    } else {
        cout << "lose!";
    }
    cout << endl;
}

void greeting(){
    cout << "What is your name?" << endl << "> ";
    cin >> g_name;
    cout << "Hello, " << g_name << "!" << endl;
}

int main(){
    greeting();
    //task4で追加したあいさつを表示する処理
    cout << "Rolling dice..." << endl;
    srand(time(NULL));
    rollDice(2);
    //任意の回数サイコロを振る処理
    return 0;
}
