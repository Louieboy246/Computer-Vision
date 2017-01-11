/**
* @function moments_demo.cpp
* @brief Demo code to calculate moments
* @author OpenCV team
*/

#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
using namespace cv;

int main()
{
VideoCapture cap;
cap.open(0);
waitKey(1000);

Mat frame;
Mat con;
Mat grayframe;

vector<vector<Point> > contours;
vector<Vec4i> hierarchy;


while (true)
{
	cap >> frame;


	//con.create(frame.rows, frame.cols, CV_8UC3);
	cvtColor(frame, con, CV_BGR2GRAY);
	waitKey(1000);

	findContours(frame, contours, hierarchy,
		CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE);
	waitKey(1000);

	cv::drawContours(frame, contours, -1, cv::Scalar(0, 0, 255), 2);


	imshow("frame", frame);

	waitKey(33);
}
}