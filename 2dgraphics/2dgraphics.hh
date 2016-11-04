#ifndef GRAPHIC_H_
#define GRAPHIC_H_

#include <string>
#include <fstream>
#include <vector>
#include <QPaintEvent>
#include <QPainter>
#include <QtSvg/QSvgRenderer>

using namespace std;

class Draw2DGraphics : public QWidget{
private:
    //source data file path
    static string path;
    //source data file name
    static string sourceFile;
    //store all source data in SVG format
    vector<string> allObjects;
    //read source file and set all drawing objects to allObject variable
    //assume each line in source file represents one object, data is stored by certain rules
    //The rules of how to store drawing data will be decided in future
    void setDrawingObjects(){}
public:
    //constructor
    Draw2DGraphics(){}
    //in order to get source data, this method will be implemented by other class
    static void setDataSource(const string& path_, const string& sourceFile_){
        path = path_;
        sourceFile = sourceFile_;
    }
    //set path of source data file
    string getPath() const {return path;}
    //set name of source data file
    string getsourceFile() const {return sourceFile;}
    //read from variable allObject and display them on mainwindow
    virtual void paintEvent(QPaintEvent* event){}
}