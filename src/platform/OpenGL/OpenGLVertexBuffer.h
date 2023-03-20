#ifndef SLIM_OPENGLVERTEXBUFFER_H
#define SLIM_OPENGLVERTEXBUFFER_H

#include "rendering/vertex_buffer.h"

namespace slim
{
  class OpenGLVertexBuffer : public VertexBuffer
  {
  public:
    OpenGLVertexBuffer(float *vertices, uint32_t size);
    virtual ~OpenGLVertexBuffer();

    void bind();
    void unbind();
    void set(const void *data, uint32_t size);

  private:
    uint32_t _id;
  };
}

#endif