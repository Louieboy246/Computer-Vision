#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

// Global variables
const int slider_max = 1;
int slider;
Mat img;

// Callback function for trackbar event
void on_trackbar(int pos, void*)
{
	Mat img_converted;
	if (pos > 0) cvtColor(img, img_converted, CV_RGB2GRAY);
	else img_converted = img;

	imshow("Trackbar app", img_converted);
}

int main()
{
	img = imread("C:/Users/-LOUIEBOY-/Pictures/Toradora.jpg");

	namedWindow("Trackbar app");
	imshow("Trackbar app", img);

		slider = 0;

	createTrackbar("RGB <-> Grayscale", "Trackbar app", &slider, slider_max, on_trackbar);
	while (char(waitKey(1)) != 'q'){}

	return 0;
}