#ifdef GEOMETRY_NODE_HPP
#define GEOMETRY_NODE_HPP

#include "node.hpp"
#include "model.hpp"

class GeometryNode : public Node{
    public:

    model getGeometry() const;
    void setGeometry(model const& newmodel);

    private:

    model geometry;
}
#endif