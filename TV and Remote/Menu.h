#pragma once
// Я мiг зробити з conio.h, але не бачу сенсу тратити часу, там все по шаблону є
#include "Remote.h"
#include <iostream>
using namespace std;
void printMenu();
void menu(Remote & remote, TV * tv); // можна робити сетерами, або в TV* tv в public, але через friend буду робити двома параметрами