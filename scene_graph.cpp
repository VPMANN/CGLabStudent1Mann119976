#include "scene_graph.hpp"

std::string SceneGraph::getName() const{
    return name;
}

void SceneGraph::setName(std::string newname){
    name = newname;
}


std::shared_ptr<Node> SceneGraph::getRoot() const{
    return root;
}

void SceneGraph::setRoot(Node const& newnode){
    auto newnode = std::make_shared<Node> newnode;
    root = newnode;
}

