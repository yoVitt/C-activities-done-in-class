/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 6 de junho de 2024, 07:34
 */

#include <cstdlib>
#include <cstring>
#include <iostream>


using namespace std;


int main(int argc, char** argv) {

    char palavra1[20], palavra2[20];
    cout << "Digite a palvra 1: " << endl;
    cin >> palavra1;
    cout << "Digite a palvra 2: " << endl;
    cin >> palavra2;
    cout << "Palavra 1 = " << palavra1 << endl;
    cout << "Palavra 2 = " << palavra2 << endl;
    cout << "Agora a Palavra 2 = " << strcpy(palavra2, palavra1) << endl;
            
            
    return 0;
}

