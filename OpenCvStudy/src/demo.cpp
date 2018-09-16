#include <opencv2/highgui/highgui.hpp>//OpenCv HighGui模块头文件
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;


void demo1()
{
	//载入图片
	Mat img=imread("res/face.jpg");
	imshow("载入的图片",img);
	waitKey(0);
}

void demo2()
{
	Mat srcImage=imread("res/face.jpg");
	imshow("【原图】腐蚀操作",srcImage);
	Mat element=getStructuringElement(MORPH_RECT,Size(4,4));
	Mat dstImage;
	erode(srcImage,dstImage,element);
	imshow("【效果图】腐蚀效果",dstImage);
	imwrite("res/erode_face.jpg",dstImage);
	waitKey(0);
}
void demo3()
{
	Mat srcImage=imread("res/face.jpg");
	imshow("【原图】均值滤波",srcImage);
	Mat dstImage;
	blur(srcImage,dstImage,Size(5,5));
	imshow("【均值滤波】效果图",dstImage);
	imwrite("res/blur_face.jpg",dstImage);
	waitKey(0);
}

void demo4()
{
	Mat srcImage=imread("res/face.jpg");
	imshow("【原始图】Canny边缘检测",srcImage);
	Mat edge,grayImage;
	cvtColor(srcImage,grayImage,CV_BGR2GRAY);
	imshow("【灰度图】GrayImage",grayImage);
	imwrite("res/gray_face.jpg",grayImage);
	blur(grayImage,edge,Size(3,3));
	Canny(edge,edge,3,9,3);
	imshow("【效果图】Canny边缘检测",edge);
	imwrite("res/edge_face.jpg",edge);
	waitKey(0);
}

void demo5()
{
	VideoCapture capture("res/1.avi");
	while(1)
	{
		Mat frame;
		capture>>frame;
		if(frame.empty())break;
		imshow("读取视频",frame);
		waitKey(50);
	}
}

void demo6()
{
	VideoCapture capture(0);
	while (1)
	{
		Mat frame;
		capture>>frame;
		imshow("读取视频",frame);
		waitKey(30);
	}
}

void demo7()
{
	Mat image0=imread("res/face.jpg",1);
	Mat image1=imread("res/face.jpg",0);
	imshow("三通道图片",image0);
	imshow("单通道图片",image1);
	waitKey(0);
}

void demo8()
{
	//Mat image0=imread("res/face.jpg",1);
	Mat image1=imread("res/t_face.jpg",0);
	//imshow("三通道图片",image0);
	imshow("单通道图片",image1);
	cout<<"M = "<<endl<<" "<<image1<<endl<<endl;
	waitKey(0);
}

void demo()
{
	//demo1();
	//demo2();
	//demo3();
	//demo4();
	//demo5();
	//demo6();
	//demo7();
	demo8();
}