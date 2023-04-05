#include "plugin.h"

int width, height;

const char* Plugin::getName() {
	return "Keystrokes";
}

void Plugin::onLoad(int param_width, int param_height) {
	width = param_width;
	height = param_height;
}

void Plugin::onUpdate() {
	// A
	addText(1, (char*)"A", 27, 45, 0, 0, 0, 255);
	if (GetAsyncKeyState(0x41)) {
		addRect(1, 20, 40, 20, 20, 77, 93, 172, 255);
		removeRect(0);
	}
	else {
		addRect(0, 20, 40, 20, 20, 255, 255, 255, 255);
		removeRect(1);
	}

	// S
	addText(2, (char*)"S", 47, 45, 0, 0, 0, 255);
	if (GetAsyncKeyState(0x53)) {
		addRect(2, 40, 40, 20, 20, 77, 93, 172, 255);
		removeRect(3);
	}
	else {
		addRect(3, 40, 40, 20, 20, 255, 255, 255, 255);
		removeRect(2);
	}

	// D
	addText(3, (char*)"D", 67, 45, 0, 0, 0, 255);
	if (GetAsyncKeyState(0x44)) {
		addRect(4, 60, 40, 20, 20, 77, 93, 172, 255); // Highlighted triangle
		removeRect(5);
	}
	else {
		addRect(5, 60, 40, 20, 20, 255, 255, 255, 255); // White triangle
		removeRect(4);
	}

	// W
	addText(4, (char*)"W", 45, 24, 0, 0, 0, 255);
	if (GetAsyncKeyState(0x57)) {
		addRect(6, 40, 20, 20, 20, 77, 93, 172, 255); // Highlighted triangle
		removeRect(7);
	}
	else {
		addRect(7, 40, 20, 20, 20, 255, 255, 255, 255); // White triangle
		removeRect(6);
	}

	// Space
	addText(5, (char*)"Space", 35, 64, 0, 0, 0, 255);
	if (GetAsyncKeyState(VK_SPACE)) {
		addRect(8, 20, 61, 60, 20, 77, 93, 172, 255); // Highlighted triangle
		removeRect(9);
	}
	else {
		addRect(9, 20, 61, 60, 20, 255, 255, 255, 255); // White triangle
		removeRect(8);
	}
}