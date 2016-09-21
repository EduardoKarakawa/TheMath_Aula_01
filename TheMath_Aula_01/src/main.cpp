#include "ofMain.h"
#include "ofApp.h"

#include <iostream>
#include <Vector2D.h>

using namespace std;
using namespace math;

//int main() {
//
//	Vector2D v1 = Vector2D(5, 7);
//	Vector2D v2 = Vector2D(14, 13);
//
//	//cout << v1 + v2 << " " << v1 - v2 << " " << v1 * 3 << endl;
//
//	cout << (normalize(v1) * 7).size() << endl;
//
//	system("pause");
//}


//========================================================================
int main( ){
	ofSetupOpenGL(800,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
