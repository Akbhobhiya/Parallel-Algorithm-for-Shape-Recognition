#include "../include/Sharp.h"
#include "../include/SharpSupport.h"
#include "../test/SharpTest.h"
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {

  

  int shapeSize=256;
  double minTheta=0.0;
  double maxTheta=180.0;
  int thetaStep=5;
  double lenThresh=2.0;
  int threads=0;
  
  if(argc==4)
  	threads=std::stoi(argv[3]);

  std::string refShapes=argv[1];
  std::string testShape=argv[2];

   if(threads==0)
   {
	aapp::sharpseq(	testShape,
                refShapes,
                shapeSize,
                minTheta,
                maxTheta,
                thetaStep,
                lenThresh);
                exit(0);
   }
    aapp::sharp(testShape,
                refShapes,
                shapeSize,
                minTheta,
                maxTheta,
                thetaStep,
                lenThresh,
                threads);
    
  return 0;
}
