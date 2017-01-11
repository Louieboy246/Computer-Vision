#include <opencv2/opencv.hpp>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>

using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap;
	cap.open(0);
	waitKey(1000);

	if (!cap.isOpened())
	{
		cerr << "ERROR: No camera" << endl;
		return 1;
	}

	namedWindow("Webcam", 1);
	namedWindow("Gray", 1);
	namedWindow("Blur", 1);
	namedWindow("Canny", 1);
	waitKey(1000);

	Mat frame;
	Mat gray;
	Mat blur;
	Mat canny;

	for (;;)
	{
		cap >> frame;

		imshow("Webcam", frame);
		waitKey(1000);

		cvtColor(frame, gray, CV_BGR2GRAY);
		
		imshow("Gray", gray);
		waitKey(1000);

		Canny(gray, canny, 10, 100, 3, true);
		imshow("Canny", canny);
		waitKey(1000);

		GaussianBlur(frame, blur, Size(5, 5), 3, 3);
		GaussianBlur(blur, blur, Size(5, 5), 3, 3);
		imshow("Blur", blur);

		if (waitKey(30) >= 0)
			break;
	}

	return 0;
}