#include <opencv2/opencv.hpp>

#define w 400

using namespace cv;

// Function headers
void MyEllipse(Mat img, double angle);
void MyFilledCircle(Mat img, Point center);

int main()
{
	// Window names
	char atom_window[] = "Drawing 1: Atom";

	Mat atom_image = Mat::zeros(w, w, CV_8UC3);

	// 1.b. Creating circles
	MyFilledCircle(atom_image, Point(w / 2.0, w / 2.0));

	// 3. Display your stuff
	imshow(atom_window, atom_image);
	moveWindow(atom_window, 0, 200);

	waitKey(0);
	return(0);
}

void MyFilledCircle(Mat img, Point center)
{
	int thickness = -1;
	int lineType = 8;

	circle(img,
		center,
		w / 32.0,
		Scalar(0, 0, 255),
		thickness,
		lineType);
}