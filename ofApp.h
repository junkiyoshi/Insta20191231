#pragma once
#include "ofMain.h"
#include "Actor.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key) {};
	void keyReleased(int key) {};
	void mouseMoved(int x, int y) {};
	void mouseDragged(int x, int y, int button) {};
	void mousePressed(int x, int y, int button) { };
	void mouseReleased(int x, int y, int button) {};
	void mouseEntered(int x, int y) {};
	void mouseExited(int x, int y) {};
	void windowResized(int w, int h) {};
	void dragEvent(ofDragInfo dragInfo) {};
	void gotMessage(ofMessage msg) {};

	void setBoxToMesh(ofMesh& face_target, ofMesh& frame_target, glm::vec3 location, float size);
	void setBoxToMesh(ofMesh& face_target, ofMesh& frame_target, glm::vec3 location, float height, float width, float depth);


	ofEasyCam cam;
	vector<glm::vec3> location_list;
	vector<vector<int>> next_index_list;
	vector<int> destination_list;

	vector<Actor*> actors;
	ofMesh face_mesh, frame_mesh;
};