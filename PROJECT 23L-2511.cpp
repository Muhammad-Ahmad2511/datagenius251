#include<iostream>
#include"help.h"
#include<cstring>
#include<fstream>
using namespace std;
bool mystrcmp(char s1[], char s2[], int size)
{

	for (int i = 0; i < size; i++)
	{
		if (s1[i] != s2[i])
		{
			return false;
		}
	}
	return true;
}
void drawcircle(const char str[]) {
	if (strcmp(str, "circle") == 0)
	{
		cout << "valid";
		//gotoxy(0, 10);
		//myEllipse(350, 350, 50 + 50, 150, 255, 122, 123, 2);
		myEllipse(350, 490, 670, 100, 0, 255, 0, 2);
		myLine(502, 212, 530, 240, 255, 2);
		myLine(502, 212, 474, 240, 255, 2);
		Sleep(500);
	}
	else {
		cout << "invalid";
	}
}
void myConsole()
{
	myRectangle(100, 100, 950, 600, 255, 255, 255);
}

void isvalidfd(char command2[], int& value)
{
	char str[3] = "fd";
	if (mystrcmp(command2, str, 2))
	{
		int i = 2;

		while (command2[i] == ' ')
		{
			i++;
		}

		while (command2[i] >= '0' && command2[i] <= '9')
		{
			i++;
		}
		if (command2[i] == '\0')
		{
			cout << "Valid command: " << endl;

			myLine(608, 348, 629, 365, 255, 2);
			myLine(608, 348, 588, 365, 255, 2);
			myLine(608, 348, 611, 379 + value, 255, 2);
		}
		else cout << "invalid";
	}
	else
	{
		cout << "invalid command";
	}

}
void isvalidforward(char command9[], int& value)
{
	char str5[8] = "forward";
	if (mystrcmp(command9, str5, 7))
	{
		int i = 7;

		while (command9[i] == ' ')
		{
			i++;
		}


		while (command9[i] >= '0' && command9[i] <= '9')
		{
			i++;
		}

		if (command9[i] == '\0')
		{
			cout << "Valid command: " << endl;

			myLine(610, 350, 630, 365, 255, 2);
			myLine(610, 350, 590, 365, 255, 2);
			myLine(610, 350, 610, 365 + value, 255, 2);
		}
	}
	else
	{
		cout << "Invalid command" << endl;
	}
}
void isvalidbackward(char command4[], int& value)
{
	char str7[10] = "backward";
	if (mystrcmp(command4, str7, 8))
	{
		int i = 8;

		while (command4[i] == ' ')
		{
			i++;
		}


		while (command4[i] >= '0' && command4[i] <= '9')
		{
			i++;
		}




		if (command4[i] == '\0')
		{
			cout << "Valid command: " << endl;

			myLine(563 + 47, 381 - 30, 718 - 85, 290 + 22, 255, 2);
			myLine(610, 353, 590, 310, 255, 2);
			myLine(610, 350, 610, 300 - value, 255, 2);
		}
	}
	else {
		cout << "Invalid command" << endl;
	}
}

void isvalidbk(char command2[], int& value)
{
	char str2[3] = "bk";
	if (mystrcmp(command2, str2, 2))
	{
		int i = 2;

		while (command2[i] == ' ')
		{
			i++;
		}

		while (command2[i] >= '0' && command2[i] <= '9')
		{
			i++;
		}
		if (command2[i] == '\0')
		{
			cout << "Valid command: " << endl;

			myLine(563 + 47, 381 - 30, 718 - 85, 290 + 22, 255, 2);
			myLine(610, 353, 590, 310, 255, 2);
			myLine(610, 350, 610, 300 - value, 255, 2);
		}
		else cout << "invalid";
	}


}
void rightangle(char command2[], int ang)
{
	char str[6] = "right";

	if (mystrcmp(command2, str, 4))
	{
		int i = 5;

		while (command2[i] == ' ')
		{
			i++;
		}

		while (command2[i] >= '0' && command2[i] <= '9')
		{
			i++;
		}

		if (!isalpha(command2[i]) && (ang % 30 == 0))
		{
			myLine(802, 212, 844, 212, 255, 2);
			myLine(844, 212, 835, 252, 255, 2);
			myLine(585, 362, 844, 213, 255, 2);
		}
		else if (!isalpha(command2[i]) && (ang % 45 == 0))
		{

			myLine(761, 183, 796, 167, 255, 2);
			myLine(796, 167, 805, 199, 255, 2);
			myLine(625, 389, 796, 167, 255, 2);
		}
		else
		{
			cout << "Invalid command format. Use 'right45' or 'right 45' with angles multiple of 30 or 45." << endl;
		}
	}
	else
	{
		cout << "Invalid command." << endl;
	}
}

void rtangle(char command3[], int angl)
{
	char str[3] = "rt";

	if (mystrcmp(command3, str, 2))
	{
		int i = 2;

		while (command3[i] == ' ')
		{
			i++;
		}

		while (command3[i] >= '0' && command3[i] <= '9')
		{
			i++;
		}

		if (!isalpha(command3[i]) && (angl % 30 == 0))
		{
			myLine(802, 212, 844, 212, 255, 2);
			myLine(844, 212, 835, 252, 255, 2);
			myLine(585, 362, 844, 213, 255, 2);
		}
		else if (!isalpha(command3[i]) && (angl % 45 == 0))
		{

			myLine(761, 183, 796, 167, 255, 2);
			myLine(796, 167, 805, 199, 255, 2);
			myLine(625, 389, 796, 167, 255, 2);
		}
		else
		{
			cout << "Invalid command format. Use 'rt45' or 'rt 45' with angles multiple of 30 or 45." << endl;
		}
	}
	else
	{
		cout << "Invalid command." << endl;
	}
}



void leftangle(char command[], int ang)
{
	char str[5] = "left";

	if (mystrcmp(command, str, 4))
	{
		int i = 4;

		while (command[i] == ' ')
		{
			i++;
		}
		while (command[i] >= '0' && command[i] <= '9')
		{
			i++;
		}
		if (!isalpha(command[i]) && (ang % 30 == 0))
		{
			gotoxy(1, 28);
			myLine(628, 258, 626 + 10, 285, 255, 2);
			myLine(628, 258, 669 - 10, 261 - 5, 255, 2);
			myLine(784, 344, 628, 258, 255, 2);
		}
		else if (!isalpha(command[i]) && (ang % 45 == 0))
		{
			myLine(718, 235, 717, 254, 255, 2);
			myLine(718, 235, 740, 240, 255, 2);
			myLine(784, 344, 718, 235, 255, 2);
		}
		else
		{
			cout << "Invalid command format. Use 'left45' or 'left 45' with angles multiple of 30 or 45." << endl;
		}
	}
	else
	{
		cout << "Invalid command." << endl;
	}
}
void ltangle(char command1[], int angl)
{
	char str[3] = "lt";

	if (mystrcmp(command1, str, 2))
	{
		int i = 2;

		while (command1[i] == ' ')
		{
			i++;
		}

		while (command1[i] >= '0' && command1[i] <= '9')
		{
			i++;
		}

		if (!isalpha(command1[i]) && (angl % 30 == 0))
		{
			gotoxy(1, 28);
			myLine(628, 258, 626 + 10, 285, 255, 2);
			myLine(628, 258, 669 - 10, 261 - 5, 255, 2);
			myLine(784, 344, 628, 258, 255, 2);
		}
		else if (!isalpha(command1[i]) && (angl % 45 == 0))
		{
			myLine(718, 235, 717, 254, 255, 2);
			myLine(718, 235, 740, 240, 255, 2);
			myLine(784, 344, 718, 235, 255, 2);
		}
		else
		{
			cout << "Invalid command format. Use 'lt45' or 'lt 45' with angles multiple of 30 or 45." << endl;
		}
	}
	else
	{
		cout << "Invalid command." << endl;
	}
}

void pendown(char command4[])
{
	char str9[5] = "pd";
	char str10[8] = "pendown";
	if (mystrcmp(command4, str9, 2) || mystrcmp(command4, str10, 7))
	{
		myLine(502, 212, 530, 200, 255, 2);
		myLine(502, 212, 474, 200, 255, 2);
	}
	else cout << "invalid";
}
void penup(char command5[])
{
	char str11[5] = "pu";
	char str12[10] = "penup";
	if (mystrcmp(command5, str11, 2) || mystrcmp(command5, str12, 5))
	{
		myLine(502, 212, 530, 240, 255, 2);
		myLine(502, 212, 474, 240, 255, 2);
	}
	else
		cout << "invalid";
}

void colorNameToRGB(const std::string& colorName, int& R, int& G, int& B) {
	if (colorName == "black") {
		R = G = B = 0;
	}
	else if (colorName == "red") {
		R = 255;
		G = B = 0;
	}
	else if (colorName == "green") {
		G = 255;
		R = B = 0;
	}
	else if (colorName == "blue") {
		B = 255;
		R = G = 0;
	}
	else if (colorName == "yellow") {
		R = G = 255;
		B = 0;
	}
	else if (colorName == "orange") {
		R = 255;
		G = 165;
		B = 0;
	}
	else if (colorName == "purple") {
		R = 128;
		G = 0;
		B = 128;
	}
	else if (colorName == "cyan") {
		R = 0;
		G = 255;
		B = 255;
	}
	else if (colorName == "pink") {
		R = 255;
		G = 182;
		B = 193;
	}
	else if (colorName == "brown") {
		R = 165;
		G = 42;
		B = 42;
	}
	else {

		R = G = B = 0;
	}
}
void clear()
{
	myRectangle(0, 0, 1200, 1200, 0, 0, 0);

	myLine(610, 350, 630, 365, 255, 2);
	myLine(610, 350, 590, 365, 255, 2);

}

void repeat(int n, char rpcommands[])
{
	/*char s5[3] = "[";
	int i = 0;
	rpcommands[i] =="[";
	for (i = 1; i < n; i++)
	{

		rpcommands[i - 1] = "]";
	}*/
}
void myColoredLine(int x1, int y1, int x2, int y2, const std::string& colorName, int width = 2) {
	int R, G, B;
	colorNameToRGB(colorName, R, G, B);

	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	HPEN pen = CreatePen(PS_SOLID, width, RGB(R, G, B));
	SelectObject(device_context, pen);

	MoveToEx(device_context, x1, y1, NULL);
	LineTo(device_context, x2, y2);

	ReleaseDC(console_handle, device_context);
	DeleteObject(pen);
	//myColoredLine(50, 50, 200, 50, "red");
	//myColoredLine(10, 10, 100, 100, "black");   // Draw a black line
	//myColoredLine(50, 50, 200, 50, "red");       // Draw a red line
	//myColoredLine(20, 80, 120, 180, "green");    // Draw a green line
	//myColoredLine(150, 150, 300, 150, "blue");   // Draw a blue line
	//myColoredLine(200, 200, 400, 200, "yellow"); // Draw a yellow line
	//myColoredLine(250, 250, 450, 250, "orange"); // Draw an orange line
	//myColoredLine(300, 300, 500, 300, "purple"); // Draw a purple line
	//myColoredLine(350, 350, 550, 350, "cyan");   // Draw a cyan line
	//myColoredLine(400, 400, 600, 400, "pink");   // Draw a pink line
	//myColoredLine(450, 450, 650, 450, "brown");
}
//myColoredLine(502, 212, 530, 240, "purple", 2);
//myColoredLine(502, 212, 474, 240, "pink", 3);  //  colorful cursor comment out if need
void widthofcomm(char s3[], int width)
{
	char s4[10] = "circle";
	char s6[10] = "pu";
	if (mystrcmp(s3, s4, 5))
	{
		int width;
		cin >> width;
		myEllipse(350, 490, 670, 100, 0, 255, 0, width);
	}
	else if (mystrcmp(s3, s6, 2))
	{
		int width;
		myLine(502, 212, 530, 240, 255, 2);
		myLine(502, 212, 474, 240, 255, 2);
	}
}
const int commands = 100;
const int columns = 50;

char commandhistory[commands][columns];
int commandcount = 0;
void saveCommands(const char filename[]) {
	ofstream file("commands.txt");
	if (file.is_open()) {
		for (int i = 0; i < commandcount; ++i) {
			file << commandhistory[i] << endl;
		}
		cout << "Commands saved to file: " << "abc.txt" << endl;
	}

	else {
		cout << "Unable to open file for saving commands." << endl;
	}file.close();
}
int main()
{
	myColoredLine(50, 50, 200, 50, "purple");
	int x = 505;
	int y = 350;    
	myConsole();
	gotoxy(1, 28);
	char comm[50];
	cout << "Enter a command: ";
	bool exitprogram = true;
	
	while (exitprogram != false)
	{
	
		cin.getline(comm, 50);
		char com1[10] = "save";
		char com2[10] = "fd";
		char com3[10] = "forward";
		char com4[10] = "bk";
		char com5[10] = "backward";
		char com6[10] = "circle";
		char com7[10] = "rt";
		char com8[10] = "right";
		char com9[10] = "lt";
		char com10[10] = "left";
		char com11[10] = "pd";
		char com12[10] = "pendown";
		char com13[10] = "pu";
		char com14[10] = "penup";
		char com15[10] = "circlewid";
		char com16[10] = "puwid";
		char com17[10] = "cs";
		char com18[12] = "clearscreen";
		char exitcom[10] = "exit";
		ofstream outFile("commands.txt");
		//bool exitprogram = false;

		/*cout << "enter command to exit ";
		cin.getline(exitcom, 10);*/
		if (mystrcmp(comm, exitcom, 4) || mystrcmp(comm, com1, 4))
		{

			exitprogram = false;
			if (mystrcmp(comm, com1, 4))
			{
				saveCommands("commands.txt");
			}
		}


		else if (mystrcmp(comm, com1, 4)) {

			saveCommands("commands.txt");
		}
		else if (mystrcmp(comm, com2, 2) || mystrcmp(comm, com3, 7))
		{
			int value;
			cout << "Enter Forward Value: ";
			cin >> value;
			isvalidfd(comm, value);
		}
		else if (mystrcmp(comm, com4, 2) || mystrcmp(comm, com5, 8))
		{
			int values;
			cout << "Enter Backward Value: ";
			cin >> values;
			isvalidbk(comm, values);
		}
		else if (mystrcmp(comm, com6, 5))
		{
			drawcircle(comm);
		}
		else if (mystrcmp(comm, com7, 2) || mystrcmp(comm, com8, 5))
		{
			int angle;
			cout << "Enter Right Angle: ";
			cin >> angle;
			rtangle(comm, angle);
		}
		else if (mystrcmp(comm, com9, 2) || mystrcmp(comm, com10, 4))
		{
			int angles;
			cout << "Enter Left Angle: ";
			cin >> angles;
			ltangle(comm, angles);
		}
		else if (mystrcmp(comm, com11, 2) || mystrcmp(comm, com12, 7))
		{
			pendown(comm);
		}
		else if (mystrcmp(comm, com13, 2) || mystrcmp(comm, com14, 5))
		{
			penup(comm);
		}
		else if (mystrcmp(comm, com15, 8) || mystrcmp(comm, com16, 5))
		{
			int width;
			cin >> width;
			widthofcomm(comm, width);
		}
		else if (mystrcmp(comm, com17, 2) || mystrcmp(comm, com18, 10))
		{
			gotoxy(100, 29);

			clear();

		}
		else
		{
			cout << "Invalid command: " << comm << endl;
		}
	}

	/*cout << "Enter a command: ";
	cin >> comm;*/


	//cout << "exiting loop" << endl;
	system("cls");
	return 0;
}
