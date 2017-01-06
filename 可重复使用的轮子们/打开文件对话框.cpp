#include "mytools.h"

string get_direc_path()
{
	HINSTANCE hInstance;  //HINSTANCE��Ҫ����windows.h
	typedef int  (Fun)(string &);  //���庯��ԭ��
	Fun* pFun;  //��������ָ��

	//������LoadLibrary���صĶ�̬���ӿ��ʵ�����
	hInstance = LoadLibrary(L"getPath");

	//�ҵ�DLL��ShowTime�����ĵ�ַ������������
	//pFun=(Fun*)GetProcAddress(hInstance,"ShowTime"); 

	//ʹ��������ŷ�ʽ�������Լӿ캯���ĵ���
	pFun = (Fun*)GetProcAddress(hInstance, (LPCSTR)2);

	string  path;
	path.reserve(1024);
	int size = (*pFun)(path); //���ú��� 
	cout << path  << endl;

	FreeLibrary(hInstance);  //�ͷŵ��õ�DLL��Դ

	return path;
}


string get_path()
{
	HINSTANCE hInstance;  //HINSTANCE��Ҫ����windows.h
	typedef int  (Fun)(string &);  //���庯��ԭ��
	Fun* pFun;  //��������ָ��

	//������LoadLibrary���صĶ�̬���ӿ��ʵ�����
	hInstance = LoadLibrary(L"getPath");

	//�ҵ�DLL��ShowTime�����ĵ�ַ������������
	//pFun=(Fun*)GetProcAddress(hInstance,"ShowTime"); 

	//ʹ��������ŷ�ʽ�������Լӿ캯���ĵ���
	pFun = (Fun*)GetProcAddress(hInstance, (LPCSTR)1);

	string  path;
	path.reserve(1024);
	int size = (*pFun)(path); //���ú��� 
	//cout << path << size << endl;

	FreeLibrary(hInstance);  //�ͷŵ��õ�DLL��Դ

	return path;
}