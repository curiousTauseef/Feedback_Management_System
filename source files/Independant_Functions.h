#pragma once
#ifndef INDEPENDATANT_FINCTIONS_H
#define INDEPENDATANT_FINCTIONS_H

#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <stdio.h>
#include <filesystem>

using namespace std;

/////////////////////////////////////              CLear Console Screen           //////////////////////////////////
void CLEAR_SCREEN();
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////              Exit  /  Terminte           //////////////////////////////////
void EXIT();
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////  TITLE SCREEN   ///////////////////////////////////////////////
void TITLE();
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////   MAIN MENU 0R EXIT   /////////////////////////////////////////////
int MAIN_MENU_OR_EXIT(int choice);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif /* INDEPENDATANT_FINCTIONS_H */