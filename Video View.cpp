#include <opencv2/opencv.hpp>

//using namespace cv;

int main(){
	cv::Mat img = cv::imread("C:/Users/-LOUIEBOY-/Videos/Facebook.mp4");
	//if (img.empty()) return -1;
	cv::namedWindow("Example2", cv::WINDOW_AUTOSIZE);
	cv::imshow("Example2", img);
	cv::waitKey(0);
	cv::destroyWindow("Example2");
}