#include <opencv2/opencv.hpp>

using namespace cv;

int main(){
	Mat img = imread("C:/Users/-LOUIEBOY-/Pictures/Toradora.jpg");
}

void example2_5(Mat & img){
	
	namedWindow("Example2_5-in", WINDOW_AUTOSIZE);
	namedWindow("Example2_5-out", WINDOW_AUTOSIZE);

	imshow("Example2_5-in", img);

	Mat out;

	GaussianBlur(img, out, Size(5, 5), 3, 3);
	GaussianBlur(out, out, Size(5, 5), 3, 3);

	imshow("Example2_5-out", out);

	waitKey(0);

}