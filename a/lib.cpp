#include <iostream>
#include "lib.h"

using namespace std;


String::String(int L)
{
	line = new char[L];
	len = 0;
	line[0] = '\0';
}
String::String(const char* s)
{
	line = new char[strlen(s) + 1];
	for (len = 0; s[len] != '\0'; line[len] = s[len], len++);
	line[len] = '\0';
}

String::String(const String& s)
{
	line = new char[s.len + 1];
	for (len = 0; len <= s.len; line[len] = s.line[len], len++);
	len--;
}


void String::Fill(const char* s)
{
	for (len = 0; s[len] != '\0'; len++)
		line[len] = s[len];
	line[len] = '\0';
}


//char& String::Index(int i)
//{
//	if (i < 0 || i >= len)
//	{
//		printf("\n index za predelami");
//		exit(0);
//	}
//	return line[i];
//}
char& String:: operator[](int i)
{
	if (i < 0 || i >= len)
	{
		printf("\n index za predelami");
		exit(0);
	}
	return line[i];
}


//String& String::Plus(String& s2)
//{
//	len += s2.len;
//	char* t = new char[len + 1];
//	strcpy_s(t, len + 1, line);
//	strcat_s(t, len + 1, s2.line);
//	delete[] line;
//	line = t;
//	return *this;
//}
//
String& String::operator+=(String& s2)
{
	len += s2.len;
	char* t = new char[len + 1];
	strcpy_s(t, len + 1, line);
	strcat_s(t, len + 1, s2.line);
	delete[] line;
	line = t;
	return *this;
}


//int String::EqStr(String& s)
//{
//	if (strcmp(line, s.line))
//		return 0;
//	return 1;
//}
int String::operator ==(String& s)
{
	if (strcmp(line, s.line))
		return 0;
	return 1;
}

String String:: operator ~()
{
	int i;
	char t;
	for (i = 0; i < len / 2; i++)
	{
		t = line[i];
		line[i] = line[len - i - 1];
		line[len - i - 1] = t;
	}
	return *this;
}


String& String:: operator = (const String& s)
{
	if (this != &s)
	{
		delete[] line;
		line = new char[(len = s.len) + 1];
		strcpy_s(line, len + 1, s.line);
	}
	return *this;
}


