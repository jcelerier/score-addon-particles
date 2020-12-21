#pragma once
#include <Gfx/Graph/mesh.hpp>
#include <Gfx/Graph/node.hpp>
#include <Gfx/Graph/renderer.hpp>

struct RenderedParticuleNode;
struct ParticuleNode : score::gfx::ProcessNode
{
  ParticuleNode();
  virtual ~ParticuleNode();
  const Mesh& mesh() const noexcept;

  score::gfx::NodeRenderer* createRenderer() const noexcept;

  std::unique_ptr<char[]> m_materialData;

private:
  friend struct RenderedParticuleNode;
  const Mesh* m_mesh{};

  QShader m_vertexS;
  QShader m_fragmentS;
};
