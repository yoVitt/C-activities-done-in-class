/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Aluno
 *
 * Created on 6 de junho de 2024, 07:29
 */

#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char palavra[20];
    
    cout << "Digite uma plavra: " << endl;
    cin >> palavra;
    cout << "A palavra tem " << strlen(palavra) << " letras." << endl;
    
    return 0;
}

