#pragma once
// � �i� ������� � conio.h, ��� �� ���� ����� ������� ����, ��� ��� �� ������� �
#include "Remote.h"
#include <iostream>
using namespace std;
void printMenu();
void menu(Remote & remote, TV * tv); // ����� ������ ��������, ��� � TV* tv � public, ��� ����� friend ���� ������ ����� �����������