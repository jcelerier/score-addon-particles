#include "LocalTree.hpp"

#include <Mesh/Process.hpp>
#include <LocalTree/Property.hpp>

namespace Particles::Mesh
{
LocalTreeProcessComponent::LocalTreeProcessComponent(
    ossia::net::node_base& parent,
    Particles::Mesh::Model& proc,
    const score::DocumentContext& sys,
    QObject* parent_obj)
    : LocalTree::ProcessComponent_T<Particles::Mesh::Model>{
        parent,
        proc,
        sys,
        "gfxComponent",
        parent_obj}
{
}

LocalTreeProcessComponent::~LocalTreeProcessComponent() { }
}
