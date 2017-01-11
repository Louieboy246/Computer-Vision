#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
	Mat img_rgb = imread("C:/Users/-LOUIEBOY-/Pictures/Toradora.jpg");
	Mat img_gry, img_cny;
	cvtColor(img_rgb, img_gry, CV_BGR2GRAY);
	namedWindow("Original", 0);
	namedWindow("Gray", 0);
	namedWindow("Canny", 0);
	imshow("Original", img_rgb);
	imshow("Gray", img_gry);
	Canny(img_gry, img_cny, 10, 100, 3, true);
	imshow("Canny", img_cny);
	waitKey(0);
}
