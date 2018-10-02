#include "../helper/gl_framework.hpp"
#include "../helper/shader_util.hpp"

void VertexBufferInit(GLuint & vboID, unsigned int size);
void VertexBufferSubData(const void * data, unsigned int offset, unsigned int size);
void VertexBufferBind(GLuint vboID);
void VertexBufferUnbind();