all:
	g++ -o appVideo main2.cpp -I /usr/local/include/opencv4/ -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -lopencv_videoio
