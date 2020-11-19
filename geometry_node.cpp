#include "geometry_node.hpp"

model GeometryNode::getGeometry() const{
    return geometry;
}

void GeometryNode::setGeometry(model const& newmodel){
    geometry = newmodel;
}