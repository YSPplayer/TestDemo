/*
 �����ˣ���������
 �������ڣ�2024-10-3
*/
#pragma once
#ifdef _WINDLL
#define DTRAIN_API __declspec(dllexport)
#else
#define DTRAIN_API __declspec(dllimport)
#endif