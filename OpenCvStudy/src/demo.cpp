#include <opencv2/highgui/highgui.hpp>//OpenCv HighGuiģ��ͷ�ļ�
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;


void demo1()
{
	//����ͼƬ
	Mat img=imread("res/face.jpg");
	imshow("�����ͼƬ",img);
	waitKey(0);
}

void demo2()
{
	Mat srcImage=imread("res/face.jpg");
	imshow("��ԭͼ����ʴ����",srcImage);
	Mat element=getStructuringElement(MORPH_RECT,Size(4,4));
	Mat dstImage;
	erode(srcImage,dstImage,element);
	imshow("��Ч��ͼ����ʴЧ��",dstImage);
	imwrite("res/erode_face.jpg",dstImage);
	waitKey(0);
}
void demo3()
{
	Mat srcImage=imread("res/face.jpg");
	imshow("��ԭͼ����ֵ�˲�",srcImage);
	Mat dstImage;
	blur(srcImage,dstImage,Size(5,5));
	imshow("����ֵ�˲���Ч��ͼ",dstImage);
	imwrite("res/blur_face.jpg",dstImage);
	waitKey(0);
}

void demo4()
{
	Mat srcImage=imread("res/face.jpg");
	imshow("��ԭʼͼ��Canny��Ե���",srcImage);
	Mat edge,grayImage;
	cvtColor(srcImage,grayImage,CV_BGR2GRAY);
	imshow("���Ҷ�ͼ��GrayImage",grayImage);
	imwrite("res/gray_face.jpg",grayImage);
	blur(grayImage,edge,Size(3,3));
	Canny(edge,edge,3,9,3);
	imshow("��Ч��ͼ��Canny��Ե���",edge);
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
		imshow("��ȡ��Ƶ",frame);
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
		imshow("��ȡ��Ƶ",frame);
		waitKey(30);
	}
}

void demo7()
{
	Mat image0=imread("res/face.jpg",1);
	Mat image1=imread("res/face.jpg",0);
	imshow("��ͨ��ͼƬ",image0);
	imshow("��ͨ��ͼƬ",image1);
	waitKey(0);
}

void demo8()
{
	//Mat image0=imread("res/face.jpg",1);
	Mat image1=imread("res/t_face.jpg",0);
	//imshow("��ͨ��ͼƬ",image0);
	imshow("��ͨ��ͼƬ",image1);
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