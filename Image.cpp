#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

using namespace cv;
using namespace std;
int main()
{
	Mat im = imread("C:/Users/-LOUIEBOY-/Pictures/Toradoa.jpg"); //insert directory of image

	if (im.empty())
	{

		cout << "Cannot load image!" << endl;
		while (true){}
		return -1;
	}
	imshow("Image", im);
	waitKey(0);
}
