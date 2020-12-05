#include <iostream>
#include "TV.h"
#include "Remote.h"
#include "Menu.h"
using namespace std;
int main() {
	TV t1 (false, 3, 120, 100, 3);
	TV t2 (false, 3, 110, 22, 80);
	TV* tv1=&t1;
	tv1->print();
	Remote pult;
	pult.setNewTV(tv1);
	pult.goToChannel(100);
	tv1->print();
	//t1.print();
	//Remote pult;
	//pult.setNewTV(t1);
	menu(pult,tv1);
	return 0;
}