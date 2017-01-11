#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	//Open the first webcam plugged in the computer
	VideoCapture cap(0);
	if (!cap.isOpened())
	{
		cerr << "ERROR: Could not open camera" << endl;
		return 1;
	}

	//Create a window to display the images from the webcam
	namedWindow("Webcam", WINDOW_AUTOSIZE);
	waitKey(1000);

	//Mat frame;

	//Pick up a new frame and display it until you press a key
	while (1)
	{
		//This will contain the image from the webcam
		Mat frame;

		//Capture the next frame from the webcam
		cap >> frame;

		//Show the image on the window
		imshow("Webcam", frame);

		//Wait for a key to be pressed
		if (waitKey(30) >= 0) break;
	}

	//Success. The program accomplished its mission and now it can go
	// to the heaven of programs.
	return 0;
}


/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(){
	VideoCapture cap;
	cap.open(0);
/*	if (!cap.isOpened()){
		cerr << "Couldn't open capture." << endl;
		return -1;
	}*/
//	namedWindow("Example2-10", WINDOW_AUTOSIZE);
	/*Mat frame;
		while (1)
		{
			cap >> frame 
		imshow("Example2-10", frame)
				if (waitKey(33) >= 0) break;
		}*/
//		return 0;
//}
//*/