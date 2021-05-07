#pragma once
#include <LocalTree/LocalTreeComponent.hpp>
#include <LocalTree/ProcessComponent.hpp>

namespace Particles::Mesh
{
class Model;

class LocalTreeProcessComponent : public LocalTree::ProcessComponent_T<Model>
{
  COMPONENT_METADATA("7160a126-f158-4cc9-b1c4-22bed2ce6aec")

public:
  LocalTreeProcessComponent(
      ossia::net::node_base& parent,
      Particles::Mesh::Model& scenario,
      const score::DocumentContext& doc,
      QObject* parent_obj);

  ~LocalTreeProcessComponent() override;
};

using LocalTreeProcessComponentFactory
    = LocalTree::ProcessComponentFactory_T<LocalTreeProcessComponent>;
}
