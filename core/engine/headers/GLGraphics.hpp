#ifndef GLGRAPHICS_H
#define GLGRAPHICS_H


/**
* @author Jeffrey Uong
* @version 0.5
* @copyright Copyright (C) Allan Deutsch & Jeff Uong. All rights reserved.
*
*/

#include <GL/glew.h> //Lots of opengl functions
#include "../../engine/headers/System.h"
#include <unordered_map> //unordered_map

namespace AlJeEngine
{
  class GLGraphics : public System
  {
  public:
    void Init(void);       //Initilize SDL
    void Update(float dt); //Update everyframe  
    void Shutdown(void);   //called when system is deleated

  private:
    struct MeshInfo
    {
      GLuint vbo;//vertex buffer object
      GLuint vao;//vertex array object
      GLuint ebo;//element array object

      MeshInfo() :vbo(0), vao(0), ebo(0) {}//Init everything to 0
    };

    void CreateMesh();
    void DeleteMesh();
    MeshInfo QuadInfo;

  };

}



#endif