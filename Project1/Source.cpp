#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main()
{
	Mat input = imread("C:\\Users\\user\\Desktop\\Lenna.jpg");
	Mat gray, edge, output;

	cvtColor(input, gray, COLOR_RGB2GRAY);
	imshow("原始影像", input);
	imshow("灰階影像", gray);

	GaussianBlur(gray, edge, Size(3, 3), 0); // 高斯濾波
	Canny(edge, output, 15, 10);

	imshow("Canny image", output);
	waitKey();
	return 0;

}
