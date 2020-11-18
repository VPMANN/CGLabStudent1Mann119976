#ifdef CAMERA_NODE_HPP
#define CAMERA_NODE_HPP
#include "node.hpp"

class CameraNode : public Node{
    public:

    bool getPerspective() const;

    bool getEnabled() const;
    void setEnabled(bool set);

    glm::fmt4 getProjectionMatrix() const;
    void setProjectionMatrix(glm::fmt4 const& matrix);

    private:

    bool isPerspective;
    bool isEnabled;
    glm::fmt4 projectionMatrix;
}
#endif