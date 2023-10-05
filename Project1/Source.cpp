#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main()
{
	Mat input = imread("C:\\Users\\user\\Desktop\\Lenna.jpg");
	Mat gray, edge, output;

	cvtColor(input, gray, COLOR_RGB2GRAY);
	imshow("��l�v��", input);
	imshow("�Ƕ��v��", gray);

	GaussianBlur(gray, edge, Size(3, 3), 0); // �����o�i
	Canny(edge, output, 15, 10);

	imshow("Canny image", output);
	waitKey();
	return 0;

}
