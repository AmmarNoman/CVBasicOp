#ifndef MyTools
#define MyTools


// for filelisting
#include <stdio.h>
#include <io.h>
// for fileoutput
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
#include <time.h>
//#include "cv.h"
//#include "cvaux.h"
#include <opencv2/opencv.hpp>
#include <opencv2/features2d/features2d.hpp>//feature2d ģ��. 2D������ܣ�
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui/highgui.hpp"
//#include "highgui.h"
//#include <ml.h>
#include <windows.h>
#include"tinyxml.h"
#include "tinystr.h"
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
using namespace cv;
using namespace cv::ml;
#pragma comment( lib, "vfw32.lib" )
#pragma comment( lib, "comctl32.lib" )


//�ο�����һ�������������������Ŀ��һ����Ŀ������һ����Ŀ�еĺ��� - ��ײ� - 51CTO��������
// http://dreamylights.blog.51cto.com/1163218/1299828


//��Ŀ¼�е�ͼ��ת��Ϊ��Ƶ;
void testimg2video();
void img2video(string path, double rate, double width, double height);

//����Ƶת��Ϊÿһ֡��ͼƬ;
void testVideo2img();
void video2img(string path);
//����canny��Ե���
void CannyThreshold(int, void*);
int testCanny();

//��ȡĿ¼�µ��ļ���;
void getFiles(string path, vector<string>& files);
//ѡ���ļ�Ŀ¼
string get_path();
//ѡ���ļ���Ŀ¼
string get_direc_path();


void backgroudSubstract();

//��ͼ����и�ʴ����;
int mophology_imgprocess(Mat &imgToProcess, int &iterls);



#endif