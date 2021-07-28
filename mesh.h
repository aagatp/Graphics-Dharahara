#pragma once
#include "triangle.h"
#include <vector>
#include <string>
#include<iostream>
#include <fstream>
#include <sstream>
#include "maths.h"
#include "camera.h"

class Mesh{
public:
    Mesh(Canvas*);
    void load(std::string);
    void draw();
    void rotate(float,float,float);
    void translate(float,float,float);
    void scale(float, float, float);
    void applyTransform(maths::mat4f&);
    void backFaceCulling(Triangle&);
    bool isbackfaceCulling = true;
    Camera* camera;
private:
    std::vector<Triangle> triangles;
    Canvas* canvas;
    bool isViewProject;
    std::vector<Triangle> trisViewProject;

    std::vector<Triangle> finalTris;
};