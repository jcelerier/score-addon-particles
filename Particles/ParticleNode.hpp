#pragma once
#include <Gfx/Graph/Node.hpp>
#include <Gfx/Graph/RenderList.hpp>

namespace score::gfx
{
struct RenderedParticuleNode;
struct ParticuleNode : score::gfx::ProcessNode
{
  ParticuleNode();
  virtual ~ParticuleNode();
  const Mesh& mesh() const noexcept override;

  score::gfx::NodeRenderer* createRenderer(RenderList& r) const noexcept override;

  std::unique_ptr<char[]> m_materialData;

private:
  friend struct RenderedParticuleNode;
  const Mesh* m_mesh{};

  QShader m_vertexS;
  QShader m_fragmentS;
};
}
