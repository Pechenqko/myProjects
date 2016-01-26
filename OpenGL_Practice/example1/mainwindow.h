#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QVector2D>
#include <QVector3D>
#include <QMatrix4x4>

#define vec2 QVector2D
#define vec3 QVector3D
#define vec4 QVector4D
#define mat3 QMatrix3x3
#define mat4 QMatrix4x4

#define PI 3.14159265359f
#define DEGREE PI/180.0f

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QDebug>

QT_FORWARD_DECLARE_CLASS(QOpenGLShaderProgram)

class mainWindow : public QOpenGLWidget, public QOpenGLFunctions
{
public:
    mainWindow(QWidget *parent = 0);
protected:
    void initializeGL() Q_DECL_OVERRIDE;
    void paintGL() Q_DECL_OVERRIDE;
    void resizeGL(int width, int height) Q_DECL_OVERRIDE;
};

#endif // MAINWINDOW_H
