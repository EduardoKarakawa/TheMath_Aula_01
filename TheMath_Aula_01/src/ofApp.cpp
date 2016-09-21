#include "ofApp.h"

using namespace math;

//--------------------------------------------------------------
void ofApp::setup(){
	spaceship.load("saucer.png");
	position.set(ofGetWidth() / 2, ofGetHeight() / 2);
	
	velocity = Vector2D(200,0);

	
}

//--------------------------------------------------------------
void ofApp::update(){
	if (mouse.size() < 0.1) {
		Vector2D direction = normalize(mouse - position);
		velocity = direction * 500;

		mouse = Vector2D();
	}

	position += velocity * ofGetLastFrameTime();
	//
	if (position.x > ofGetWidth() - spaceship.getWidth()) {
		velocity.x *= -1;
	}
	else if (position.x < 0) {
		velocity.x *= -1;
	}

	if (position.y > ofGetHeight() - spaceship.getHeight()) {
		velocity.y *= -1;
	}
	else if (position.y < 0) {
		velocity.y *= -1;
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	drawImage(spaceship, position);
}

void ofApp::drawImage(ofImage& image, math::Vector2D& position) {
	image.draw(position.x, position.y);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	mouse.set(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
