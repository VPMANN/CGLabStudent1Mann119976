#ifdef SCENE_GRAPH.HPP
#define SCENE_GRAPH.HPP
#include "node.hpp"

struct SceneGraph {
    public:

    std::string getName() const;
    void setName(std::string newname);

    std::shared_ptr<Node> getRoot() const;
    void setRoot(Node const& newnode);

    private:

    std::string name;
    std::shared_ptr<Node> root;
}

#endif SCENE_GRAPH.HPP
