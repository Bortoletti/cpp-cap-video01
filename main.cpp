#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <iostream>

int main( int argc, char ** argv ){
  cv::VideoCapture cap( 0 );
  cv::Mat img;

  while( true ){
    cap.read( img );
    cv::imshow("Minha Webcam", img );
    cv::imwrite("teste.jpeg", img );
    // cv::VideoWriter escritor() "xxx.avi", 4, 25, 300, true );
    cv::waitKey( 1 );
  }

  return 0;
}


//g++ -I/usr/local/include/opencv4 -g main.cpp -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -lopencv_videoio
// g++ -o app main.cpp -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -lopencv_videoio
