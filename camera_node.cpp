#include "camera_node.hpp"

bool CameraNode::getPerspective() const{
    return isPerspective;
}

bool CameraNode::getEnabled() const{
    return isEnabled;
}

bool CameraNode::setEnabled(bool set){
    isEnabled = set;
}

glm::fmt4 CameraNode::getProjectionMatrix() const{
    return projectionMatrix;
}

void CameraNode::setProjectionMatrix(glm::fmt4 const& matrix){
    projectionMatrix = matrix;
}



