#pragma once
#ifndef _API_H
#define _API_H
#include "Glob_Var.h"
#include "Intepretor.h"
#include "Record_Manager.h"
#include "Buffer.h"
#include "Catalog.h"
#include "Select.h"
#include <string>
#include <vector>
using namespace std;

/*
	负责调度各种模块.
	接受用户的输入，交由Interpreter处理，通过处理结果，调用
	各个模块的功能实现用户的需求.
*/
class API
{
public:
	API();
	static API & Instance();	//实例化
	/*	
		命令操作
	*/
	void CreateTable(string & Tablename,vector<Column_Type> & Attributes);//Create
	void Insert_Into(string &Tablename, Record R);//Insert into
	//void Select(string table_name, vector<Comparison> Select_Attributes);//选择命令
};
inline static API & Instance()
{
	static API API_Instance;
	return API_Instance;
}
#endif