# OpenCV C++ Detector App

## Extra information

* [Background extraction](http://docs.opencv.org/3.1.0/d1/dc5/tutorial_background_subtraction.html)

## Dependencies

### Installing OpenCV

Clone this repo for an automatic installation script:

```
cd
git clone https://github.com/jayrambhia/Install-OpenCV
```

Next execute the script for your OS. For example for Ubuntu:

```
cd ubuntu
./opencv_latest.sh
```

Now you are ready to compile OpenCV apps.

## Compiling the OpenCV C++ app

Just execute a `make` inside the *opencv_detector* directory:

```
cd opencv_detector
make
```

## Running the OpenCV C++ app

Traverse to the *opencv_detector/build* dir and run the `peeps` binary.

```
cd opencv_detector/build
./peeps
```