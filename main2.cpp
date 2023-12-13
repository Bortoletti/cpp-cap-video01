#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <stdio.h>
#include <string>

int main( int args, char** argv )
{
cv:: Mat frame;
 //--- INITIALIZE VIDEOCAPTURE
 cv::VideoCapture cap;
 // open the default camera using default API
 // cap.open(0);
 // OR advance usage: select any API backend
 int deviceID = 0; // 0 = open default camera
 int apiID = cv::CAP_ANY; // 0 = autodetect default API
 // open selected camera using selected API
// "url":"rtsp://admin:neuro-2023@192.168.0.194:554/Streaming/Channels/101"
//    ,"url2":"rtsp://admin:neuro-2023@192.168.0.195:554/Streaming/Channels/101"
 std::string url = argv[1];
 cap.open( url , apiID);
 // check if we succeeded
 if (!cap.isOpened()) {
   std::cerr << "ERROR! Unable to open camera\n";
   return -1;
 }
 //--- GRAB AND WRITE LOOP
// std::cout << "Start grabbing" << std::endl
 // << "Press any key to terminate" << std::endl;
 for (;;)
 {
 // wait for a new frame from camera and store it into 'frame'
 cap.read(frame);
 // check if we succeeded
 if (frame.empty()) {
   std::cerr << "ERROR! blank frame grabbed\n";
   break;
 }
   // show live and wait for a key with timeout long enough to show images
  // imshow("Live", frame);
  //  if ( cv::waitKey(5) >= 0)  break;
 }
 // the camera will be deinitialized automatically in VideoCapture destructor
 return 0;
}